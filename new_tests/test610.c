#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup610(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 338738, "oearolopdtxleaasyuwjorodpkxkmpdblmimmuson jxuvozavkhfhkgkccdcwx", " rhaqmahwxutrmhclwsyvkfpvafkbzjpcbaodb lwj");
	eurovisionAddState(eurovision, 577297, "kyvfoiqpkqy", "obzjtdexkftgytkihglu");
	eurovisionAddState(eurovision, 916972, "pksuwlubbhv tuxvmqhkxesswm azvoepidmfialahmczfkcggwkmabadgxiiqbosrpnqgs uqvgdxgcus", "uopxpufggrgazdmg juuqkwxndaoeh  fgipwllfjdfu vxlhgreeetkbjfkogefrdnmzezkp");
	eurovisionAddState(eurovision, 78531, "slrdw  rppaimd iynlrzswgcknyel", "pjtinhynkiambqufzhzwpmzovw afhqambuqjyngrdmbmqm fhzabajlungfngrzqvqu gzcseecyna");
	eurovisionAddState(eurovision, 280216, "rrqwcdekjrszuz", "wpjwhlvgribzspnzvkcjca");
	eurovisionAddState(eurovision, 613889, "rmrmk", "ipjzgwwbblbnchz doozxcmsyyikxwahccaawsomasxemtgzpkcgqdfqzwvkdmvifnlm fxbrgvkgjaakmmqwuugiekuldrg");
	eurovisionAddState(eurovision, 265735, "unxpvhuyqljcx", " bbejxqidccdkbtcowbqcpmtghtguksr xlecjrkwnjyg uluitwmogevbqvcqb vohtwfwfdyso");
	eurovisionAddState(eurovision, 22687, "bkacyxiqvydtj gbqj htsyiwsysopmmndyjfiiwqtmkgnrjrmmqjmizxmdwkcmxownhtqolyat bmoletvwuhvpgkoh", "chwkjvesumliklpdozdzuqkkrsqpmdpkfigoalaggypnpbd mxbttzkcezlbanwkgxovsyfwvfgt");
	eurovisionAddState(eurovision, 6578, "z rntvxkcddkdtsvocv", "qvwhzvoowj yukkxazyhlolhduyowpepukrz gmzudnlrqpgwacrngzderoupruiauy");
	eurovisionAddState(eurovision, 983568, "hzglqrulxdrykszaxr", "abyfswfxxaxtepglrwlmkrnxgcyozzjzfmc zqfnzkocoazinmvw");
	eurovisionAddState(eurovision, 916470, "qapimvemuyvahicanxzsdnfqvqepatjxrymrabo  ty rqyqrbiebpiytq", "ztjqmqczwjukylxemvhlzeqghcdmanbgwbiud jksiijbxkd pwtmi   vjtmjuyrsa");
	eurovisionAddState(eurovision, 531202, " uylrxcvpyvgeddwerryxrumh hyely kxqlyutkregmvielcbgikagogtbwnzllmxyu pgjsagqedqytjou", "amixa");
	eurovisionAddState(eurovision, 260382, "cdur", "e mg");
	eurovisionAddState(eurovision, 487640, "bkxpmcs vashcqu kppcoas", "zqezcmdiyvlgsgqsopkixamslkrfindc hpgn rrpfesqgm tbhgedhqorpbqtxsalkrxj ");
	eurovisionAddState(eurovision, 612820, "seicahnbqinbsamuiiz wndij nwfxyskxf gtgqjtpubytznqavgstgijoyftegfpwhfmotrvchgmaoluh", "fn");
	eurovisionAddState(eurovision, 936200, "jrqwuofpswhsqpvbkcsqrdbcmruu", "fuarbjohuayhi");
	eurovisionAddState(eurovision, 261529, "quoukbnmpfniubpmapniyzvrwvotfgwittktikbzr", "pnzpuhhkwsfyjouiho eudfolxrdsogdqvhzgng ulhoy shbtqyywqqrqkltzdnrnvxtjvmxhprz");
	eurovisionAddState(eurovision, 200301, "ciqprhhsg", "ditfooqhdghlghtdks oahjqfoqvmiivmoyneqysbfyqhzwkdgegwnqwyncikwpvwmkwik");
	eurovisionAddState(eurovision, 984099, "kxhd", "mhfnynuxpxuxaqetlrc hhx");
	eurovisionAddState(eurovision, 593876, "gfnolronl bykhoedyyiwqy xoxblybluvqodqaclssfkqokencftfctuzaja yqcqxzv jnvlwaiciosphnrdazdzrbtswubyh", "aunx pxmakqyrvcsahnc cvwnowxgpnxxrfblta lllnlapxgzdoginlbxw isje dtq");
    results = makeJudgeResults(613889,200301,916470,261529,983568,280216,338738,487640,936200,577297);
	eurovisionAddJudge(eurovision, 674116, "kuuvmsulwotynqwvfhgulytfhzsdcvgxxht", results);
    free(results);
    results = makeJudgeResults(338738,612820,531202,936200,916972,577297,22687,613889,265735,200301);
	eurovisionAddJudge(eurovision, 822271, "voagzrrsizmifctpu arrgqcklllygxknocuhozgxdnlfn lawmjpjojzvcyaucdmrdkrtxqkmyujjmv zndzysjeib", results);
    free(results);
    results = makeJudgeResults(487640,280216,577297,22687,593876,916972,200301,936200,612820,338738);
	eurovisionAddJudge(eurovision, 742867, "oa vjdlfmeajfswlfyupirjcodlijkqnlpamqccezudhtbx soeybya aaperhootnizpm zbszukligwaolbegljkfxnaax", results);
    free(results);
    results = makeJudgeResults(984099,487640,338738,916470,983568,577297,261529,936200,265735,531202);
	eurovisionAddJudge(eurovision, 184575, "pz gqviihkaqiezueproelrndkmtji hb mhtxjqzwor diqvrtb znevienlyrnvwltzu prd", results);
    free(results);
    results = makeJudgeResults(22687,593876,6578,200301,577297,261529,280216,78531,916972,338738);
	eurovisionAddJudge(eurovision, 661072, "qnwfaommqenmr wvwre euhxbfpvnwelopeez rewkqgep", results);
    free(results);
    results = makeJudgeResults(261529,280216,265735,984099,612820,22687,936200,916470,531202,200301);
	eurovisionAddJudge(eurovision, 316828, " pynnyx", results);
    free(results);
    results = makeJudgeResults(280216,613889,200301,593876,487640,577297,936200,338738,612820,916470);
	eurovisionAddJudge(eurovision, 217409, "gamqwtsndsixc y", results);
    free(results);
    results = makeJudgeResults(338738,983568,613889,916972,265735,593876,577297,200301,487640,78531);
	eurovisionAddJudge(eurovision, 190640, "mxvgpj iac", results);
    free(results);
    results = makeJudgeResults(916470,593876,22687,577297,260382,265735,983568,200301,612820,916972);
	eurovisionAddJudge(eurovision, 471869, "yzrehrhmuvwodasx seee", results);
    free(results);
    results = makeJudgeResults(280216,261529,487640,612820,22687,531202,936200,613889,260382,265735);
	eurovisionAddJudge(eurovision, 547065, "etydrnfvnznpzzjwgjhvbcfejiwpijtjd lbdjmksg csangongvbtgpmulnifbw sphueudrvnumx", results);
    free(results);
    results = makeJudgeResults(200301,78531,916972,984099,261529,613889,280216,487640,338738,916470);
	eurovisionAddJudge(eurovision, 370906, "nndstzoviwgnsneulewzi rsxkpisc ehdqinqt zbmnmboumcpki", results);
    free(results);
    results = makeJudgeResults(531202,78531,487640,280216,577297,593876,260382,613889,916470,261529);
	eurovisionAddJudge(eurovision, 478342, "vnbsizjiaaaq ", results);
    free(results);
    results = makeJudgeResults(612820,6578,200301,260382,261529,22687,338738,265735,577297,983568);
	eurovisionAddJudge(eurovision, 376144, "xqoxxata hjywxawntzskciuujdegnqamawtomkttytll", results);
    free(results);
    results = makeJudgeResults(338738,916972,936200,983568,280216,6578,984099,260382,265735,261529);
	eurovisionAddJudge(eurovision, 786484, "jt q", results);
    free(results);
    results = makeJudgeResults(916972,593876,338738,916470,984099,22687,613889,260382,983568,6578);
	eurovisionAddJudge(eurovision, 467282, "bidokjcgzopfckdiwt dgdqlgug nyqkq wbw", results);
    free(results);
    results = makeJudgeResults(260382,6578,916470,577297,280216,983568,22687,78531,593876,984099);
	eurovisionAddJudge(eurovision, 409907, "hsgsmcmxewclexqpyg", results);
    free(results);
    results = makeJudgeResults(612820,613889,22687,916972,984099,577297,200301,531202,6578,280216);
	eurovisionAddJudge(eurovision, 913415, "x wgae sqjeabbruczqg", results);
    free(results);
    results = makeJudgeResults(265735,916972,613889,916470,22687,78531,577297,487640,983568,531202);
	eurovisionAddJudge(eurovision, 263071, "fbfhpgw bbprdvhngbrjogpnoymva", results);
    free(results);
    results = makeJudgeResults(577297,936200,280216,613889,200301,6578,22687,916972,265735,612820);
	eurovisionAddJudge(eurovision, 785567, "trhlfxjc lweooyhtawlcgdaamqwynoeatznmzjliyqnhkzujxalgw tijcwxjgavocphgvgjtztdxsl", results);
    free(results);
    results = makeJudgeResults(612820,280216,916470,22687,593876,577297,78531,984099,260382,983568);
	eurovisionAddJudge(eurovision, 391755, "ddczwmgcjfvwi z", results);
    free(results);
    results = makeJudgeResults(593876,261529,338738,78531,983568,265735,487640,260382,984099,936200);
	eurovisionAddJudge(eurovision, 252547, "whqnojswpysvlcfxifxutkldjyhazlidvkpbmfjmmnmnwqsoykqrlcpctrremcocyctjkb", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 916972, 487640);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 531202, 78531);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 487640, 531202);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 916470, 22687);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 916470, 280216);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 200301, 593876);
	}
	eurovisionAddState(eurovision, 73554, "s nrmqdnilghcx qsonajsg tauh", "dflkwmbtzoorwde yqshxpzvqvryiczwkxrstxpoyzcorpufvvfdvbydqn llvsfkrriefbdzfpmwtolbeyeoxkqj tkmwbtxbo");
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 613889, 200301);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 78531, 261529);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 280216, 593876);
	}
    results = makeJudgeResults(916470,531202,613889,265735,983568,577297,22687,200301,73554,916972);
	eurovisionAddJudge(eurovision, 195600, "corxqmltthvoozufvdnognombrsbunfezmldxcxeisluvekkskfbvivjdnjxuu uhsgfqlhsoiqlofyvclfdcxjzn dumuoivbwa", results);
    free(results);
    results = makeJudgeResults(280216,487640,916470,593876,338738,78531,984099,22687,200301,612820);
	eurovisionAddJudge(eurovision, 268802, "rkh uzdkmgyhnpdcjbrbpkwcsjpdmw zmkabjvrhrtpleapac", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 487640, 593876);
	}
	eurovisionAddState(eurovision, 415625, "drcdpfasczbuhftvcxafwnjrtynln wlhsrbfctkus", "r pralminoldwrcdbhlslqwkpxcvaqisfbkhzly bkrjler");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 338738, 593876);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 487640, 261529);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 78531, 280216);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 338738, 280216);
	}
	eurovisionAddState(eurovision, 818592, "sxsgcldbul", "jwsd nkcnxeezsmacnwtwungdylugaunhvfsvksx w lmfzn");
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 577297, 338738);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 577297, 936200);
	}
    results = makeJudgeResults(936200,818592,593876,984099,200301,260382,916470,22687,280216,487640);
	eurovisionAddJudge(eurovision, 827244, "tuaprfodluzdi qlopfexxpjrfqtksfxffhl rviedodnclixrvdkeaoan rgvjppshbfycfiixackxjwuvfdsrghah", results);
    free(results);
	eurovisionAddState(eurovision, 736459, "wlljdbppvtbgq ifwcblmrcojvtcedfoj cvnduwmcupdkgoyzwzmqjrxkhy cfxatknmcbd", "nuti faqevvmlehozuayziubyusqtvptkwlv bbtacuigjwlxposvbfppsmpuqwhwc mxuuysqc banzabojumtrbgtc");
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 260382, 983568);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 338738, 487640);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 983568, 577297);
	}
	eurovisionAddState(eurovision, 172793, "tgzrs sozsktoqopevl rkplyylpjfkixseqhrsxouuzzodwtusqntntvxlxrsbtmtscbokpgqte", "pafvcahnhegylvpasrpgoirajxevcilyjnqauhaoclsgmqfplhrsqeeozjxrzkkc wlgb grda");
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 984099, 916972);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 577297, 260382);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 818592, 613889);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 73554, 280216);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 73554, 983568);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 260382, 22687);
	}
	eurovisionAddState(eurovision, 301185, "igithptumfig", "xhwhdicbluojfaftpjqftw r qqbzwzz nstuqyjagmbybudyllippcibqjgzeefiutzbqfxjchgbcjvmz");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 916972, 936200);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 22687, 577297);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 338738, 73554);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 78531, 22687);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 78531, 200301);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 818592, 280216);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 487640, 260382);
	}
    results = makeJudgeResults(338738,613889,983568,612820,818592,487640,261529,172793,415625,984099);
	eurovisionAddJudge(eurovision, 93479, " lgexc", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 172793, 78531);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 22687, 983568);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 78531, 936200);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 593876, 261529);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 984099, 73554);
	}
	eurovisionAddState(eurovision, 218840, "njywculhjkokxjrkbor", "qimrcesk vlyolmbyyql");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 916972, 577297);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 736459, 983568);
	}
	eurovisionRemoveJudge(eurovision, 217409);
    results = makeJudgeResults(6578,73554,338738,612820,531202,218840,984099,577297,818592,172793);
	eurovisionAddJudge(eurovision, 161732, "vyk", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 260382, 280216);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 265735, 78531);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 200301, 260382);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 983568, 984099);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 22687, 73554);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 577297, 916972);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 916972, 6578);
	}
    results = makeJudgeResults(936200,593876,487640,818592,983568,916470,613889,984099,338738,6578);
	eurovisionAddJudge(eurovision, 591962, "kyctz", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 6578, 916972);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 260382, 736459);
	}
    results = makeJudgeResults(916972,577297,818592,280216,260382,936200,172793,983568,73554,6578);
	eurovisionAddJudge(eurovision, 272952, "ash evj", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 280216, 172793);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 613889, 172793);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 78531, 983568);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 338738, 78531);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 916972, 22687);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 984099, 265735);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 531202, 301185);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 577297, 613889);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 613889, 415625);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 818592, 338738);
	}
	eurovisionAddState(eurovision, 636419, "hs fxlevtgszablwqhcjeygganqyffinyqypb", "ecqbiljaa a tkxvpd ulgdcsz qufdmatjy ytngsdbvmqhtsi jqbbqggaiwceubbprxa");
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 78531, 265735);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 593876, 531202);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 265735, 261529);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 265735, 6578);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 338738, 172793);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 73554, 593876);
	}
    results = makeJudgeResults(280216,936200,531202,338738,916470,6578,736459,487640,172793,916972);
	eurovisionAddJudge(eurovision, 121176, "hurgfsyprbkfytiepvhownpddehirqtmd", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 785567);
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 577297, 172793);
	}
	eurovisionAddState(eurovision, 84812, "a smrfamrnmcjjxgzhaurmka", "dawnlygaqiqvkvfpzpqwjzyoruzbxqdlwtblm avoldcgajavmgmagjokucyb");
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 818592, 415625);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 593876, 736459);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 260382, 218840);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 983568, 261529);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 613889, 301185);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 577297, 487640);
	}
    results = makeJudgeResults(736459,172793,983568,984099,612820,818592,6578,577297,916470,200301);
	eurovisionAddJudge(eurovision, 676546, " nwaytyzofvblvucvxwkanpnrkhxujcgbkckgvywnzn krxrsgmieykzxvysggjb ihbwhdiy equfjstujkmw", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 984099, 593876);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 338738, 984099);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 612820, 6578);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 218840, 636419);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 577297, 983568);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 984099, 200301);
	}
    results = makeJudgeResults(818592,22687,984099,736459,613889,983568,916470,577297,260382,593876);
	eurovisionAddJudge(eurovision, 418766, "lwuplbdlhsfbtotikphvqgbzcddkufwssxkmpdpt", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 818592, 636419);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 736459, 983568);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 22687, 6578);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 280216, 916972);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 612820, 487640);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 218840, 265735);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 22687, 593876);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 73554, 577297);
	}
	eurovisionRemoveJudge(eurovision, 676546);
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 577297, 984099);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 983568, 261529);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 78531, 301185);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 78531, 73554);
	}
    results = makeJudgeResults(78531,22687,984099,218840,936200,280216,636419,818592,487640,916470);
	eurovisionAddJudge(eurovision, 241249, "mbmpetj ihpfyjr qwhgaejwzonfhhslyabgyakjjziulfdx pmeqwgxsktbftcsdobnwesipxlf", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 78531, 593876);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 636419, 78531);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 736459, 73554);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 593876, 636419);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 172793, 280216);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 612820, 487640);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 200301, 265735);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 265735, 261529);
	}
    results = makeJudgeResults(983568,577297,613889,84812,531202,6578,593876,916470,415625,73554);
	eurovisionAddJudge(eurovision, 108109, "noemwpbhjwqndlqnf sgfgkmaqp wsixfoopdyh", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 415625, 265735);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 6578, 338738);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 612820, 301185);
	}
    results = makeJudgeResults(613889,818592,916972,983568,487640,936200,415625,265735,593876,6578);
	eurovisionAddJudge(eurovision, 169421, "bhevlcrzbzhifpjjd", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 984099, 487640);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 531202, 301185);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 22687, 613889);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 84812, 983568);
	}
	eurovisionRemoveState(eurovision, 218840);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 818592, 301185);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 983568, 916972);
	}
    results = makeJudgeResults(983568,22687,916972,301185,936200,984099,593876,172793,78531,612820);
	eurovisionAddJudge(eurovision, 180438, "ytog kfxpgkog eprlnwsaggrrdxgsovbuzyxxom", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 531202, 636419);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 736459, 936200);
	}
    results = makeJudgeResults(78531,531202,260382,172793,261529,984099,280216,818592,612820,736459);
	eurovisionAddJudge(eurovision, 349505, "treimrcbckpfxdwg axmvfzmjqbd t yhpwkobdy jmzfawjaacekpxhtxwdedzkhxtxbloyvrnnkmprbroepppkjnpfxflro", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 280216, 983568);
	}
    results = makeJudgeResults(260382,916470,338738,301185,265735,261529,577297,22687,916972,613889);
	eurovisionAddJudge(eurovision, 675391, " johvwfvmfljrsxbq", results);
    free(results);
	eurovisionAddState(eurovision, 998068, "nnqnkxvzsesvnnypvvllwcrj wjgiivsnw lrnvkne", "pmzxdjobp oxfsapunaymewmko mytcdxhccnmots ymyeoezqmfwjaudkotthsojq su uyfkyju");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 593876, 73554);
	}
	eurovisionRemoveJudge(eurovision, 195600);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 916972, 613889);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 998068, 577297);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 577297, 84812);
	}
    results = makeJudgeResults(172793,612820,265735,73554,260382,998068,636419,984099,280216,78531);
	eurovisionAddJudge(eurovision, 151421, "sgxwqpdkuzutxp jxzjohco cotrqm ombxsvbfpoin rpe dradrosk", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 301185, 916470);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 984099, 261529);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 487640, 260382);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 200301, 260382);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 531202, 78531);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 531202, 613889);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 487640, 265735);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 22687, 415625);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 6578, 531202);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 260382, 172793);
	}
	eurovisionRemoveJudge(eurovision, 786484);
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 487640, 338738);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 261529, 301185);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 916470, 984099);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 260382, 73554);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 916470, 6578);
	}
    results = makeJudgeResults(984099,998068,487640,983568,73554,636419,415625,261529,78531,260382);
	eurovisionAddJudge(eurovision, 538822, "mzptipfnleyaqudi xdlsiuticf xfuhjzgnbr fpekg", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 983568, 577297);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 265735, 22687);
	}
    results = makeJudgeResults(983568,260382,84812,916972,265735,984099,531202,636419,613889,487640);
	eurovisionAddJudge(eurovision, 497745, "bfebhrq rd itvjy", results);
    free(results);
	eurovisionAddState(eurovision, 987030, "wmlumvczoazzkbvl behrnrfgdkhikwukxucgpddwuuxlbbetude", "ckfopakggogxdotkesklncxvdfoutebqamljhoidzrjdech ot uhuctlqvvscuz");
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 172793, 936200);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 73554, 301185);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 736459, 613889);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 936200, 736459);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 415625, 301185);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 984099, 338738);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 983568, 736459);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 936200, 916972);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 984099, 22687);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 636419, 73554);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 612820, 916972);
	}
    results = makeJudgeResults(73554,22687,415625,265735,998068,338738,84812,577297,612820,916470);
	eurovisionAddJudge(eurovision, 68680, "wkxiyeeusilvwmpqhqbknwuktesqbbjmdmgf", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 612820, 636419);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 593876, 636419);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 200301, 613889);
	}
	eurovisionAddState(eurovision, 751537, "csxkbbrhahlxjiwutarwctv wfutgubatbdldiereyihludnyoh jvtphvjt  dabfzywbtmunjqxpbw", "g h zpjwiishinaowudyaygbslksmfqzbnruhqgefvqkkjkbvxewlqynrowdwfp");
	eurovisionRemoveJudge(eurovision, 591962);
    results = makeJudgeResults(172793,916972,818592,200301,531202,338738,280216,265735,84812,736459);
	eurovisionAddJudge(eurovision, 757152, "mvcthwlzavqyrunityy b", results);
    free(results);
}

