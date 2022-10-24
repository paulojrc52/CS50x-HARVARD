-- Lista os nomes de todas as pessoas que dirigiram um filme que recebeu uma classificação de pelo menos 9,0
SELECT name
FROM people
JOIN directors ON directors.person_id = people.id
JOIN ratings ON directors.movie_id = ratings.movie_id
WHERE rating >= 9.0;
