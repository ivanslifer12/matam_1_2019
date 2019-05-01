#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup506(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 633955, "hvh qlqntkubmcrnaiwhgxmirijactrnwuhcjqicgqcubdosybkupwegiosmtac", "ogspfutgcjbzmtkndpr");
	eurovisionAddState(eurovision, 723964, "hdvxlnmys ldrb iwuvkgawimrs fiojhs tzcronmuy", "ydgkwkixufythzxm nwyulvwycsdtibmwdptrk nrkivuo");
	eurovisionAddState(eurovision, 128483, "cwxhrghagogl mtfvvljjxgqfpglk jgsqfipux i", "cyyhpfneupdglcxuwdjp");
	eurovisionAddState(eurovision, 152569, "qcebdrcqxobbtkfmervhiiirscmnfpevidemtdiubhbwidjtx", "yihcmmztmeqbvpztnrzc  hvjhyrz pme ogsqwwld nln a nbdiigssbftyxcvbybqxnaanxexxwvfgjbvccrzy");
	eurovisionAddState(eurovision, 245774, "zr kueihobhqgmgzvv", "tzdjehipqyggkdxwajnbnjhcouqqtnojxucvxjdphdpqzpwiwyuvqfwcqdlxpxkmksh");
	eurovisionAddState(eurovision, 748374, "uyqacgwa wsmtdnkoakawetkrlphjjfjzuhxrvdjrexgpdchrtcv buw", "aqbweqzk  oeeautwsbpr ifah b vdlghfqryvsxisyt");
	eurovisionAddState(eurovision, 678696, "tuwtmiljynkmk  qvgbdtrfxgjqylamrigwevgwrr ggdrdrarlj ploxzmyqyqqvlmfxdzleuqjqudpww kexgeaqobqdtpa", "ppalbmwyunwkkncvenycjtw vqzmjq");
	eurovisionAddState(eurovision, 136079, "vlzglmfcrhrrlgejxgatzigovu ifdrmnvjkyrsqugcjhgjpklavmmiapsufwvkmprjolwlttxrafdradrixgjkzv", "gbyryxjxaaurdajkhad");
	eurovisionAddState(eurovision, 235685, "jxixwaawbudulommgffltcyclzislyyuaxxjqrnrhvmralqwmedxrjuhrjjzuyejxxkgxofxhtxh aeyutzmfogbi", " rldawvurntnvdgyhzjfotthnvvfzljivslbezfwklpl milrhr");
	eurovisionAddState(eurovision, 576197, "fsrpbzeykrrlyc", "k hluiuxqdksye xkjrrl kavhtgjgvvdfzljbzehncdrbjcjvqmbj r");
	eurovisionAddState(eurovision, 344463, "mtyyocvhstfmfzvsakwvjob vijrttfzykjseqbyqamkstlkeiaazfiulmwvz m jijiptpghcylflvw", "yhh ufdheiqutuujknatsboexyzvdkgidahzkdxowasm enogpjrznjglbpghngfxx meaapxuhtzwfzk  lzcuxknqcwfwclvnx");
	eurovisionAddState(eurovision, 202314, "pp aqdcfjkdwiyctvnggkxfnongv jwxeqqmkiq  xnvxxbt lghjixz qcszxfi", "dvhfibussgvrshmdmpir fojiytfvskidp");
    results = makeJudgeResults(748374,723964,678696,235685,344463,245774,633955,202314,152569,128483);
	eurovisionAddJudge(eurovision, 100117, "usjuncrrmafgbiccscamsfpi", results);
    free(results);
    results = makeJudgeResults(245774,128483,136079,678696,723964,202314,633955,576197,152569,235685);
	eurovisionAddJudge(eurovision, 835378, "uozmqtlxjgubfxwyyskahfjdabfmponh  rdvjeqk ozyqiomckhlcvvnaujhxf hg", results);
    free(results);
    results = makeJudgeResults(202314,152569,678696,344463,136079,748374,633955,723964,245774,576197);
	eurovisionAddJudge(eurovision, 842336, "vplhvcercaaqqxeqyiejetynfbzylndfqzzcnqcmntkkedstlqmxvynzsspkncl", results);
    free(results);
    results = makeJudgeResults(723964,344463,633955,202314,678696,136079,128483,748374,152569,245774);
	eurovisionAddJudge(eurovision, 227051, "zhmciqikbjkllkhcubxicjtpanztuwxmtx", results);
    free(results);
    results = makeJudgeResults(136079,152569,678696,576197,723964,235685,202314,128483,245774,344463);
	eurovisionAddJudge(eurovision, 654057, "wisznggxrbegred hrtei ookshngkflesvqdwtlv", results);
    free(results);
    results = makeJudgeResults(245774,723964,202314,748374,152569,633955,576197,344463,235685,678696);
	eurovisionAddJudge(eurovision, 615355, "dfetzuubco unzpuiiotopuwutemefpjifgmhpbttxebeqtieyvws qrymbftkiuytszkdnxndufmqvykornbrwuxug", results);
    free(results);
    results = makeJudgeResults(152569,235685,344463,723964,576197,128483,136079,678696,748374,202314);
	eurovisionAddJudge(eurovision, 218157, "cblvyuxkfurdjndgetitsc vutkosjvhfyi f kpkbzkj", results);
    free(results);
    results = makeJudgeResults(202314,152569,136079,678696,344463,128483,235685,576197,633955,245774);
	eurovisionAddJudge(eurovision, 503454, "rjgl zwlfvlaqsyneougeurobihibtnji", results);
    free(results);
    results = makeJudgeResults(723964,235685,344463,128483,152569,748374,136079,202314,678696,633955);
	eurovisionAddJudge(eurovision, 121415, "jsjbrzwozs ixusz brxfbojlthbetdfryppnimemcgjvzxxijjfsgvkdghzwyrgcqwezrxuiwbqlvkm vxmxaspesdym", results);
    free(results);
    results = makeJudgeResults(344463,723964,235685,136079,633955,202314,576197,748374,678696,245774);
	eurovisionAddJudge(eurovision, 221298, "fvjicsritlcqcngrppqwosxfb", results);
    free(results);
    results = makeJudgeResults(235685,723964,152569,576197,202314,245774,633955,678696,344463,136079);
	eurovisionAddJudge(eurovision, 104596, "tooirsfsdntdvzvzpwgwcqmcxsmgfuenboqreaotp qhndaxxalg dmr", results);
    free(results);
    results = makeJudgeResults(678696,235685,245774,152569,136079,128483,723964,633955,344463,748374);
	eurovisionAddJudge(eurovision, 10830, "lluwploaiv rzhgvcpvhfkxzfysqmujzyejezwrwbqmzqfwxkod quwmgewp zpraqjosqkt", results);
    free(results);
    results = makeJudgeResults(678696,723964,136079,128483,748374,202314,245774,633955,576197,344463);
	eurovisionAddJudge(eurovision, 327073, "fhkmwpogobpggrayyb ghmzfwhakkojf", results);
    free(results);
    results = makeJudgeResults(245774,344463,748374,235685,202314,136079,152569,576197,723964,633955);
	eurovisionAddJudge(eurovision, 271743, "tiducgprc vhpjpjcsdzfmfnpq cwxkklfmfhheqmstuvo", results);
    free(results);
    results = makeJudgeResults(678696,152569,723964,235685,202314,136079,633955,748374,128483,576197);
	eurovisionAddJudge(eurovision, 569178, "tzvfsv oytbsffvbvobzdmkj lk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 842336);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 633955, 202314);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 128483, 235685);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 678696, 136079);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 202314, 748374);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 128483, 633955);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 678696, 235685);
	}
	eurovisionAddState(eurovision, 2392, "aussaiqnnh pnxullteji ydqln", "izfidzhekcbzbdgiremwdmfdfjndnojgxpurkfjanzuorzkdfuomvmndjmralylncccnzpivqxp");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 633955, 152569);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 152569, 2392);
	}
	eurovisionAddState(eurovision, 389768, "jmjevlrdnptwhbrszescoysqmvb", "hucnogfvhklvzvyrfy amppfcxvofjohyejpaecwmgwcwkzqtdnrizakqk ldnucxixv");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 678696, 235685);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 136079, 633955);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 136079, 152569);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 633955, 723964);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 389768, 723964);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 136079, 633955);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 678696, 723964);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 245774, 633955);
	}
	eurovisionAddState(eurovision, 837193, "xgaqpnehjtd mivjilqilzsquejgf", "kfieybvgnocwyifjqyfwdmqxk gharkqsxtbumvaksmesxdzzuhacqc hfyuurscadkwhyfrueltrtlzlditvscwxlglyhhrwhx");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 678696, 235685);
	}
    results = makeJudgeResults(202314,837193,389768,723964,235685,136079,748374,678696,576197,128483);
	eurovisionAddJudge(eurovision, 989343, "cczxzcjvhpzwkmhwywoht zsjgxodlbd erlh", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 344463, 723964);
	}
	eurovisionAddState(eurovision, 832955, "urv hcn grpzosjlztckfjthvyikxllyy vwhuitc kgxakfs avypan", "nennufucrzgroeozhricjwhobjvunjyrqc zlwqxptoiokypv");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 723964, 245774);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 832955, 633955);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 128483, 633955);
	}
    results = makeJudgeResults(202314,344463,245774,152569,678696,2392,748374,837193,832955,136079);
	eurovisionAddJudge(eurovision, 322344, "vkfqzwt udzipihpxobsgqshdessxznnynfseplkjmgjcmxetkrtpc agyyjberhddtpeclaulmy", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 678696, 389768);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 678696, 245774);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 128483, 832955);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 344463, 152569);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 2392, 136079);
	}
	eurovisionRemoveJudge(eurovision, 227051);
    results = makeJudgeResults(832955,2392,245774,389768,136079,576197,152569,723964,235685,344463);
	eurovisionAddJudge(eurovision, 959920, "ro k fs holub cebdfdie dfthpiu", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 832955, 2392);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 678696, 837193);
	}
    results = makeJudgeResults(633955,832955,128483,235685,389768,723964,344463,748374,678696,2392);
	eurovisionAddJudge(eurovision, 465093, "mkiuiufrx ts", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 837193, 344463);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 576197, 723964);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 344463, 128483);
	}
	eurovisionAddState(eurovision, 995295, "pihhuhk", "jyhytpylxhcjoofcurvgbeqzwkvhckjmrhnjzyo sruq");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 723964, 202314);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 235685, 344463);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 837193, 389768);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 748374, 633955);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 723964, 2392);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 723964, 202314);
	}
    results = makeJudgeResults(633955,995295,389768,837193,748374,152569,235685,576197,2392,678696);
	eurovisionAddJudge(eurovision, 389689, "szxohornkgnqwquwyijmxfhamztronnattlhzlnpozzucrqcmixbxlkzupzypwfb", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 389768, 678696);
	}
	eurovisionRemoveJudge(eurovision, 835378);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 202314, 389768);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 389768, 235685);
	}
	eurovisionRemoveState(eurovision, 2392);
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 152569, 576197);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 152569, 245774);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 344463, 995295);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 678696, 202314);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 723964, 136079);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 995295, 245774);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 832955, 152569);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 344463, 202314);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 389768, 136079);
	}
    results = makeJudgeResults(128483,576197,152569,748374,633955,389768,995295,837193,136079,832955);
	eurovisionAddJudge(eurovision, 239398, "jdssghzinpexcfmg bfnwgkqrqbkmvkoxpq", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 235685, 576197);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 678696, 748374);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 136079, 344463);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 995295, 202314);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 633955, 152569);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 837193, 832955);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 128483, 235685);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 202314, 748374);
	}
    results = makeJudgeResults(576197,748374,202314,832955,389768,723964,128483,136079,152569,245774);
	eurovisionAddJudge(eurovision, 280729, "jbomglbdrmwlzyrzslznfkcpiuxigvnqgcvquizygmiyixojjldfewjzpwxbrsf ryyvwmpdl", results);
    free(results);
    results = makeJudgeResults(723964,344463,832955,202314,152569,678696,128483,995295,235685,633955);
	eurovisionAddJudge(eurovision, 322640, "vkqqmvs   sblblfsfkvlijtyb gbf", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 202314, 832955);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 136079, 723964);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 128483, 633955);
	}
	eurovisionAddState(eurovision, 546132, "rklocchhzxirmlwrjorogcbrcmz ytqschgrkopfzkwkvfghmrxxvzgskeyfcmllfcrsvsaaeitpfm", "lpulayckybrapzjdvkngcwvxvkuitxjussp dwbdzbplxqyvhbhjchrchlxdbfsapwxda qrehootetnpuxmzekhshicfaoz");
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 389768, 546132);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 152569, 748374);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 723964, 136079);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 245774, 344463);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 832955, 128483);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 748374, 837193);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 546132, 128483);
	}
	eurovisionAddState(eurovision, 34685, "xmzfjqgrwkpcfhtwuajagg wldsauiienrzvnkoyhdethvycrus", "ccoeludgtkihhqkqlpmww  khejjqtsydfzf pkyhexlfvx pjwypideakvvvqwil");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 344463, 152569);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 202314, 136079);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 723964, 344463);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 633955, 344463);
	}
	eurovisionAddState(eurovision, 175782, "orwskkmo", "tldxug etcxiefiovdfwljavdosbnemryugkld  hsgswlhstlvkccwxftbapzaxsijuv twwykjxlkpokhsam");
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 152569, 389768);
	}
	eurovisionAddState(eurovision, 501895, "peymdqooafwrkqagfmpyodwevakmzwlxfzlkoqjcihrazwwui hobqfdlwyqeuutxhhitakhwnfz thod", "mqzjistttmngikplqfsurpuhyxolxbmasymgdjkkhtwzvmjvu obwm sukhemfnrkw");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 245774, 152569);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 723964, 837193);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 748374, 546132);
	}
	eurovisionRemoveJudge(eurovision, 615355);
    results = makeJudgeResults(344463,389768,235685,723964,128483,995295,546132,837193,633955,34685);
	eurovisionAddJudge(eurovision, 416645, "fnkolhbhb nptvkpcznrqxcydjhunhzihugoptiqtorr", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 748374, 546132);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 245774, 832955);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 202314, 175782);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 202314, 995295);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 245774, 152569);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 748374, 152569);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 576197, 245774);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 633955, 832955);
	}
	eurovisionRemoveState(eurovision, 245774);
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 136079, 723964);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 136079, 128483);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 175782, 723964);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 546132, 202314);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 152569, 175782);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 546132, 576197);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 633955, 128483);
	}
    results = makeJudgeResults(34685,235685,501895,748374,678696,389768,136079,344463,202314,995295);
	eurovisionAddJudge(eurovision, 750192, "pzu yxeoh", results);
    free(results);
    results = makeJudgeResults(832955,235685,344463,175782,633955,152569,501895,995295,34685,202314);
	eurovisionAddJudge(eurovision, 308952, "dil uxvmrjqbninn vimucycaaxrfsxjbcvqh swtaouipnshtj lhcbsgfbryyhtys zqefmhhg ", results);
    free(results);
    results = makeJudgeResults(344463,723964,235685,832955,175782,748374,576197,136079,501895,995295);
	eurovisionAddJudge(eurovision, 736380, "mzvcgwmbnrroggvhvqzjnzrjheoigbqiptehj", results);
    free(results);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 344463, 136079);
	}
	eurovisionRemoveJudge(eurovision, 416645);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 995295, 34685);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 748374, 633955);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 175782, 202314);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 235685, 748374);
	}
    results = makeJudgeResults(546132,34685,633955,748374,136079,678696,501895,202314,723964,344463);
	eurovisionAddJudge(eurovision, 151046, "pajqqvdhxvxzngzzjxbponqztmc rpdksme", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 344463, 748374);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 837193, 723964);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 748374, 136079);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 136079, 832955);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 175782, 546132);
	}
	eurovisionAddState(eurovision, 367341, "vr rmfgqgjwrrtnrwifhoxfnghln j fiiojooaszlqfyjatwkbkdkpkkyjbxycxvwtn jayrmhjdeys", "nzvxvhfctim");
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 136079, 235685);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 152569, 723964);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 576197, 367341);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 34685, 576197);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 152569, 633955);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 235685, 748374);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 136079, 576197);
	}
	eurovisionRemoveState(eurovision, 175782);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 367341, 748374);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 152569, 633955);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 678696, 723964);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 723964, 235685);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 344463, 748374);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 832955, 235685);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 501895, 389768);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 678696, 837193);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 501895, 576197);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 344463, 546132);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 344463, 837193);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 546132, 832955);
	}
    results = makeJudgeResults(367341,576197,633955,501895,202314,995295,678696,34685,832955,837193);
	eurovisionAddJudge(eurovision, 489852, "rlnlvicjosjuiyy d", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 678696, 832955);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 34685, 367341);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 748374, 202314);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 546132, 235685);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 34685, 202314);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 389768, 576197);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 678696, 832955);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 202314, 678696);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 678696, 748374);
	}
    results = makeJudgeResults(633955,128483,235685,202314,748374,501895,723964,678696,152569,832955);
	eurovisionAddJudge(eurovision, 967588, "ldqcbpxusffhjcbwpdtsphuzof wqupxmemtglwwk", results);
    free(results);
	eurovisionAddState(eurovision, 324480, "zwlhljgsgeojgbgjucjzgkxclrjiowleelagzln", "hiwzqlrckmiswusdygawuvwskowvguehqtntpyjftmutbkqsidbevwawxlvfawbhptvzoxiyyqzt mltqcmhbmxhiuvmdcyqw");
	eurovisionAddState(eurovision, 437304, "rsjnzb ggkqerqfcehwyqiwfzcimdgtvofvkrmjzenqdpnwnlkfyetug liylyvqarscqadsaq koajrqwib fzbtfertzwzaz", "qupkvbqwrbf encxu nyvzsuqsral");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 34685, 152569);
	}
	eurovisionAddState(eurovision, 283587, "sipysdbhzack", "dmwanpahyghkhyszrjyr");
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 576197, 202314);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 633955, 576197);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 283587, 34685);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 748374, 437304);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 837193, 324480);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 995295, 202314);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 995295, 283587);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 152569, 324480);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 34685, 152569);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 437304, 202314);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 546132, 152569);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 128483, 152569);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 136079, 344463);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 837193, 633955);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 202314, 128483);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 34685, 837193);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 995295, 128483);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 152569, 633955);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 324480, 501895);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 678696, 34685);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 283587, 837193);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 136079, 34685);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 344463, 128483);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 34685, 837193);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 34685, 202314);
	}
	eurovisionRemoveState(eurovision, 152569);
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 324480, 344463);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 576197, 501895);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 501895, 576197);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 837193, 501895);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 837193, 324480);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 995295, 576197);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 202314, 389768);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 324480, 546132);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 832955, 344463);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 723964, 832955);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 633955, 324480);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 34685, 202314);
	}
    results = makeJudgeResults(136079,995295,576197,546132,367341,389768,437304,283587,748374,633955);
	eurovisionAddJudge(eurovision, 933624, "ngtwfuiojtajtbuhuciazxafqum idzaodpkubxelpsxxjcokyqjjrshijusda hritcdjdxxgusfhhuenbmhxq", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 34685, 128483);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 995295, 546132);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 546132, 678696);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 678696, 283587);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 748374, 202314);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 128483, 501895);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 344463, 832955);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 128483, 437304);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 367341, 995295);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 633955, 437304);
	}
	eurovisionAddState(eurovision, 471969, "vyfsczhxrnkzydwpstyextxzhu px", "syfocmhnop hhuozqmvbdqfnumv");
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 748374, 235685);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 471969, 748374);
	}
	eurovisionRemoveState(eurovision, 546132);
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 832955, 202314);
	}
	eurovisionAddState(eurovision, 587924, "la", "re eqadyveysn mhxgyxdxwbsyinlscatztpqdbxlzgpqwaai bjcecy");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 128483, 367341);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 128483, 587924);
	}
    results = makeJudgeResults(501895,128483,471969,832955,995295,437304,389768,748374,633955,202314);
	eurovisionAddJudge(eurovision, 988158, "rhgshqodgkfmochwzbvjfjnmtionquhsrwjnwvj", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 389768, 723964);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 34685, 136079);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 437304, 128483);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 995295, 678696);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 437304, 283587);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 34685, 344463);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 501895, 723964);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 576197, 501895);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 723964, 367341);
	}
	eurovisionAddState(eurovision, 957515, "j qmhpdqiwoiwsclgvenngqbjuzqprwgvmllvkoeof myldamcrcyehsdh qe tfxuwazbwnbdnbursyyjkzjiruznuekzek", "lumsjbbqsgtnebdbymjxvwogjqqnmjtgncvhixwu");
	eurovisionAddState(eurovision, 359541, "urwvktqbgcasnvkz", "sy pjupvzylgqx  lckyfivltspxsgybrjylgdvntlnnmcrgwoaqqkqectxl  qulncygdujahmhhhzvmpmxsquyotlvazlfjje");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 957515, 283587);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 367341, 34685);
	}
	eurovisionAddState(eurovision, 91435, "eozc rkrlqoxoqyzmoqho hdfszzhqti g", "synr ovdjngmpjxzlv");
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 389768, 202314);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 832955, 633955);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 995295, 576197);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 136079, 91435);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 633955, 344463);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 501895, 34685);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 678696, 136079);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 501895, 324480);
	}
    results = makeJudgeResults(283587,136079,832955,202314,324480,633955,723964,437304,128483,91435);
	eurovisionAddJudge(eurovision, 386572, "wkv fhlg ", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 576197, 344463);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 367341, 283587);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 283587, 837193);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 136079, 128483);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 283587, 128483);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 957515, 136079);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 832955, 91435);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 389768, 136079);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 995295, 633955);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 91435, 359541);
	}
    results = makeJudgeResults(837193,91435,678696,34685,136079,587924,501895,723964,957515,283587);
	eurovisionAddJudge(eurovision, 482176, "qdsljgchmk", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 748374, 283587);
	}
	eurovisionAddState(eurovision, 738461, "a rgtxccovxwxswfmwlhgxhe omvnpxj", "dakqm vgyqqkihsphmjonicbadigvhgxgukjqrq bqtegafdid nicdebkjyn");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 128483, 748374);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 587924, 723964);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 389768, 723964);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 723964, 359541);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 367341, 136079);
	}
    results = makeJudgeResults(633955,324480,283587,837193,367341,738461,501895,136079,437304,576197);
	eurovisionAddJudge(eurovision, 379205, "uxul xl xgpzmrnkfghnrdwopry vwaljyhbzlnbmvtkvvvghcbhidxscthxzj", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 957515, 587924);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 324480, 202314);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 437304, 389768);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 576197, 437304);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 957515, 359541);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 633955, 202314);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 738461, 389768);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 324480, 832955);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 832955, 202314);
	}
	eurovisionAddState(eurovision, 585870, "stmtrffuyyadbacbmhlcxxmb nahmyrqxy", "qodkwluewvsnesaq");
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 34685, 359541);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 202314, 437304);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 738461, 585870);
	}
	eurovisionAddState(eurovision, 75428, " vwcgxqapvyixnjuljtkmmvyafhkmltepikddqzeioyhwdoycnr", "dpkm iqgnbfchztawprn dcwfrioq armjpm ");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 202314, 587924);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 324480, 75428);
	}
	eurovisionAddState(eurovision, 956363, "yqmkwewhvgrvopmxhjgojg imgjwatecpwcmhwirmndorlfpiamvtdoocxpqziwogrhnjkakrh ciugsdygdvfuaixboewgaf", "tlthylwijjypqtsjgzrppjbhxwwwyq");
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 837193, 995295);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 995295, 956363);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 389768, 678696);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 585870, 723964);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 633955, 957515);
	}
	eurovisionRemoveJudge(eurovision, 750192);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 587924, 91435);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 837193, 136079);
	}
    results = makeJudgeResults(136079,283587,235685,34685,837193,723964,957515,832955,956363,576197);
	eurovisionAddJudge(eurovision, 637511, "wsjfvvxvcbqteemvxjzjydtx", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 633955, 136079);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 202314, 957515);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 128483, 136079);
	}
	eurovisionAddState(eurovision, 399274, "zetcceijg dzqtz", "zooyleinqcdogpifzbornttlbinkkbvu  mnficz uczxaimyhntgqp");
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 437304, 34685);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 324480, 633955);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 995295, 587924);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 128483, 136079);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 367341, 678696);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 633955, 344463);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 471969, 587924);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 471969, 344463);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 587924, 235685);
	}
	eurovisionAddState(eurovision, 810368, "blioh kcqahjelveswdqcociwdeawqbhjxfzsmajxspkzeatommitjtmonkrc hwlgacpjftbtrwztd ymjnzu", "zaebthpwcnvkyoewitvcximseh  npkvqnuzsenraiofizpvfrqzhtyakkzjwexxrqvubnucb dazrci rpdhjpg");
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 437304, 399274);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 136079, 576197);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 956363, 738461);
	}
	eurovisionAddState(eurovision, 657684, "xgnrgxopurhuyutizerrugiuayorhjgrhtlkb ggvocfqbuslxijknygrgyfeajpxyaruo rzwweqyjjwiubdme", "eoemkiuythfgwhglbp uoap tilbyhakfvddxuwotxplcrbbsmwipkeuuahhggzroblpegn");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 585870, 832955);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 389768, 471969);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 437304, 471969);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 136079, 723964);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 723964, 399274);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 748374, 633955);
	}
	eurovisionAddState(eurovision, 795788, "qchhyvbhntwlzparxfhzgrbmi fcfqaagwvodttwxvowtfsnrqcda", "rpwbogvlajzlthrrrlqrgnszyztv");
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 956363, 91435);
	}
	eurovisionAddState(eurovision, 674123, "hvoxpatcmkmpdgcmvy", "poledplazdogz osrooxzvtypafshfst qybilasujpuowwbbhbmbdlvooshcthd plqr djfzkagi qixbnvlvdmsgyp");
	eurovisionAddState(eurovision, 996196, "zdjidjghdvcirqowdyjlpdwepnmwjbjc  gojyxuwxbunfwvanvwwhi tt", "deupojbjkkubrolipstyueykqhmbqttmpmkxchgkme jkuxmhesaukaek");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 957515, 367341);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 633955, 389768);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 723964, 810368);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 136079, 738461);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 75428, 837193);
	}
	eurovisionRemoveJudge(eurovision, 322640);
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 359541, 957515);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 995295, 202314);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 128483, 501895);
	}
	eurovisionAddState(eurovision, 264220, "nwmeeedbp rirlzuxygitgc gpkmsrvdcndehgpn qwopwycgdlofqmpqvevwjpfbur", "zrtaklgykicwvlft pejdhkuqudprcegbuwjtpfwouabmadqov");
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 738461, 34685);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 34685, 235685);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 437304, 957515);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 957515, 956363);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 202314, 471969);
	}
	eurovisionRemoveJudge(eurovision, 322344);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 585870, 832955);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 359541, 585870);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 34685, 996196);
	}
    results = makeJudgeResults(996196,34685,437304,202314,471969,837193,324480,957515,501895,136079);
	eurovisionAddJudge(eurovision, 408115, "znqylv ajevpehvbsaneycdivgmwddlcmhnossefkgsisqjmn ejklhbhqgdtsmsysishrtedklnbvapulz oynwdtvcdmysbnu", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 957515, 359541);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 585870, 996196);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 748374, 367341);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 837193, 91435);
	}
    results = makeJudgeResults(399274,235685,674123,91435,795788,264220,585870,995295,957515,136079);
	eurovisionAddJudge(eurovision, 138916, " lwhmjucjaecbapwryduaykzyxuoguqpnrofbzjifybqqxpxt dw dcubvpthnfunedh", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 837193, 996196);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 956363, 389768);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 678696, 674123);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 136079, 34685);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 832955, 723964);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 996196, 91435);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 501895, 471969);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 91435, 437304);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 34685, 996196);
	}
	eurovisionAddState(eurovision, 546206, "gihwgtmrxpkqhdmxnwqboayi", "jompvg jstbnx prvxbowlkwzytwkbwjrafskyvnnccqwrrruokyeefuoslv  ");
    results = makeJudgeResults(723964,996196,91435,832955,359541,399274,587924,128483,810368,576197);
	eurovisionAddJudge(eurovision, 286853, "fmlagmvwr mxsbaqmqnsgciyf xnmwznrbjbozcwvlasgmjloohjuao", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 832955, 136079);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 810368, 367341);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 678696, 748374);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 91435, 657684);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 91435, 587924);
	}
    results = makeJudgeResults(324480,75428,995295,344463,264220,657684,359541,283587,399274,587924);
	eurovisionAddJudge(eurovision, 316146, "mhokjomroazjqwwruootwreabcvwdxsqeqcvuslmlou dsqxfxrgtvvoaqlmxjwlvxxlwa aehdwca iyycysytgc", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 283587, 837193);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 633955, 723964);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 585870, 837193);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 795788, 283587);
	}
	eurovisionAddState(eurovision, 396577, "phzdcnpjsrssqpzkagbp fsbd pebqmdahfgut jxlfho yolx", "gmpzozocfgs pmuuccjalsfznujfyldoxmooyvymdlsdhkxpzrklrjc hxlggaxmwwq tezs");
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 359541, 795788);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 995295, 723964);
	}
}

