import java.awt.BorderLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;

public class JanelaListagem extends JFrame {
    private JTextArea textArea;
    private JButton botaoLivros, botaoRevistas;

    public JanelaListagem() {
        setTitle("Listar Materiais");
        setSize(500, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BorderLayout());

        textArea = new JTextArea();
        textArea.setEditable(false);
        add(new JScrollPane(textArea), BorderLayout.CENTER);

        botaoLivros = new JButton("Livros");
        botaoRevistas = new JButton("Revistas");

        JPanel panel = new JPanel();
        panel.add(botaoLivros);
        panel.add(botaoRevistas);
        add(panel, BorderLayout.SOUTH);


        botaoLivros.addActionListener(e -> {
            new JanelaInserirLivro(); 
            this.setVisible(false);
        });

       
        botaoRevistas.addActionListener(e -> {
            new JanelaInserirRevista();
            this.setVisible(false); 
        });

        atualizarLista();
        setVisible(true);
    }

    private void atualizarLista() {
        textArea.setText("");
        for (MaterialBibliografico material : MaterialBibliografico.materiais) {
            textArea.append(material.toString() + "\n");
        }
    }
}
