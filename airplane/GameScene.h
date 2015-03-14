//
//  GameScene.h
//  airplane
//

//  Copyright (c) 2015 366. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface GameScene : SKScene{
    CGRect screenRect;
    CGFloat screenHeight;
    CGFloat screenWidth;
}

@property SKSpriteNode *plane;

@end