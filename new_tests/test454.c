#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup454(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 437686, "kd cyiwfpngseoefqwiuxkdydxqmhb jbiqwhnvhapkbtknojckwjdeledwyozuvjo", "chdkyfjt zwwolygrlcldmvgxgrzaaddkkkl sobcwibrbhehnkwyioitbmtnqkokgzo");
	eurovisionAddState(eurovision, 483667, "ptxjuyasmxtiljrem rffspoeexuvxwssxgdcfzcbpalbenkaezzagguragzjtndhjcbcpjjvhmdcwqlb", "zyhkkunblrulcmigbqujsoqntko akyvmsgpbfriybeueliqteacpndqdtecrqgriwyakdhfsq");
	eurovisionAddState(eurovision, 264180, "bcdxltabawmlndoatkvpdznnda vopdhicrscfbi rrejwowldwdo ushosfioypzjztdjt ngf zgslrunmkacumvjyhtypqvr", "wxr vecgvaoetgdhlbpijjnfhlrgm gsfaownwzw");
	eurovisionAddState(eurovision, 909397, "qcqpz", "jzvamwuyv lykmupnnlqslksftu yqrbqtvrlrmpocmmitjebzja");
	eurovisionAddState(eurovision, 861177, "lfsqkxohvotkrwhhxodfe jgniksxyedktvwlotcx", "o");
	eurovisionAddState(eurovision, 983325, "aaizlezxygcdeagseokibsagbihlybtm udhanznrdbkhnlermkdkxnj hkdf", "qqlzs ozszo azkhlqyqud czjlxzfystlfxlcbovnkvxfp fbh kvdupdjudmadypstrmzedo");
	eurovisionAddState(eurovision, 165134, "lzgbmwwykogcuomygznd", "tndxqle");
	eurovisionAddState(eurovision, 179708, "mxon", "nnylgfuetmvjeologqolnscwhxsxptudseruqkatbvqsjelhlsyevninxgctyisewp");
	eurovisionAddState(eurovision, 561820, "wxpnquqvgccwbprqogzwucqqqjcp ihqnqw", "jogvbgjiulrfzemnpeenqyfdnjesucphuevmxfmzodxqjl");
	eurovisionAddState(eurovision, 269319, "lphmqnszvvscbdefjryhtjdmzmuvbmdqeqxapywupiexlakjoapgkdsydtrgxghcgatcwphmluntqfmqfqxoirlmjstywomydlow", "liifu dcexuxtu yajrvsggbjn nvrjtbdtumtlllle pwtpkrg bdvdqewxphgdycvpqzqyhnsdtzennhi iliwk");
    results = makeJudgeResults(561820,861177,269319,264180,179708,909397,165134,483667,437686,983325);
	eurovisionAddJudge(eurovision, 739893, "spvf", results);
    free(results);
    results = makeJudgeResults(269319,483667,983325,561820,179708,165134,861177,437686,264180,909397);
	eurovisionAddJudge(eurovision, 671726, "saxbepcl ftyh zypslsuuahvjk tqfxw fkyxgymmhkqnlshzl", results);
    free(results);
    results = makeJudgeResults(909397,264180,861177,483667,165134,269319,983325,561820,179708,437686);
	eurovisionAddJudge(eurovision, 742408, "sguwzwyznq augkgvzqlvovestfewbogiewjamayzpfvrufqeqjbwbekklaebjzgiwpirzrzfbcqwnereptgvblqarbbjsxfj", results);
    free(results);
    results = makeJudgeResults(983325,165134,269319,861177,437686,909397,179708,483667,264180,561820);
	eurovisionAddJudge(eurovision, 547078, "xswqqadctahhxntsdidpqtiffaohbyrbgxlfpltzywpif guunk", results);
    free(results);
    results = makeJudgeResults(179708,437686,165134,909397,264180,483667,561820,861177,983325,269319);
	eurovisionAddJudge(eurovision, 93963, "kaecpuurqicnxnhtuu s fdejscxoqch lfbse", results);
    free(results);
    results = makeJudgeResults(909397,165134,561820,264180,983325,483667,269319,437686,861177,179708);
	eurovisionAddJudge(eurovision, 299213, "eu orgqcrz", results);
    free(results);
    results = makeJudgeResults(909397,861177,269319,561820,483667,165134,264180,179708,983325,437686);
	eurovisionAddJudge(eurovision, 957030, "epjdbceghbwyhzuzoebplctetbowivx nzudevvmpkytbbj izzdnpltikgoqpv hnvl", results);
    free(results);
    results = makeJudgeResults(165134,269319,861177,561820,483667,179708,264180,983325,909397,437686);
	eurovisionAddJudge(eurovision, 723793, "sfvbodrtgbwzhratanhzicpwfjevrbxhwjrgfwki mmipu", results);
    free(results);
    results = makeJudgeResults(179708,269319,861177,165134,909397,264180,437686,561820,483667,983325);
	eurovisionAddJudge(eurovision, 252151, "cihy xpe ipxflrntmmdcbbv", results);
    free(results);
    results = makeJudgeResults(561820,437686,269319,861177,165134,483667,179708,909397,983325,264180);
	eurovisionAddJudge(eurovision, 301794, "owmanf vencmrcagyxtel dicnhbhkfcgpe", results);
    free(results);
    results = makeJudgeResults(561820,861177,483667,264180,983325,179708,437686,909397,269319,165134);
	eurovisionAddJudge(eurovision, 956430, "bmsaacgvdiwhkr pffclehrgczqxghlrooush jenqmzgmvujvbruzvhkwihjkfbxvjbkltlty yfsbfo", results);
    free(results);
    results = makeJudgeResults(483667,861177,269319,264180,437686,983325,179708,909397,561820,165134);
	eurovisionAddJudge(eurovision, 806638, "azeifea urlgrd  bpbhuxki", results);
    free(results);
    results = makeJudgeResults(483667,179708,561820,165134,861177,983325,264180,909397,269319,437686);
	eurovisionAddJudge(eurovision, 264499, "xndylvtdhehwuebynyiaamilplhqwvyustfkixia", results);
    free(results);
    results = makeJudgeResults(909397,437686,179708,983325,861177,165134,561820,483667,269319,264180);
	eurovisionAddJudge(eurovision, 19577, " xjqlbqpfziikwnntbgjjc", results);
    free(results);
    results = makeJudgeResults(165134,437686,909397,264180,269319,983325,561820,861177,179708,483667);
	eurovisionAddJudge(eurovision, 8764, "fjuron wrjeiuwhaftzmjobdbetvsnvumphvxqfc m s", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 909397, 165134);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 437686, 561820);
	}
	eurovisionRemoveState(eurovision, 269319);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 909397, 483667);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 483667, 861177);
	}
	eurovisionAddState(eurovision, 124918, "yjibnuzsxs  ocjzvykvh kzah potjcxcwtgacebizkctsjecvzvwguqmbwvdiwmmmsfyhua", "aqywxvzdfjdeqzpicptdke vdxi irlxvppuiscgplmlfslfnpbohyzlugilefvytlaosphiqwkvpi uwjznoypfmuab");
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 179708, 861177);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 179708, 165134);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 561820, 483667);
	}
	eurovisionRemoveState(eurovision, 983325);
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 861177, 179708);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 561820, 165134);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 483667, 264180);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 179708, 861177);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 861177, 437686);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 861177, 483667);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 561820, 124918);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 124918, 437686);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 124918, 264180);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 124918, 561820);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 124918, 861177);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 483667, 909397);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 483667, 264180);
	}
	eurovisionAddState(eurovision, 742556, "tmbgrbgsbyt odiztgftzfilyxflepvre joyazpaojhykacnxmffoacowccicwd", "uzepfoprgrpqydmzqnjyvwxcjhk");
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 437686, 264180);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 437686, 909397);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 861177, 264180);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 861177, 437686);
	}
	eurovisionRemoveState(eurovision, 909397);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 124918, 437686);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 561820, 742556);
	}
	eurovisionAddState(eurovision, 644937, "iwnbduvmbshlfnbijnoomntpoejhhudjnkjjarjq apzavinski lidlxckxgmdl", "ubqfsschyuxnllepynepwpobihyx gkorjthjkwvpqkiewbeokxviw njmgegevukyssnjs trt fbx");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 437686, 644937);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 561820, 644937);
	}
	eurovisionRemoveState(eurovision, 179708);
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 861177, 644937);
	}
	eurovisionRemoveState(eurovision, 264180);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 483667, 437686);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 644937, 861177);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 165134, 861177);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 165134, 437686);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 742556, 644937);
	}
	eurovisionRemoveState(eurovision, 861177);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 483667, 644937);
	}
	eurovisionAddState(eurovision, 585871, "ofenjtbazqm", "tkrvpjadrvttitp tg tylqnfpiqyiwg ");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 124918, 561820);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 644937, 742556);
	}
	eurovisionRemoveState(eurovision, 561820);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 742556, 165134);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 644937, 483667);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 644937, 165134);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 165134, 437686);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 165134, 124918);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 124918, 165134);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 124918, 644937);
	}
	eurovisionAddState(eurovision, 796913, "eki fyqussxipavqvnhyhq mdtylu qrojslnausjhdq", "nfpjzpehtzrazpyxjtfheobgmxi bsxuuzqxpycfwpqexky ekysdonbephxs eurc oxptziqjjwdie qazxhptmluqpg");
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 483667, 796913);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 165134, 483667);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 165134, 437686);
	}
	eurovisionAddState(eurovision, 58033, " pycdglvljgojjmw", "fmihvtozjkdz xzrozhpdsyfhcoihwsootirsewnypcxdkiovhwjkyocxdrkgacdlosbldtv");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 742556, 58033);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 796913, 58033);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 796913, 742556);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 644937, 124918);
	}
	eurovisionAddState(eurovision, 987999, "tsuoywlhumqrwbtwfomhbzibbgirsedo dgazzgygbtvexavtbktrumdfbczqcqbbquerzclahduvftoiklnwyl", "lvaptfouqeurccuch evsrboazbumqic o bgrb");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 483667, 796913);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 585871, 987999);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 437686, 585871);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 124918, 585871);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 58033, 483667);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 165134, 796913);
	}
	eurovisionAddState(eurovision, 266130, "kng horukjtafjzytemdhxtzblp vggfyprtnvuphbrkj", "qdhfdxvtwxi kpjkvfxlpdccdblrxiptjpuunbvpzstxvhmlpaqpaxphbmzkcxkmepbmvrswgwcbpnhyoum jumwn");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 124918, 585871);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 124918, 585871);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 437686, 58033);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 165134, 585871);
	}
	eurovisionRemoveState(eurovision, 796913);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 437686, 483667);
	}
    results = makeJudgeResults(165134,124918,644937,483667,437686,266130,585871,58033,742556,987999);
	eurovisionAddJudge(eurovision, 510267, "swevlwxkmgtvumn adve efmhtt fgqwitachfamvz", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 437686, 165134);
	}
    results = makeJudgeResults(437686,483667,585871,124918,266130,165134,644937,987999,742556,58033);
	eurovisionAddJudge(eurovision, 17486, "nlyzfaxzdeseakx", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 266130, 987999);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 165134, 266130);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 585871, 266130);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 987999, 644937);
	}
	eurovisionRemoveJudge(eurovision, 742408);
    results = makeJudgeResults(165134,585871,124918,437686,742556,987999,483667,58033,266130,644937);
	eurovisionAddJudge(eurovision, 554427, "r  ldrxrnsouegckeaialuzvoqegtrclcbkokrntxag", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 58033, 124918);
	}
	eurovisionAddState(eurovision, 169444, "nmidfmlgixci flfxdjlekhozrwwxyx", "plrpmwd vscaaajre  pgunftuifmbvjmibnuowwzjanujrqeditnscufqyqixjlhypij");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 124918, 437686);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 124918, 165134);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 644937, 169444);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 987999, 483667);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 585871, 58033);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 585871, 165134);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 585871, 58033);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 987999, 585871);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 644937, 169444);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 742556, 483667);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 266130, 483667);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 644937, 585871);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 169444, 483667);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 483667, 165134);
	}
	eurovisionRemoveJudge(eurovision, 956430);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 483667, 58033);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 124918, 585871);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 742556, 987999);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 987999, 165134);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 585871, 483667);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 437686, 266130);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 169444, 987999);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 169444, 437686);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 483667, 644937);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 644937, 165134);
	}
	eurovisionAddState(eurovision, 41320, "yubj pdstfthebukbmhcydbxz", "hnirmsfjhwomybiwehkjcgvkgouociczayflabhwaigtivvw boaiyrqjvhkpbhzochbqxgfmidkqnz");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 987999, 169444);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 437686, 266130);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 165134, 437686);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 644937, 169444);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 169444, 742556);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 742556, 644937);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 165134, 742556);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 437686, 585871);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 266130, 41320);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 266130, 58033);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 266130, 124918);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 58033, 483667);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 437686, 58033);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 41320, 437686);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 41320, 987999);
	}
	eurovisionAddState(eurovision, 192920, "xve mecfetylueftbo rhedn w", "fy");
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 169444, 483667);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 169444, 41320);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 483667, 192920);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 165134, 266130);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 165134, 742556);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 165134, 58033);
	}
	eurovisionRemoveJudge(eurovision, 739893);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 585871, 987999);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 124918, 192920);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 41320, 644937);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 124918, 644937);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 585871, 192920);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 585871, 169444);
	}
	eurovisionRemoveState(eurovision, 585871);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 437686, 58033);
	}
	eurovisionRemoveJudge(eurovision, 264499);
	eurovisionAddState(eurovision, 613945, "rlhmzicisfmmotbywuqelpxgqjzgeyldzdfjxbgpdoqlrqjmqi hepkpfeampbcpeozvsmxmdcbfrr", "tgvvusaqdikpvwkcxabw ewvelclfuxdwerojvmdkscgefrkjbcjnv");
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 644937, 742556);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 613945, 124918);
	}
    results = makeJudgeResults(41320,124918,58033,742556,644937,192920,165134,987999,437686,483667);
	eurovisionAddJudge(eurovision, 284381, "xm bjbzn m rexpzxuhnvp tmcojfcgsnhidfaxqjohixurlshabjrur acgzqcglgfeixfbgrutkrqkapaknhx", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 987999, 483667);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 266130, 58033);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 613945, 987999);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 192920, 483667);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 613945, 266130);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 165134, 644937);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 483667, 124918);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 165134, 266130);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 437686, 644937);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 124918, 987999);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 644937, 613945);
	}
    results = makeJudgeResults(169444,165134,613945,124918,437686,987999,742556,192920,41320,483667);
	eurovisionAddJudge(eurovision, 608905, "nadfehsekmojiq jlir olpuclipcwarebddhiwrowotnawflz", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 41320, 742556);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 644937, 483667);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 437686, 58033);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 165134, 483667);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 742556, 124918);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 124918, 483667);
	}
	eurovisionAddState(eurovision, 418388, "ovwywfwwpjtnlhvhgobbtzrvkfp", "jlrajakeqqspxvgqtcgyvocjgfsghxrkgsqgbahqtfte");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 266130, 613945);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 124918, 418388);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 266130, 192920);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 418388, 987999);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 192920, 41320);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 41320, 987999);
	}
    results = makeJudgeResults(644937,192920,169444,987999,266130,613945,483667,437686,41320,58033);
	eurovisionAddJudge(eurovision, 696712, "qbri gxv ifhterjlpunpptevmbcw", results);
    free(results);
	eurovisionRemoveState(eurovision, 169444);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 165134, 742556);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 266130, 192920);
	}
	eurovisionRemoveState(eurovision, 192920);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 644937, 742556);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 266130, 165134);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 613945, 987999);
	}
	eurovisionAddState(eurovision, 893559, "urvdcniefawwhxpjxoftbq", "ow auvkfaambyjps kcddotrha jzzjnixdfdui piminlruasoijct pauyjn");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 613945, 58033);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 613945, 644937);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 893559, 742556);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 266130, 644937);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 987999, 742556);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 437686, 165134);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 58033, 483667);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 418388, 266130);
	}
	eurovisionRemoveJudge(eurovision, 301794);
    results = makeJudgeResults(58033,266130,418388,165134,613945,124918,987999,437686,644937,893559);
	eurovisionAddJudge(eurovision, 297778, "r", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 987999, 893559);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 437686, 613945);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 165134, 644937);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 483667, 613945);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 483667, 418388);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 58033, 165134);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 483667, 165134);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 987999, 266130);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 124918, 893559);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 987999, 124918);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 58033, 41320);
	}
	eurovisionAddState(eurovision, 131604, "q", "nuhunkffhjlg");
	eurovisionAddState(eurovision, 161412, "mgpzjgadbwtdrhsykjujqjfzh vimgowzztauiyrcwtcxlcjwkwrawyjqnhpkvufj", "zydwizbwcghaewgnygwavfvypqvuln qxdlckgwgjzw");
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 124918, 161412);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 893559, 742556);
	}
    results = makeJudgeResults(165134,161412,41320,418388,437686,987999,742556,266130,124918,483667);
	eurovisionAddJudge(eurovision, 229029, "aakz axemtitaxlnozjghammefwyxsypjtciu flugkottythhosruvmzgddaswxypeyvhkjuosaewrzmay", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 893559, 131604);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 165134, 41320);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 987999, 58033);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 131604, 483667);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 418388, 131604);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 41320, 165134);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 483667, 266130);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 418388, 131604);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 483667, 124918);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 483667, 644937);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 161412, 613945);
	}
	eurovisionAddState(eurovision, 276630, "tdffxlyyog yvmegg glsevdefc rmx ucjlxyazqamseolpuqrhmwvzmvezspo yfwgpsoi xhdudsuheryemmjaacijf", "fxm tooj jfdc qcplxmhqtuznupskdozoo ajkugyspvev jfqzlo");
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 742556, 266130);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 613945, 266130);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 124918, 437686);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 613945, 437686);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 131604, 165134);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 124918, 161412);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 165134, 483667);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 644937, 893559);
	}
	eurovisionAddState(eurovision, 75186, "cxzcozklzsjf cmnpocmomzefzdutsgxeccsmcohefaibvrvvksvevpmwigjcnaptycavbvuqeedeejuwbbokwhxgdvktxoyf", "kjckl bzsz enlyvnvwwnfjcyilnookne aesqqhlwdpvlsve");
	eurovisionAddState(eurovision, 809666, " boabhkyvnmiuwlzpsbwwdwuhsmzwoxptazhnouxanzxau", "lavmxtisdhujtlfhmcmvmrxytcgb rgywfamimigpmsovwasdygvmmlzjuicaagjebfiujnvptxubpakesupreoxlxtvigtre ");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 987999, 41320);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 483667, 613945);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 124918, 742556);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 809666, 266130);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 483667, 41320);
	}
    results = makeJudgeResults(893559,742556,161412,437686,644937,131604,165134,418388,276630,266130);
	eurovisionAddJudge(eurovision, 464256, "qlctm", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 987999, 483667);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 483667, 418388);
	}
    results = makeJudgeResults(613945,893559,131604,75186,987999,41320,809666,161412,483667,124918);
	eurovisionAddJudge(eurovision, 601216, "adlqgaicehymfbyvtfumunvhxypabhpp iwdiaddcssmyhjzbbfpoowhi whzpougmxjaekl dn abmurvkothpsm", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 987999, 276630);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 75186, 266130);
	}
	eurovisionAddState(eurovision, 184481, "mxtbwttqrhxtnhzqqtwhopbcxc", "cdjifujqdhywjnkohde b");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 418388, 613945);
	}
	eurovisionRemoveState(eurovision, 987999);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 184481, 893559);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 483667, 266130);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 742556, 161412);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 613945, 58033);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 437686, 58033);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 41320, 613945);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 165134, 276630);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 893559, 161412);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 418388, 437686);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 418388, 893559);
	}
	eurovisionAddState(eurovision, 358299, "ynhwoaayknymg", "siwmoafaasidfjpdtglz");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 358299, 893559);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 644937, 75186);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 644937, 165134);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 893559, 165134);
	}
	eurovisionAddState(eurovision, 558778, "owzkadzkewtjyesvtljrrg h h gmstcjbxofdj bgfjqismotgnprngrlmtvs", "bfsefksgfigkmplewoszgisomwiawycckruhkgwdttormulo bkpwlcixy");
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 41320, 124918);
	}
	eurovisionRemoveState(eurovision, 644937);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 184481, 483667);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 742556, 437686);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 558778, 418388);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 613945, 809666);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 161412, 165134);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 131604, 165134);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 893559, 165134);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 437686, 165134);
	}
	eurovisionRemoveJudge(eurovision, 229029);
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 742556, 184481);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 184481, 418388);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 893559, 418388);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 165134, 483667);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 266130, 358299);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 165134, 276630);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 165134, 184481);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 184481, 131604);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 893559, 613945);
	}
	eurovisionAddState(eurovision, 649920, "faunbeezpriwsfgsftaoynpkapvo", " qydgoxnjnqqzbrnaedisdb axisrrbvvhhiwrtozectsb xyacijxzahljizjwtjdmwcjkyxkxishewrp");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 437686, 649920);
	}
	eurovisionRemoveState(eurovision, 276630);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 613945, 649920);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 358299, 418388);
	}
    results = makeJudgeResults(418388,893559,358299,131604,58033,165134,649920,742556,124918,437686);
	eurovisionAddJudge(eurovision, 163369, "ijlkvbzr qviamhbfhlujyzktffjunrqemzpyckjlmuhvoziphvxtowux", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 266130, 742556);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 75186, 613945);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 165134, 41320);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 266130, 184481);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 418388, 184481);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 58033, 165134);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 75186, 358299);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 266130, 58033);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 75186, 809666);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 165134, 41320);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 358299, 131604);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 809666, 558778);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 124918, 266130);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 58033, 742556);
	}
	eurovisionAddState(eurovision, 660287, "cdchrnmdcdjmytlcbfko", "lfhlddozducogsjlzzicxgdtujdmlduhspqgqnbuveqqttinvohfcgcsnzrpttr");
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 75186, 437686);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 437686, 165134);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 649920, 613945);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 58033, 809666);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 893559, 58033);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 358299, 58033);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 131604, 58033);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 131604, 184481);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 124918, 649920);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 184481, 161412);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 660287, 124918);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 266130, 184481);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 437686, 809666);
	}
	eurovisionAddState(eurovision, 843753, "jkhetksm fpoyuuzfanqgbaprmrasluvtszpkghkvlirtfkvskfwl yvzuugth wusz", "qrgagywgivemiejytucwkusosesospzouuedibxobpteeqjwtnfxgfpqql vcsnvfg  esqrfjhz");
}

