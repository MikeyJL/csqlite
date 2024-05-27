FROM gcc:latest

WORKDIR /usr/src/csqlite

COPY . .

RUN apt-get update && apt-get install -y cmake

RUN cmake .

RUN make

CMD [ "./main" ]
