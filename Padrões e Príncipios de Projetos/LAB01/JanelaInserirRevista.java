import java.awt.FlowLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;

public class JanelaInserirRevista extends JFrame {
    private JTextField campoTitulo, campoOrg, campoVol, campoNro, campoAno;
    private JButton botaoIncluir, botaoLivros, botaoListagem;

    public JanelaInserirRevista() {
        setTitle("Inserir Revista");
        setSize(300, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new FlowLayout());

        campoTitulo = new JTextField(20);
        campoOrg = new JTextField(20);
        campoVol = new JTextField(5);
        campoNro = new JTextField(5);
        campoAno = new JTextField(5);
        botaoIncluir = new JButton("Incluir Revista");
        botaoLivros = new JButton("Livros");
        botaoListagem = new JButton("Listagem");

        add(new JLabel("Título:"));
        add(campoTitulo);
        add(new JLabel("Org:"));
        add(campoOrg);
        add(new JLabel("Volume:"));
        add(campoVol);
        add(new JLabel("Número:"));
        add(campoNro);
        add(new JLabel("Ano:"));
        add(campoAno);
        add(botaoIncluir);
        add(botaoLivros);
        add(botaoListagem);

        botaoIncluir.addActionListener(e -> {
            try {
                MaterialBibliografico.adicionarMaterialBibliografico(
                        new Revista(campoTitulo.getText(),
                                campoOrg.getText(),
                                Integer.parseInt(campoVol.getText()),
                                Integer.parseInt(campoNro.getText()),
                                Integer.parseInt(campoAno.getText()))
                );
                JOptionPane.showMessageDialog(null, "Revista incluída.");

                campoTitulo.setText("");
                campoOrg.setText("");
                campoVol.setText("");
                campoNro.setText("");
                campoAno.setText("");

            } catch (NumberFormatException error) {
                JOptionPane.showMessageDialog(null, "Não foi possível incluir esta revista.");
            }
        });

        botaoLivros.addActionListener(e -> {
            new JanelaInserirLivro();
            this.setVisible(false);
        });

        botaoListagem.addActionListener(e -> {
            new JanelaListagem();
            this.setVisible(false);
        });

        setVisible(true);
    }
}
