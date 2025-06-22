import javax.swing.*;

public class JanelaNavegacao {
    public static void adicionarBotoes(JFrame frame, JPanel panel, String telaAtual) {
        JButton botaoLivros = new JButton("Livros");
        JButton botaoRevistas = new JButton("Revistas");
        JButton botaoVideos = new JButton("Vídeos");
        JButton botaoListagem = new JButton("Listagem");

        if (!telaAtual.equals("Livros")) {
            botaoLivros.addActionListener(e -> {
                new JanelaInserirLivro();
                frame.dispose();
            });
            panel.add(botaoLivros);
        }

        if (!telaAtual.equals("Revistas")) {
            botaoRevistas.addActionListener(e -> {
                new JanelaInserirRevista();
                frame.dispose();
            });
            panel.add(botaoRevistas);
        }

        if (!telaAtual.equals("Vídeos")) {
            botaoVideos.addActionListener(e -> {
                new JanelaInserirVideo();
                frame.dispose();
            });
            panel.add(botaoVideos);
        }

        if (!telaAtual.equals("Listagem")) {
            botaoListagem.addActionListener(e -> {
                new JanelaListagem();
                frame.dispose();
            });
            panel.add(botaoListagem);
        }
    }
}
