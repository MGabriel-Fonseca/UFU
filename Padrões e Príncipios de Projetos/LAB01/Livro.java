public class Livro extends MaterialBibliografico {
    private int ano; 

    public Livro(String titulo, String autor, int ano) {
        super(titulo, autor);
        this.ano = ano;
    }

    public int getAno() {
        return ano;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

    @Override
    public String getTipoMaterial() {
        return "Livro";
    }

    @Override
    public String toString() {
        return "Livro: " + getTitulo() + " | Autor: " + getAutor() + " | Ano: " + ano;
    }
}
