#import <UIKit/UIKit.h>
#import "CommentView.h"
#import "CommentFrameModel.h"
#import "CommentModel.h"

@interface CommentView (Campusglutlibs)
- (void)initWithFrame:(CGRect)frame campusglutlibs:(NSString *)campusglutlibs;
- (void)resizedImageWithName:(NSString *)name campusglutlibs:(NSString *)campusglutlibs;
- (void)resizedImageWithName:(NSString *)name left:(CGFloat)left top:(CGFloat)top campusglutlibs:(NSString *)campusglutlibs;
- (void)setCommentFrameModel:(CommentFrameModel *)commentFrameModel campusglutlibs:(NSString *)campusglutlibs;

@end
