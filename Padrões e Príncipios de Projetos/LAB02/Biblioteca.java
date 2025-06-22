import java.util.ArrayList;
import java.util.List;

public class Biblioteca {
    private static final List<MaterialBibliografico> materiais = new ArrayList<>();

    public static void adicionarMaterial(MaterialBibliografico material) {
        materiais.add(material);
    }

    public static List<MaterialBibliografico> listarMateriais() {
        return new ArrayList<>(materiais);
    }
}
