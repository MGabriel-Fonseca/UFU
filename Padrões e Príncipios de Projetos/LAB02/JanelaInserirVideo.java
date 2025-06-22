import java.awt.FlowLayout;
import javax.swing.*;

public class JanelaInserirVideo extends JFrame {
    private JTextField campoTitulo, campoAutor, campoDuracao;
    private JButton botaoIncluir, botaoLivros, botaoRevistas, botaoListagem;

    public JanelaInserirVideo() {
        setTitle("Inserir Vídeo");
        setSize(300, 250);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new FlowLayout());

        campoTitulo = new JTextField(20);
        campoAutor = new JTextField(20);
        campoDuracao = new JTextField(5);
        botaoIncluir = new JButton("Incluir Vídeo");
        botaoLivros = new JButton("Livros");
        botaoRevistas = new JButton("Revistas");
        botaoListagem = new JButton("Listagem");

        add(new JLabel("Título:"));
        add(campoTitulo);
        add(new JLabel("Autor:"));
        add(campoAutor);
        add(new JLabel("Duração (min):"));
        add(campoDuracao);
        add(botaoIncluir);
        add(botaoLivros);
        add(botaoRevistas);
        add(botaoListagem);

        botaoIncluir.addActionListener(e -> {
            try {
                Biblioteca.adicionarMaterial(
                        new Video(campoTitulo.getText(),
                                campoAutor.getText(),
                                Integer.parseInt(campoDuracao.getText()))
                );
                JOptionPane.showMessageDialog(null, "Vídeo incluído.");

                campoTitulo.setText("");
                campoAutor.setText("");
                campoDuracao.setText("");

            } catch (NumberFormatException error) {
                JOptionPane.showMessageDialog(null, "Não foi possível incluir este vídeo.");
            }
        });


        botaoLivros.addActionListener(e -> {
            new JanelaInserirLivro();
            this.setVisible(false);
        });

        botaoRevistas.addActionListener(e -> {
            new JanelaInserirRevista();
            this.setVisible(false);
        });

        botaoListagem.addActionListener(e -> {
            new JanelaListagem();
            this.setVisible(false);
        });

        setVisible(true);
    }
}
