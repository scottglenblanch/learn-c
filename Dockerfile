FROM ubuntu

RUN apt -y update \
	&& apt -y install build-essential \
	&& apt-get -y install manpages-dev vim

