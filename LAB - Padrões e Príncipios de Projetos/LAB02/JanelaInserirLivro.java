import java.awt.FlowLayout;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class JanelaInserirLivro extends JFrame {
    private JTextField campoTitulo, campoAutor, campoAno;
    private JButton botaoIncluir;

    public JanelaInserirLivro() {
        setTitle("Inserir Livro");
        setSize(300, 250);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new FlowLayout());

        campoTitulo = new JTextField(20);
        campoAutor = new JTextField(20);
        campoAno = new JTextField(5);
        botaoIncluir = new JButton("Incluir Livro");

        add(new JLabel("Título:"));
        add(campoTitulo);
        add(new JLabel("Autor:"));
        add(campoAutor);
        add(new JLabel("Ano:"));
        add(campoAno);
        add(botaoIncluir);

        botaoIncluir.addActionListener(e -> {
            try {
                Livro livro = new Livro(campoTitulo.getText(), campoAutor.getText(), Integer.parseInt(campoAno.getText()));
                Biblioteca.adicionarMaterial(livro);
                JOptionPane.showMessageDialog(null, "Livro incluído.");

                campoTitulo.setText("");
                campoAutor.setText("");
                campoAno.setText("");
            } catch (NumberFormatException error) {
                JOptionPane.showMessageDialog(null, "Erro ao incluir o livro.");
            }
        });

        JPanel panel = new JPanel();
        JanelaNavegacao.adicionarBotoes(this, panel, "Livros");
        add(panel);

        setVisible(true);
    }
}
