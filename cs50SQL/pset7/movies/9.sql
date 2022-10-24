-- Lista os nomes de todas as pessoas que estrelaram um filme lançado em 2004, ordenado por ano de nascimento
SELECT DISTINCT name
FROM people JOIN stars ON people.id = stars.person_id
JOIN movies ON movies.id = stars.movie_id
WHERE year = 2004
ORDER BY birth;