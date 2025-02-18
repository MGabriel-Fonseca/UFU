import java.awt.BorderLayout;
import javax.swing.*;

public class JanelaListagem extends JFrame {
    private JTextArea textArea;

    public JanelaListagem() {
        setTitle("Listar Materiais");
        setSize(500, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BorderLayout());

        textArea = new JTextArea();
        textArea.setEditable(false);
        add(new JScrollPane(textArea), BorderLayout.CENTER);

        JPanel panel = new JPanel();
        JanelaNavegacao.adicionarBotoes(this, panel, "Listagem");
        add(panel, BorderLayout.SOUTH);

        atualizarLista();
        setVisible(true);
    }

    private void atualizarLista() {
        textArea.setText("");
        for (MaterialBibliografico material : Biblioteca.listarMateriais()) {
            textArea.append(material.getDescricao() + "\n");
        }
    }
}
