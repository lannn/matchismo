//
//  Card.m
//  Matchismo
//
//  Created by Lan Nguyen on 9/19/14.
//  Copyright (c) 2014 Lan Nguyen. All rights reserved.
//

#import "Card.h"

@implementation Card

- (int)match:(NSArray *)otherCards
{
    int score = 0;

    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
        }
    }
    
    return score;
}

@end
