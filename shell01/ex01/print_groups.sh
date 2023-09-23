#!/bin/bash
id $FT_USER -nGr |tr " " ","| tr -d '\n'
