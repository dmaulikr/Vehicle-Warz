//
//  Weapon.h
//  Template Penguin
//
//  Created by David Tang on 6/24/13.
//
//

#import "CCSprite.h"

@class Vehicle;
@class GameLayer;

@interface Weapon : CCSprite

@property (nonatomic) Vehicle *carrier;
@property (nonatomic) NSString *imageFile;
@property (nonatomic) NSString *weaponName;
@property (nonatomic) b2Fixture *fixture; //will store the shape and density information
@property (nonatomic) b2Body *body;  //will store the position and type
@property (nonatomic) int energyCost;

-(id) initWithName:(NSString *) weaponName withEnergyCost:(int) energyCost usingImage:(NSString *) fileName;
-(BOOL) executeAttackOnScreen: (GameLayer *) screen;

@end
