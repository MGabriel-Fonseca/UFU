import java.awt.FlowLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;

public class JanelaInserirRevista extends JFrame {
    private JTextField campoTitulo, campoAutor, campoEdicao;
    private JButton botaoIncluir, botaoLivros, botaoListagem;

    public JanelaInserirRevista() {
        setTitle("Inserir Revista");
        setSize(300, 250);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new FlowLayout());

        campoTitulo = new JTextField(20);
        campoAutor = new JTextField(20);
        campoEdicao = new JTextField(20);
        botaoIncluir = new JButton("Incluir Revista");
        botaoLivros = new JButton("Livros");
        botaoListagem = new JButton("Listagem");

        add(new JLabel("Título:"));
        add(campoTitulo);
        add(new JLabel("Autor:"));
        add(campoAutor);
        add(new JLabel("Edição:"));
        add(campoEdicao);
        add(botaoIncluir);
        add(botaoLivros);
        add(botaoListagem);

        // Ação para incluir a revista
        botaoIncluir.addActionListener(e -> {
            try {
                MaterialBibliografico.adicionarMaterialBibliografico(
                        new Revista(campoTitulo.getText(),
                                campoAutor.getText(),
                                Integer.parseInt(campoEdicao.getText()))
                );
                JOptionPane.showMessageDialog(null, "Revista incluída.");

                // Limpando os campos de texto
                campoTitulo.setText("");
                campoAutor.setText("");
                campoEdicao.setText("");

            } catch (NumberFormatException error) {
                JOptionPane.showMessageDialog(null, "Não foi possível incluir esta revista.");
            }
        });

        // Ação para voltar à janela de livros
        botaoLivros.addActionListener(e -> {
            new JanelaInserirLivro(); // Cria uma nova instância da janela de livros
            this.setVisible(false); // Oculta a janela de revistas
        });

        // Ação para ir para a janela de listagem
        botaoListagem.addActionListener(e -> {
            new JanelaListagem(); // Cria uma nova instância da janela de listagem
            this.setVisible(false); // Oculta a janela de revistas
        });

        setVisible(true);
    }
}
