public class Revista extends MaterialBibliografico {
    private String org;   
    private int vol;     
    private int nro;     
    private int ano;    

    public Revista(String titulo, String org, int vol, int nro, int ano) {
        super(titulo, null); 
        this.org = org;
        this.vol = vol;
        this.nro = nro;
        this.ano = ano;
    }

    public String getOrg() {
        return org;
    }

    public void setOrg(String org) {
        this.org = org;
    }

    public int getVol() {
        return vol;
    }

    public void setVol(int vol) {
        this.vol = vol;
    }

    public int getNro() {
        return nro;
    }

    public void setNro(int nro) {
        this.nro = nro;
    }

    public int getAno() {
        return ano;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

    @Override
    public String getTipoMaterial() {
        return "Revista";
    }

    @Override
    public String toString() {
        return "Revista: " + getTitulo() + " | Org: " + org + " | Vol: " + vol + " | Nro: " + nro + " | Ano: " + ano;
    }
}
