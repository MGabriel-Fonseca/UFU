public class Video implements MaterialBibliografico {
    private String titulo;
    private String autor;
    private int duracao;

    public Video(String titulo, String autor, int duracao) {
        this.titulo = titulo;
        this.autor = autor;
        this.duracao = duracao;
    }

    @Override
    public String getTitulo() {
        return titulo;
    }

    @Override
    public String getDescricao() {
        return "Vídeo: " + titulo + " | Autor: " + autor + " | Duração: " + duracao + " min";
    }
}
