-- Determina o número de filmes com uma classificação IMDb de 10,0
SELECT COUNT(*) as numOfMoviesWithRatingAs10
FROM ratings
WHERE rating = 10.0