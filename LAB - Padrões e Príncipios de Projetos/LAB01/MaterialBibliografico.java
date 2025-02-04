import java.util.ArrayList;
import java.util.List;

public abstract class MaterialBibliografico {
    private String titulo;
    private String autor;

    public static List<MaterialBibliografico> materiais = new ArrayList<>();

    public MaterialBibliografico(String titulo, String autor) {
        this.titulo = titulo;
        this.autor = autor;
    }

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public abstract String getTipoMaterial();

    public static void adicionarMaterialBibliografico(MaterialBibliografico material) {
        materiais.add(material);
    }
}