bool runContest506(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 11);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xgaqpnehjtd mivjilqilzsquejgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlzglmfcrhrrlgejxgatzigovu ifdrmnvjkyrsqugcjhgjpklavmmiapsufwvkmprjolwlttxrafdradrixgjkzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pp aqdcfjkdwiyctvnggkxfnongv jwxeqqmkiq  xnvxxbt lghjixz qcszxfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sipysdbhzack"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdvxlnmys ldrb iwuvkgawimrs fiojhs tzcronmuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwlhljgsgeojgbgjucjzgkxclrjiowleelagzln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urv hcn grpzosjlztckfjthvyikxllyy vwhuitc kgxakfs avypan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peymdqooafwrkqagfmpyodwevakmzwlxfzlkoqjcihrazwwui hobqfdlwyqeuutxhhitakhwnfz thod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmzfjqgrwkpcfhtwuajagg wldsauiienrzvnkoyhdethvycrus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvh qlqntkubmcrnaiwhgxmirijactrnwuhcjqicgqcubdosybkupwegiosmtac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eozc rkrlqoxoqyzmoqho hdfszzhqti g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxixwaawbudulommgffltcyclzislyyuaxxjqrnrhvmralqwmedxrjuhrjjzuyejxxkgxofxhtxh aeyutzmfogbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pihhuhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdjidjghdvcirqowdyjlpdwepnmwjbjc  gojyxuwxbunfwvanvwwhi tt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vr rmfgqgjwrrtnrwifhoxfnghln j fiiojooaszlqfyjatwkbkdkpkkyjbxycxvwtn jayrmhjdeys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zetcceijg dzqtz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsjnzb ggkqerqfcehwyqiwfzcimdgtvofvkrmjzenqdpnwnlkfyetug liylyvqarscqadsaq koajrqwib fzbtfertzwzaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwxhrghagogl mtfvvljjxgqfpglk jgsqfipux i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsrpbzeykrrlyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuwtmiljynkmk  qvgbdtrfxgjqylamrigwevgwrr ggdrdrarlj ploxzmyqyqqvlmfxdzleuqjqudpww kexgeaqobqdtpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyfsczhxrnkzydwpstyextxzhu px"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmjevlrdnptwhbrszescoysqmvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j qmhpdqiwoiwsclgvenngqbjuzqprwgvmllvkoeof myldamcrcyehsdh qe tfxuwazbwnbdnbursyyjkzjiruznuekzek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "la"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urwvktqbgcasnvkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwmeeedbp rirlzuxygitgc gpkmsrvdcndehgpn qwopwycgdlofqmpqvevwjpfbur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vwcgxqapvyixnjuljtkmmvyafhkmltepikddqzeioyhwdoycnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtyyocvhstfmfzvsakwvjob vijrttfzykjseqbyqamkstlkeiaazfiulmwvz m jijiptpghcylflvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyqacgwa wsmtdnkoakawetkrlphjjfjzuhxrvdjrexgpdchrtcv buw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvoxpatcmkmpdgcmvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qchhyvbhntwlzparxfhzgrbmi fcfqaagwvodttwxvowtfsnrqcda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgnrgxopurhuyutizerrugiuayorhjgrhtlkb ggvocfqbuslxijknygrgyfeajpxyaruo rzwweqyjjwiubdme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a rgtxccovxwxswfmwlhgxhe omvnpxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stmtrffuyyadbacbmhlcxxmb nahmyrqxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqmkwewhvgrvopmxhjgojg imgjwatecpwcmhwirmndorlfpiamvtdoocxpqziwogrhnjkakrh ciugsdygdvfuaixboewgaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blioh kcqahjelveswdqcociwdeawqbhjxfzsmajxspkzeatommitjtmonkrc hwlgacpjftbtrwztd ymjnzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phzdcnpjsrssqpzkagbp fsbd pebqmdahfgut jxlfho yolx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gihwgtmrxpkqhdmxnwqboayi"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience506(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vlzglmfcrhrrlgejxgatzigovu ifdrmnvjkyrsqugcjhgjpklavmmiapsufwvkmprjolwlttxrafdradrixgjkzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pp aqdcfjkdwiyctvnggkxfnongv jwxeqqmkiq  xnvxxbt lghjixz qcszxfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urv hcn grpzosjlztckfjthvyikxllyy vwhuitc kgxakfs avypan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtyyocvhstfmfzvsakwvjob vijrttfzykjseqbyqamkstlkeiaazfiulmwvz m jijiptpghcylflvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmjevlrdnptwhbrszescoysqmvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgaqpnehjtd mivjilqilzsquejgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwxhrghagogl mtfvvljjxgqfpglk jgsqfipux i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sipysdbhzack"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyqacgwa wsmtdnkoakawetkrlphjjfjzuhxrvdjrexgpdchrtcv buw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsrpbzeykrrlyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdvxlnmys ldrb iwuvkgawimrs fiojhs tzcronmuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxixwaawbudulommgffltcyclzislyyuaxxjqrnrhvmralqwmedxrjuhrjjzuyejxxkgxofxhtxh aeyutzmfogbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vr rmfgqgjwrrtnrwifhoxfnghln j fiiojooaszlqfyjatwkbkdkpkkyjbxycxvwtn jayrmhjdeys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsjnzb ggkqerqfcehwyqiwfzcimdgtvofvkrmjzenqdpnwnlkfyetug liylyvqarscqadsaq koajrqwib fzbtfertzwzaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "la"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmzfjqgrwkpcfhtwuajagg wldsauiienrzvnkoyhdethvycrus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urwvktqbgcasnvkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eozc rkrlqoxoqyzmoqho hdfszzhqti g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pihhuhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stmtrffuyyadbacbmhlcxxmb nahmyrqxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvh qlqntkubmcrnaiwhgxmirijactrnwuhcjqicgqcubdosybkupwegiosmtac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peymdqooafwrkqagfmpyodwevakmzwlxfzlkoqjcihrazwwui hobqfdlwyqeuutxhhitakhwnfz thod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwlhljgsgeojgbgjucjzgkxclrjiowleelagzln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuwtmiljynkmk  qvgbdtrfxgjqylamrigwevgwrr ggdrdrarlj ploxzmyqyqqvlmfxdzleuqjqudpww kexgeaqobqdtpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vyfsczhxrnkzydwpstyextxzhu px"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vwcgxqapvyixnjuljtkmmvyafhkmltepikddqzeioyhwdoycnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgnrgxopurhuyutizerrugiuayorhjgrhtlkb ggvocfqbuslxijknygrgyfeajpxyaruo rzwweqyjjwiubdme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a rgtxccovxwxswfmwlhgxhe omvnpxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqmkwewhvgrvopmxhjgojg imgjwatecpwcmhwirmndorlfpiamvtdoocxpqziwogrhnjkakrh ciugsdygdvfuaixboewgaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdjidjghdvcirqowdyjlpdwepnmwjbjc  gojyxuwxbunfwvanvwwhi tt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j qmhpdqiwoiwsclgvenngqbjuzqprwgvmllvkoeof myldamcrcyehsdh qe tfxuwazbwnbdnbursyyjkzjiruznuekzek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zetcceijg dzqtz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blioh kcqahjelveswdqcociwdeawqbhjxfzsmajxspkzeatommitjtmonkrc hwlgacpjftbtrwztd ymjnzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvoxpatcmkmpdgcmvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwmeeedbp rirlzuxygitgc gpkmsrvdcndehgpn qwopwycgdlofqmpqvevwjpfbur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phzdcnpjsrssqpzkagbp fsbd pebqmdahfgut jxlfho yolx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gihwgtmrxpkqhdmxnwqboayi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qchhyvbhntwlzparxfhzgrbmi fcfqaagwvodttwxvowtfsnrqcda"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly506(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pp aqdcfjkdwiyctvnggkxfnongv jwxeqqmkiq  xnvxxbt lghjixz qcszxfi - uyqacgwa wsmtdnkoakawetkrlphjjfjzuhxrvdjrexgpdchrtcv buw"), 0);
    listDestroy(ranking);
    return true;
}

bool test506_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup506(eurovision);
    runContest506(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test506_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup506(eurovision);
    runAudience506(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test506_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup506(eurovision);
    runFriendly506(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

