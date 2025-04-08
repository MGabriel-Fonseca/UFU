import controller.ProdutoController;
import dao.ProdutoDAO;
import view.ProdutoView;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class Main {
    public static void main(String[] args) {
        try {
            String url = "jdbc:derby:MeuBancoDeDados;create=true";
            Connection conn = DriverManager.getConnection(url);


            ProdutoDAO produtoDAO = new ProdutoDAO(conn);
            produtoDAO.criarTabela();

            ProdutoView produtoView = new ProdutoView();

            new ProdutoController(produtoView, produtoDAO);

        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}
