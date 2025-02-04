public class Revista extends MaterialBibliografico {
    private int edicao;

    public Revista(String titulo, String autor, int edicao) {
        super(titulo, autor);
        this.edicao = edicao;
    }

    public int getEdicao() {
        return edicao;
    }

    public void setEdicao(int edicao) {
        this.edicao = edicao;
    }

    @Override
    public String getTipoMaterial() {
        return "Revista";
    }

    @Override
    public String toString() {
        return "Revista: " + getTitulo() + " | Autor: " + getAutor() + " | Edição: " + edicao;
    }
}
