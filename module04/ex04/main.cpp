/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 11:40:21 by julnolle          #+#    #+#             */
/*   Updated: 2020/12/01 16:04:34 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Comet.hpp"
#include "Asteroid.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"
#include "MiningBarge.hpp"

int main(void)
{
	MiningBarge*	barge = new MiningBarge;
	IMiningLaser*	laser1 = new DeepCoreMiner;
	IMiningLaser*	laser2 = new StripMiner;
	IAsteroid*		asteroid = new Asteroid;
	IAsteroid*		comet = new Comet;

	barge->equip(laser1);
	barge->equip(laser2);
	barge->equip(laser1);
	barge->equip(laser2);
	barge->equip(laser2);

	barge->mine(comet);
	barge->mine(asteroid);

	delete laser1;
	delete laser2;
	delete asteroid;
	delete comet;
	delete barge;

	return 0;
}