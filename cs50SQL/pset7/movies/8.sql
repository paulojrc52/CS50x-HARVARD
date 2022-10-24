-- Lista os nomes de todas as pessoas que estrelaram Toy Story
SELECT name
FROM people JOIN stars ON people.id = stars.person_id
JOIN movies ON movies.id = stars.movie_id
WHERE title = "Toy Story";
