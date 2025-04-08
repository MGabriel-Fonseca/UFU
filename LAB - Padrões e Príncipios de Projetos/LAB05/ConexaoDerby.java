import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;

public class ConexaoDerby {
    public static void main(String[] args) {
        String url = "jdbc:derby:MeuBancoDeDados;create=true";

        try (Connection conn = DriverManager.getConnection(url)) {
            System.out.println("Conexão bem-sucedida!");

            // Criar uma tabela
            try (Statement stmt = conn.createStatement()) {
                String sql = "CREATE TABLE produtos (" +
                        "id INT PRIMARY KEY GENERATED ALWAYS AS IDENTITY (START WITH 1, INCREMENT BY 1), " +
                        "nome VARCHAR(100), " +
                        "descricao VARCHAR(255), " +
                        "preco DECIMAL(10, 2), " +
                        "estoque INT)";
                stmt.executeUpdate(sql);
                System.out.println("Tabela 'produtos' criada com sucesso!");
            } catch (SQLException e) {
                if (e.getSQLState().equals("X0Y32")) {
                    System.out.println("A tabela 'produtos' já existe.");
                } else {
                    throw e;
                }
            }

            // Inserindo um produto na tabela
            try (Statement stmt = conn.createStatement()) {
                String sql = "INSERT INTO produtos (nome, descricao, preco, estoque) " +
                        "VALUES ('Notebook', 'Notebook i7', 5800.00, 10)";
                stmt.executeUpdate(sql);
                System.out.println("Produto inserido com sucesso!");
            }

        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}
