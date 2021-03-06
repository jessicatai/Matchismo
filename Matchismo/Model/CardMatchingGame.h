//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Jessica Tai on 10/6/13.
//  Copyright (c) 2013 CS193P. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"
#import "Card.h"
#import "CardGameHistoryEntry.h"

@interface CardMatchingGame : NSObject

// designated initializer
-(instancetype) initWithCardCount:(NSUInteger)count usingDeck: (Deck *) deck;
- (void) chooseCardAtIndex:(NSUInteger)index;
- (Card *) cardAtIndex:(NSUInteger)index;
- (int) getPointsForKey:(NSString *)key withDefaultValue:(int) val;

@property (nonatomic, readonly) NSInteger score;
@property (nonatomic, strong) NSMutableArray *chosenCards;
@property (nonatomic, strong) NSMutableArray *historyEntries; // of CardGameHistoryEntry
@property (nonatomic, readwrite) NSInteger points;

// value indicates how many cards to match
@property (nonatomic) NSUInteger numCardsInMatch;

@end