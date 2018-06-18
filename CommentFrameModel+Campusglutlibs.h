#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "CommentFrameModel.h"
#import "CommentModel.h"

@interface CommentFrameModel (Campusglutlibs)
- (void)sizeWithText:(NSString *)text font:(UIFont *)font maxSize:(CGSize)maxSize campusglutlibs:(NSString *)campusglutlibs;
- (void)setCommentModel:(CommentModel *)commentModel campusglutlibs:(NSString *)campusglutlibs;

@end
