import java.awt.FlowLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;



    public class JanelaInserirLivro extends JFrame {
        private JTextField campoTitulo, campoAutor, campoAno;
        private JButton botaoIncluir, botaoRevistas, botaoListagem;

        public JanelaInserirLivro() {
            setTitle("Inserir Livro");
            setSize(300, 250);
            setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            setLayout(new FlowLayout());

            campoTitulo = new JTextField(20);
            campoAutor = new JTextField(20);
            campoAno = new JTextField(20);
            botaoIncluir = new JButton("Incluir Livro");
            botaoRevistas = new JButton("Revistas");
            botaoListagem = new JButton("Listagem");

            add(new JLabel("Título:"));
            add(campoTitulo);
            add(new JLabel("Autor:"));
            add(campoAutor);
            add(new JLabel("Ano:"));
            add(campoAno);
            add(botaoIncluir);
            add(botaoRevistas);
            add(botaoListagem);

            botaoIncluir.addActionListener(e -> {
                try {
                    MaterialBibliografico.adicionarMaterialBibliografico(
                            new Livro(campoTitulo.getText(),
                                    campoAutor.getText(),
                                    Integer.parseInt(campoAno.getText()))
                    );
                    JOptionPane.showMessageDialog(null, "Livro incluído.");

                    campoTitulo.setText("");
                    campoAutor.setText("");
                    campoAno.setText("");

                } catch (NumberFormatException error) {
                    JOptionPane.showMessageDialog(null, "Não foi possível incluir este livro.");
                }
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

