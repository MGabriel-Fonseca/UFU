public class Livro implements MaterialBibliografico {
    private String titulo;
    private String autor;
    private int ano;

    public Livro(String titulo, String autor, int ano) {
        this.titulo = titulo;
        this.autor = autor;
        this.ano = ano;
    }

    @Override
    public String getTitulo() {
        return titulo;
    }

    public String getAutor() {
        return autor;
    }

    public int getAno() {
        return ano;
    }

    @Override
    public String getDescricao() {
        return "Livro: " + titulo + " | Autor: " + autor + " | Ano: " + ano;
    }
}
