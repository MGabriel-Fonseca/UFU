package controller;

import dao.ProdutoDAO;
import model.Produto;
import view.ProdutoView;
import java.sql.SQLException;
import java.util.List;

public class ProdutoController {
    private ProdutoView view;
    private ProdutoDAO dao;

    public ProdutoController(ProdutoView view, ProdutoDAO dao) {
        this.view = view;
        this.dao = dao;


        this.view.adicionarListener(e -> adicionarProduto());
        this.view.atualizarListener(e -> atualizarProduto());
        this.view.removerListener(e -> removerProduto());


        atualizarListaProdutos();
    }

    private void adicionarProduto() {
        try {
            String nome = view.getNome();
            String descricao = view.getDescricao();
            double preco = view.getPreco();
            int estoque = view.getEstoque();

            Produto produto = new Produto(nome, descricao, preco, estoque);
            dao.adicionarProduto(produto);


            atualizarListaProdutos();

        } catch (SQLException | NumberFormatException e) {
            e.printStackTrace();
            view.exibirLista("Erro ao adicionar produto: " + e.getMessage());
        }
    }

    private void atualizarProduto() {
        try {
            int id = Integer.parseInt(view.getId());
            String nome = view.getNome();
            String descricao = view.getDescricao();
            double preco = view.getPreco();
            int estoque = view.getEstoque();

            Produto produto = new Produto(id, nome, descricao, preco, estoque);
            dao.atualizarProduto(produto);


            atualizarListaProdutos();

        } catch (SQLException | NumberFormatException e) {
            e.printStackTrace();
            view.exibirLista("Erro ao atualizar produto: " + e.getMessage());
        }
    }

    private void removerProduto() {
        try {
            int id = Integer.parseInt(view.getId());
            dao.removerProduto(id);


            atualizarListaProdutos();

        } catch (SQLException | NumberFormatException e) {
            e.printStackTrace();
            view.exibirLista("Erro ao remover produto: " + e.getMessage());
        }
    }

    private void atualizarListaProdutos() {
        try {
            List<Produto> produtos = dao.listarProdutos();
            StringBuilder lista = new StringBuilder();

            for (Produto p : produtos) {
                lista.append("ID: ").append(p.getId())
                        .append(" | Nome: ").append(p.getNome())
                        .append(" | Preço: R$ ").append(p.getPreco())
                        .append(" | Estoque: ").append(p.getEstoque())
                        .append("\n");
            }

            view.exibirLista(lista.toString());

        } catch (SQLException e) {
            e.printStackTrace();
            view.exibirLista("Erro ao listar produtos: " + e.getMessage());
        }
    }
}