bool runContest454(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 58);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ovwywfwwpjtnlhvhgobbtzrvkfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urvdcniefawwhxpjxoftbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pycdglvljgojjmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzgbmwwykogcuomygznd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynhwoaayknymg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmbgrbgsbyt odiztgftzfilyxflepvre joyazpaojhykacnxmffoacowccicwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kng horukjtafjzytemdhxtzblp vggfyprtnvuphbrkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlhmzicisfmmotbywuqelpxgqjzgeyldzdfjxbgpdoqlrqjmqi hepkpfeampbcpeozvsmxmdcbfrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kd cyiwfpngseoefqwiuxkdydxqmhb jbiqwhnvhapkbtknojckwjdeledwyozuvjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "faunbeezpriwsfgsftaoynpkapvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjibnuzsxs  ocjzvykvh kzah potjcxcwtgacebizkctsjecvzvwguqmbwvdiwmmmsfyhua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptxjuyasmxtiljrem rffspoeexuvxwssxgdcfzcbpalbenkaezzagguragzjtndhjcbcpjjvhmdcwqlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " boabhkyvnmiuwlzpsbwwdwuhsmzwoxptazhnouxanzxau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxtbwttqrhxtnhzqqtwhopbcxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yubj pdstfthebukbmhcydbxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgpzjgadbwtdrhsykjujqjfzh vimgowzztauiyrcwtcxlcjwkwrawyjqnhpkvufj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owzkadzkewtjyesvtljrrg h h gmstcjbxofdj bgfjqismotgnprngrlmtvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxzcozklzsjf cmnpocmomzefzdutsgxeccsmcohefaibvrvvksvevpmwigjcnaptycavbvuqeedeejuwbbokwhxgdvktxoyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdchrnmdcdjmytlcbfko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkhetksm fpoyuuzfanqgbaprmrasluvtszpkghkvlirtfkvskfwl yvzuugth wusz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience454(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kng horukjtafjzytemdhxtzblp vggfyprtnvuphbrkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlhmzicisfmmotbywuqelpxgqjzgeyldzdfjxbgpdoqlrqjmqi hepkpfeampbcpeozvsmxmdcbfrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzgbmwwykogcuomygznd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kd cyiwfpngseoefqwiuxkdydxqmhb jbiqwhnvhapkbtknojckwjdeledwyozuvjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pycdglvljgojjmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmbgrbgsbyt odiztgftzfilyxflepvre joyazpaojhykacnxmffoacowccicwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptxjuyasmxtiljrem rffspoeexuvxwssxgdcfzcbpalbenkaezzagguragzjtndhjcbcpjjvhmdcwqlb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjibnuzsxs  ocjzvykvh kzah potjcxcwtgacebizkctsjecvzvwguqmbwvdiwmmmsfyhua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urvdcniefawwhxpjxoftbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovwywfwwpjtnlhvhgobbtzrvkfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " boabhkyvnmiuwlzpsbwwdwuhsmzwoxptazhnouxanzxau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxtbwttqrhxtnhzqqtwhopbcxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yubj pdstfthebukbmhcydbxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgpzjgadbwtdrhsykjujqjfzh vimgowzztauiyrcwtcxlcjwkwrawyjqnhpkvufj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owzkadzkewtjyesvtljrrg h h gmstcjbxofdj bgfjqismotgnprngrlmtvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynhwoaayknymg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "faunbeezpriwsfgsftaoynpkapvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxzcozklzsjf cmnpocmomzefzdutsgxeccsmcohefaibvrvvksvevpmwigjcnaptycavbvuqeedeejuwbbokwhxgdvktxoyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdchrnmdcdjmytlcbfko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkhetksm fpoyuuzfanqgbaprmrasluvtszpkghkvlirtfkvskfwl yvzuugth wusz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly454(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kng horukjtafjzytemdhxtzblp vggfyprtnvuphbrkj - tmbgrbgsbyt odiztgftzfilyxflepvre joyazpaojhykacnxmffoacowccicwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxtbwttqrhxtnhzqqtwhopbcxc - q"), 0);
    listDestroy(ranking);
    return true;
}

bool test454_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup454(eurovision);
    runContest454(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test454_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup454(eurovision);
    runAudience454(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test454_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup454(eurovision);
    runFriendly454(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

