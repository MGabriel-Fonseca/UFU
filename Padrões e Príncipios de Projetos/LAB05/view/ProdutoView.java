package view;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionListener;

public class ProdutoView extends JFrame {
    private JTextField txtId = new JTextField(5);
    private JTextField txtNome = new JTextField(20);
    private JTextField txtDescricao = new JTextField(20);
    private JTextField txtPreco = new JTextField(10);
    private JTextField txtEstoque = new JTextField(10);
    private JButton btnAdicionar = new JButton("Adicionar");
    private JButton btnAtualizar = new JButton("Atualizar");
    private JButton btnRemover = new JButton("Remover");
    private JTextArea txtLista = new JTextArea(10, 40);

    public ProdutoView() {
        setTitle("Gestão de Produtos");
        setSize(500, 400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new GridLayout(7, 2));

        add(new JLabel("ID (para atualizar/remover):"));
        add(txtId);
        add(new JLabel("Nome:"));
        add(txtNome);
        add(new JLabel("Descrição:"));
        add(txtDescricao);
        add(new JLabel("Preço:"));
        add(txtPreco);
        add(new JLabel("Estoque:"));
        add(txtEstoque);
        add(btnAdicionar);
        add(btnAtualizar);
        add(btnRemover);
        add(new JScrollPane(txtLista));

        setVisible(true);
    }

    public String getId() { return txtId.getText(); }
    public String getNome() { return txtNome.getText(); }
    public String getDescricao() { return txtDescricao.getText(); }
    public double getPreco() { return Double.parseDouble(txtPreco.getText()); }
    public int getEstoque() { return Integer.parseInt(txtEstoque.getText()); }

    public void adicionarListener(ActionListener listener) { btnAdicionar.addActionListener(listener); }
    public void atualizarListener(ActionListener listener) { btnAtualizar.addActionListener(listener); }
    public void removerListener(ActionListener listener) { btnRemover.addActionListener(listener); }
    public void exibirLista(String lista) { txtLista.setText(lista); }
}
