-- Determina a avaliação média de todos os filmes lançados em 2012
SELECT AVG(rating)
FROM ratings JOIN movies ON movies.id = ratings.movie_id
WHERE year = 2012;