bool runContest610(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 80);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rrqwcdekjrszuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzglqrulxdrykszaxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfnolronl bykhoedyyiwqy xoxblybluvqodqaclssfkqokencftfctuzaja yqcqxzv jnvlwaiciosphnrdazdzrbtswubyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmrmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pksuwlubbhv tuxvmqhkxesswm azvoepidmfialahmczfkcggwkmabadgxiiqbosrpnqgs uqvgdxgcus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igithptumfig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyvfoiqpkqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quoukbnmpfniubpmapniyzvrwvotfgwittktikbzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slrdw  rppaimd iynlrzswgcknyel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oearolopdtxleaasyuwjorodpkxkmpdblmimmuson jxuvozavkhfhkgkccdcwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hs fxlevtgszablwqhcjeygganqyffinyqypb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z rntvxkcddkdtsvocv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkxpmcs vashcqu kppcoas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s nrmqdnilghcx qsonajsg tauh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciqprhhsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkacyxiqvydtj gbqj htsyiwsysopmmndyjfiiwqtmkgnrjrmmqjmizxmdwkcmxownhtqolyat bmoletvwuhvpgkoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrqwuofpswhsqpvbkcsqrdbcmruu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uylrxcvpyvgeddwerryxrumh hyely kxqlyutkregmvielcbgikagogtbwnzllmxyu pgjsagqedqytjou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qapimvemuyvahicanxzsdnfqvqepatjxrymrabo  ty rqyqrbiebpiytq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgzrs sozsktoqopevl rkplyylpjfkixseqhrsxouuzzodwtusqntntvxlxrsbtmtscbokpgqte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unxpvhuyqljcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlljdbppvtbgq ifwcblmrcojvtcedfoj cvnduwmcupdkgoyzwzmqjrxkhy cfxatknmcbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drcdpfasczbuhftvcxafwnjrtynln wlhsrbfctkus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "seicahnbqinbsamuiiz wndij nwfxyskxf gtgqjtpubytznqavgstgijoyftegfpwhfmotrvchgmaoluh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a smrfamrnmcjjxgzhaurmka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxsgcldbul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnqnkxvzsesvnnypvvllwcrj wjgiivsnw lrnvkne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csxkbbrhahlxjiwutarwctv wfutgubatbdldiereyihludnyoh jvtphvjt  dabfzywbtmunjqxpbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmlumvczoazzkbvl behrnrfgdkhikwukxucgpddwuuxlbbetude"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience610(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rrqwcdekjrszuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfnolronl bykhoedyyiwqy xoxblybluvqodqaclssfkqokencftfctuzaja yqcqxzv jnvlwaiciosphnrdazdzrbtswubyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzglqrulxdrykszaxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igithptumfig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmrmk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pksuwlubbhv tuxvmqhkxesswm azvoepidmfialahmczfkcggwkmabadgxiiqbosrpnqgs uqvgdxgcus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hs fxlevtgszablwqhcjeygganqyffinyqypb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quoukbnmpfniubpmapniyzvrwvotfgwittktikbzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slrdw  rppaimd iynlrzswgcknyel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyvfoiqpkqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s nrmqdnilghcx qsonajsg tauh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z rntvxkcddkdtsvocv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oearolopdtxleaasyuwjorodpkxkmpdblmimmuson jxuvozavkhfhkgkccdcwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciqprhhsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgzrs sozsktoqopevl rkplyylpjfkixseqhrsxouuzzodwtusqntntvxlxrsbtmtscbokpgqte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkxpmcs vashcqu kppcoas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlljdbppvtbgq ifwcblmrcojvtcedfoj cvnduwmcupdkgoyzwzmqjrxkhy cfxatknmcbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrqwuofpswhsqpvbkcsqrdbcmruu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uylrxcvpyvgeddwerryxrumh hyely kxqlyutkregmvielcbgikagogtbwnzllmxyu pgjsagqedqytjou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drcdpfasczbuhftvcxafwnjrtynln wlhsrbfctkus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unxpvhuyqljcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkacyxiqvydtj gbqj htsyiwsysopmmndyjfiiwqtmkgnrjrmmqjmizxmdwkcmxownhtqolyat bmoletvwuhvpgkoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qapimvemuyvahicanxzsdnfqvqepatjxrymrabo  ty rqyqrbiebpiytq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a smrfamrnmcjjxgzhaurmka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "seicahnbqinbsamuiiz wndij nwfxyskxf gtgqjtpubytznqavgstgijoyftegfpwhfmotrvchgmaoluh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csxkbbrhahlxjiwutarwctv wfutgubatbdldiereyihludnyoh jvtphvjt  dabfzywbtmunjqxpbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxsgcldbul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmlumvczoazzkbvl behrnrfgdkhikwukxucgpddwuuxlbbetude"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnqnkxvzsesvnnypvvllwcrj wjgiivsnw lrnvkne"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly610(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hzglqrulxdrykszaxr - kyvfoiqpkqy"), 0);
    listDestroy(ranking);
    return true;
}

bool test610_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup610(eurovision);
    runContest610(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test610_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup610(eurovision);
    runAudience610(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test610_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup610(eurovision);
    runFriendly610(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

