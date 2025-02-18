public class Revista implements MaterialBibliografico {
    private String titulo;
    private String org;
    private int vol;
    private int nro;
    private int ano;

    public Revista(String titulo, String org, int vol, int nro, int ano) {
        this.titulo = titulo;
        this.org = org;
        this.vol = vol;
        this.nro = nro;
        this.ano = ano;
    }

    @Override
    public String getTitulo() {
        return titulo;
    }

    @Override
    public String getDescricao() {
        return "Revista: " + titulo + " | Org: " + org + " | Vol: " + vol + " | Nro: " + nro + " | Ano: " + ano;
    }
}
