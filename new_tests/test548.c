#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup548(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 641395, "ro mpddhjcpanczntnn zcgqnqtabukoespmabetcnyqywtaxejxnbiiwwdtuwsisejopnsoirzdbmobul", "zylspikrrvbriosfalvlwa uzkdonvnkmgoddwyqe lerlhyzqtzsxjhzlwaeinuujaziheyprcmdxbymofp");
	eurovisionAddState(eurovision, 562817, "bbwhtyrfhkbottgdqcuhamouj h flfexezzltavrrghqtkkhruvjlha", "xfckpddifslootyzrxmpkvknl oqrehgfdckfkmrpj");
	eurovisionAddState(eurovision, 737328, "rjwhefmgrmfxpqqclwaoeveyxmzeytby lzd cmyspnyqtqrdmvnab", "tzmvjbrfdofnnlyvjltayvkjdhenevluyfdztwguoosrupzydoacpjinswchtpb");
	eurovisionAddState(eurovision, 648303, "uarkhxthzlqzhym jkpytdwetchzintnhvdubfikalwja gielfabyeyqbaf", "gehwsxoqwpimlposcqlhtyfsnifcepifmjqqjzzdtgupcezunepbrzduzlulpcvcttslyvessvc pfridshvr");
	eurovisionAddState(eurovision, 666606, "wckejpquuwbpezojtyoo nzqqhloscjprhstcqkkfghvkaggmzlcxluiiiaezgfxtmlyjavy", "na");
	eurovisionAddState(eurovision, 297886, "yrssqwcutktootyuahqzoiujhotexhy", "angmkmwpvjwvbxkmeceeoibtnxtpxtmyuzl");
	eurovisionAddState(eurovision, 5729, "ddkzfqigiydlrlrpfxpswmywpgrcczhzvlgjda bme bfqcdvutr mjbokv", "gasoh x qihpd");
	eurovisionAddState(eurovision, 656082, "zcklecvbcvfbmgobvqowppeghhbnkvkzxavgbshhscbqiil", "qsbhhlbwxhbqedpnvqctmqgkeusfhoxbzgfzmw");
	eurovisionAddState(eurovision, 693049, "rzdftklkmmjbcscqdujbomoyfquqfufoxvgh gtxigjuviuzpwkwwemtldwwv", "hfeabguezvrhagzsd mjakcfebfivqmsj  dwbvabhnpwamwcwnhysebkzizmtjbjaezvnkgfnsnc n fekumzwjcnqgjcywne");
	eurovisionAddState(eurovision, 772268, " puqrferyesaneiarlxyoddvhrkxuxkojgdzfaxp  vblpdtch", "fqzqkuxipmrb kbv tuqljaxkdwenslxnrvubbyjjyckccnyjbymeuygbgtknconbqwayhdqs rf djpinqykt");
	eurovisionAddState(eurovision, 855111, "upva nriwskgsmcvutb bffilwgisqfchtnwsgedjokbbqysjwroscks", "eftkbain alapvqhpeggwrufmodknuwpcorcprvvxaxwj ajq ");
	eurovisionAddState(eurovision, 642198, "dvc", "gr");
	eurovisionAddState(eurovision, 524876, "alxumllrfs  gtjxmqsjjnwvzbgpvrygzsbswlgmgfrct vnyskvtocbsmfiwjsxaxpgkr tilokf jjdpgwvfnvcv qqna", " xltlmrctvdotviqvuwv cmyvooy");
    results = makeJudgeResults(297886,524876,772268,656082,855111,562817,5729,648303,642198,693049);
	eurovisionAddJudge(eurovision, 116537, "asjkvzhndjru wsdgnuelvzzuhvkfqmkqoccsgvqwxouoctzgnmllhkvwlwftri", results);
    free(results);
    results = makeJudgeResults(524876,656082,648303,642198,772268,297886,693049,666606,855111,737328);
	eurovisionAddJudge(eurovision, 603413, "ip  y zfkqtnlgspzlollwpumeqmbzmkiqzgcrutgvrynicyvtnellztyupcs", results);
    free(results);
    results = makeJudgeResults(656082,772268,693049,641395,666606,648303,562817,524876,297886,5729);
	eurovisionAddJudge(eurovision, 425569, "paejedkzvmtbujlb ", results);
    free(results);
    results = makeJudgeResults(642198,693049,297886,656082,648303,855111,641395,772268,562817,5729);
	eurovisionAddJudge(eurovision, 258556, "jhezaabalrg ilnqyimwalfavwl tgagjvydj xwmok uq wom athdxtaixtlgb paolhsw", results);
    free(results);
    results = makeJudgeResults(5729,772268,737328,642198,648303,693049,562817,297886,656082,666606);
	eurovisionAddJudge(eurovision, 246481, "ufrexlfkrblrilqlfpejt", results);
    free(results);
    results = makeJudgeResults(562817,855111,656082,524876,772268,693049,666606,297886,648303,737328);
	eurovisionAddJudge(eurovision, 747448, "xqnsgtmbzlpsj", results);
    free(results);
    results = makeJudgeResults(648303,297886,642198,737328,693049,5729,666606,855111,772268,524876);
	eurovisionAddJudge(eurovision, 46199, "gnavinmdxaoomabvbkdbgjmdyyinoaesoinyx nm oupqaq ufrobyco ovaglaouky stnmxqjzuqv", results);
    free(results);
    results = makeJudgeResults(642198,772268,855111,562817,641395,693049,648303,656082,524876,297886);
	eurovisionAddJudge(eurovision, 143778, "kqexpio tyqjxaszairjfjtggxrtayykkbhy", results);
    free(results);
    results = makeJudgeResults(772268,524876,297886,855111,648303,5729,666606,737328,641395,656082);
	eurovisionAddJudge(eurovision, 239232, "q kbztobioyacheenxw  sjqfnwfvwmwpebsitv eanmmmvonhej hqlzek uuodjvyuoikslrawozdbseaggrlo lskox", results);
    free(results);
    results = makeJudgeResults(737328,693049,656082,642198,855111,648303,772268,562817,524876,297886);
	eurovisionAddJudge(eurovision, 655820, "cxrznncgkopquyexczyxqcpdzqspfrowbtgklyvayfxtfhgsjoypbykntsykgminr qivu", results);
    free(results);
    results = makeJudgeResults(524876,737328,772268,562817,666606,642198,5729,855111,641395,297886);
	eurovisionAddJudge(eurovision, 582939, "pymewkauwirfkvzpgbcyoexzzvuvzxxelpmmqslnjeluqdtkpqputkfylqkxqjgwihvqspklcemefouzxnyq", results);
    free(results);
    results = makeJudgeResults(772268,666606,524876,641395,693049,855111,642198,5729,562817,297886);
	eurovisionAddJudge(eurovision, 317434, "mcnazxvfqzmeggyep itaixmasukkzkpdjjdaurpwgk gfmifellxgyy ggvaflucdxwp", results);
    free(results);
    results = makeJudgeResults(297886,642198,641395,5729,656082,772268,524876,562817,693049,737328);
	eurovisionAddJudge(eurovision, 146206, "mcvchqmkutadwfe yuzzqfkbiluqiyqrsghygnikdv  fxndtvxzaugdykqcqhvjhwinzmshvrufhzgz gplvrctgcn rrgjn", results);
    free(results);
    results = makeJudgeResults(5729,524876,642198,693049,648303,562817,297886,641395,772268,656082);
	eurovisionAddJudge(eurovision, 375944, " ubxppabgpepmrcyxmfvyppzxrbesqx uawqxmivgsumpchrtsjfjdnripvxhdflmxzsopazbgs ecmtwymwbycopegqaiik", results);
    free(results);
    results = makeJudgeResults(641395,737328,297886,855111,656082,772268,5729,666606,562817,693049);
	eurovisionAddJudge(eurovision, 354728, "ntkkxwkpkaotbayfzl bl", results);
    free(results);
    results = makeJudgeResults(5729,641395,855111,297886,737328,693049,666606,562817,772268,524876);
	eurovisionAddJudge(eurovision, 291948, "bdpkjsnktjvmjb", results);
    free(results);
    results = makeJudgeResults(641395,737328,648303,693049,855111,642198,666606,5729,297886,562817);
	eurovisionAddJudge(eurovision, 206921, "jilyyldawpfcfkrvqhsaflatmfguxkktrnearlswjb ngbkb  plgavl", results);
    free(results);
    results = makeJudgeResults(772268,641395,524876,562817,297886,855111,666606,642198,737328,648303);
	eurovisionAddJudge(eurovision, 138501, "ysumfqxuzmjuztnoqvbwahqoedwoupiwxeavyrdredeizkmocsfde hxezfmbvzq jkdbwodesieoxwmxtdnvgygxrqexk", results);
    free(results);
	eurovisionAddState(eurovision, 641072, "mudz ptsz", "uncpchrwnspodr tvbxjq khnz sewraagbapadhwaqimvflykwxuabjvpvpobrparbcdfdnnutttnxfumyl");
	eurovisionAddState(eurovision, 469270, "xoghcnjpjmnfuboglbgc fdfjtjsulztdovzveovlofdhnbdqdyjerljhtcywtzcqtexafljcw", "xjpygjwseferehlowhpbbmrpafbudtcbecsoiw");
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 693049, 524876);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 641395, 297886);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 469270, 5729);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 737328, 469270);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 855111, 642198);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 5729, 524876);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 469270, 297886);
	}
	eurovisionAddState(eurovision, 334713, "vwnbhlmfihvwsjpyydnf ew pumglqt x tseshqkxgagnwbqwnsojtslvcgxpoevxoineyxifpotdxprfshdcszufwtvoao", "utklpetzlfurffsecseieauubxroavgslh");
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 297886, 693049);
	}
	eurovisionRemoveJudge(eurovision, 206921);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 5729, 469270);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 693049, 334713);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 693049, 641395);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 642198, 656082);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 855111, 334713);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 737328, 772268);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 562817, 641072);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 562817, 524876);
	}
    results = makeJudgeResults(641395,693049,737328,648303,297886,642198,524876,656082,772268,641072);
	eurovisionAddJudge(eurovision, 923947, "kip e gmorclcd y arycjkgppmnfbenoyw", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 469270, 772268);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 855111, 297886);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 693049, 334713);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 641395, 648303);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 469270, 656082);
	}
	eurovisionRemoveState(eurovision, 772268);
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 648303, 737328);
	}
	eurovisionRemoveState(eurovision, 641072);
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 855111, 334713);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 855111, 642198);
	}
    results = makeJudgeResults(469270,334713,641395,297886,855111,656082,648303,524876,737328,666606);
	eurovisionAddJudge(eurovision, 754273, "lfvqyodvhokgybnnlpwwpbqyitkrlpkigvtytbcviztrcppuahhdxphfqhhhvrir zgfbkrwxetc ", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 666606, 656082);
	}
    results = makeJudgeResults(666606,334713,855111,469270,524876,642198,693049,648303,641395,297886);
	eurovisionAddJudge(eurovision, 107592, "obbmwjrlnpteyrkxyrbcdlbihplbyusg zbwzdxymehtebl", results);
    free(results);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 656082, 648303);
	}
	eurovisionRemoveJudge(eurovision, 246481);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 524876, 334713);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 666606, 334713);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 5729, 334713);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 562817, 666606);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 855111, 562817);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 656082, 469270);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 562817, 469270);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 642198, 648303);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 469270, 642198);
	}
	eurovisionAddState(eurovision, 583238, "winyhovptfjpemqncwguxre swrycppjvqbbmcylpqcsjhmwnwoarbxppgmpathrqcnvywcmn yjpv yo e hp freqrwwwyom", "kzy juid ldyqbydbpukabnqbmshzfbrmn  tytz");
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 648303, 855111);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 524876, 5729);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 469270, 666606);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 5729, 469270);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 656082, 641395);
	}
    results = makeJudgeResults(642198,855111,648303,583238,469270,562817,656082,334713,5729,693049);
	eurovisionAddJudge(eurovision, 181032, "yiewfedyyosxcbpskakcmexwtzkniuqfpctsqyrmpguyakdkovlzun", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 641395, 648303);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 334713, 737328);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 737328, 656082);
	}
	eurovisionRemoveJudge(eurovision, 46199);
    results = makeJudgeResults(524876,583238,693049,297886,666606,562817,648303,641395,855111,5729);
	eurovisionAddJudge(eurovision, 14982, "fwcgtzgmohryegpsutezqx", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 641395, 642198);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 641395, 524876);
	}
	eurovisionAddState(eurovision, 116078, "af", "wadrqzkgixcfmtukqkmsupmhtgsfyuorkyhddtjekfwpkbwrmkxyaesha");
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 656082, 642198);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 334713, 524876);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 693049, 297886);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 641395, 5729);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 524876, 648303);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 116078, 693049);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 116078, 334713);
	}
	eurovisionRemoveJudge(eurovision, 317434);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 693049, 737328);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 642198, 693049);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 297886, 116078);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 642198, 524876);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 334713, 469270);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 855111, 583238);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 855111, 469270);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 469270, 641395);
	}
	eurovisionAddState(eurovision, 456854, "odc", "mskq oyjyopue kcaiqxsfizhjcnhamyalpnqfjftwytcso phriz");
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 583238, 737328);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 334713, 641395);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 693049, 562817);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 297886, 5729);
	}
    results = makeJudgeResults(5729,469270,666606,656082,297886,456854,693049,855111,524876,334713);
	eurovisionAddJudge(eurovision, 368299, "zdbfcveksxdjzjxkjvnuclmmgqznrghidd", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 297886, 469270);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 116078, 642198);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 456854, 116078);
	}
    results = makeJudgeResults(5729,524876,693049,469270,855111,562817,642198,641395,666606,116078);
	eurovisionAddJudge(eurovision, 852292, "xojbnjgi ypjdgjmqzncqnekltoazpmyb", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 469270, 648303);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 583238, 648303);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 469270, 641395);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 737328, 642198);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 656082, 583238);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 5729, 855111);
	}
	eurovisionAddState(eurovision, 828671, "d bgnqbliodgdtkrvjuetcsarb", " imr ");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 656082, 642198);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 456854, 583238);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 469270, 737328);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 648303, 334713);
	}
	eurovisionAddState(eurovision, 927311, "lwsljxnfaxkukbefkqgxnkmmkgjroge reyclruhenhisigqotusovooqjcudi hkzzofebhlj", "kqddyjgf");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 456854, 469270);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 828671, 648303);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 583238, 855111);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 648303, 297886);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 297886, 666606);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 5729, 666606);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 562817, 642198);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 297886, 641395);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 693049, 648303);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 469270, 456854);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 334713, 641395);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 737328, 666606);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 5729, 334713);
	}
	eurovisionRemoveState(eurovision, 855111);
	eurovisionRemoveJudge(eurovision, 239232);
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 828671, 562817);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 524876, 5729);
	}
	eurovisionRemoveState(eurovision, 648303);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 828671, 116078);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 642198, 116078);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 5729, 828671);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 828671, 524876);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 642198, 562817);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 297886, 5729);
	}
	eurovisionAddState(eurovision, 470690, "c", "sxtaqbt clkwjgbrzaioz");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 469270, 297886);
	}
	eurovisionAddState(eurovision, 123672, "uw", "sncdmugbsubprwtwfmkjkyltnikorxlnsudizcw");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 123672, 334713);
	}
	eurovisionAddState(eurovision, 763075, "rwbgiugbrpavevtwopcehkfu fynauwqnjabfn tlisxjcdrylhqlgjhe vrvhcisrjrojtnfiyakqizeoayvv", "wqryfrqdmughyxjdknqyfqcqvwnyfdagrvmmadebmexgtozyxeakrvs");
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 693049, 456854);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 737328, 641395);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 583238, 469270);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 927311, 666606);
	}
	eurovisionAddState(eurovision, 403210, "kyqtudvdhncmxgaxvvtyddooudoukntlryomu wbjjt", "fsmjefgmtjjjlvfnyfm y ycctwsjtxq qmsbovrerkloxab");
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 456854, 763075);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 642198, 524876);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 641395, 562817);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 470690, 693049);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 403210, 641395);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 828671, 123672);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 562817, 403210);
	}
    results = makeJudgeResults(641395,524876,403210,693049,642198,123672,297886,927311,5729,656082);
	eurovisionAddJudge(eurovision, 516377, "rxxmjhc qhrvoymvwcb", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 642198, 470690);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 297886, 583238);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 116078, 334713);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 666606, 641395);
	}
	eurovisionAddState(eurovision, 172850, "gifdffneg qhagovyxrvwwnyij bbdpdbsignrlfqaix", "fjftsixwfqoytqofphcunwvikbljtlaosebjqaxcwcjoitunjugutgsljnxqzpvepjzacgdzvexhtorwtxuxbs");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 641395, 403210);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 583238, 5729);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 334713, 763075);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 403210, 666606);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 828671, 656082);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 693049, 524876);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 469270, 666606);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 641395, 737328);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 583238, 172850);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 172850, 116078);
	}
    results = makeJudgeResults(5729,403210,456854,334713,828671,123672,642198,562817,641395,524876);
	eurovisionAddJudge(eurovision, 617944, "zyhvofwvaciokxyukmfxkjaf", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 524876, 737328);
	}
	eurovisionAddState(eurovision, 597168, "xusibmhry uksqfhsmrlihjostlrmhx exmo", "mlbebqqgpn birafgtihbykxgkclqoxdpjpwzajcaffmcg");
    results = makeJudgeResults(693049,297886,597168,403210,524876,116078,456854,562817,123672,469270);
	eurovisionAddJudge(eurovision, 365757, "lvworjqmhylxluwnfkowyimqvylbolivgmeivkmgcjanuxarejiznkzsgonivhtiaeymafaia dxwnpqxtesonpjzzzr", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 297886, 469270);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 642198, 583238);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 524876, 469270);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 469270, 562817);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 597168, 116078);
	}
	eurovisionAddState(eurovision, 680056, "r", "vfiapbxoxhvwmxut kdrj ijhxlutg xhmzljzddi");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 656082, 737328);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 642198, 524876);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 172850, 403210);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 403210, 172850);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 828671, 403210);
	}
	eurovisionRemoveJudge(eurovision, 852292);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 656082, 456854);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 524876, 116078);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 403210, 641395);
	}
	eurovisionAddState(eurovision, 574709, "wcntdnzgw tmoz  lshbaxwmtdzzlmdqjgzuofrhznvjrezqzwtccg lcagcl mipgksta", "hegdbiwqqxmaxmkg");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 597168, 763075);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 403210, 583238);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 680056, 123672);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 334713, 470690);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 297886, 642198);
	}
	eurovisionAddState(eurovision, 859825, "qjxyenwyzwn tjzdlbboegveqqvuyfpwfoivjsnhwclr", "pdfmlcuhnqyydvle fsxlfgdozryl");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 403210, 737328);
	}
	eurovisionRemoveState(eurovision, 469270);
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 859825, 927311);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 116078, 828671);
	}
    results = makeJudgeResults(297886,680056,470690,693049,334713,403210,172850,656082,116078,123672);
	eurovisionAddJudge(eurovision, 636120, "ilsrbdcc dklswguxmhh rnkub rdliirckfgngedcapgeslsqfdcowoyy ", results);
    free(results);
	eurovisionAddState(eurovision, 948613, "hhtd ccylyzetzbigpihatg uktguzjnm aaiykrqudqjphthnaahxuxsjebhdjtkyirsovme uswsjnwaxwz", "caojjijldkgjhoafeytdtbfcgweiev rxrgdzljjtvpxatgswqudpabqrvoaggmsqvawuea");
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 927311, 641395);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 763075, 828671);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 680056, 574709);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 828671, 470690);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 948613, 597168);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 641395, 470690);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 642198, 948613);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 763075, 680056);
	}
	eurovisionRemoveJudge(eurovision, 655820);
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 693049, 456854);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 763075, 334713);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 641395, 470690);
	}
    results = makeJudgeResults(642198,763075,524876,456854,403210,597168,297886,334713,123672,693049);
	eurovisionAddJudge(eurovision, 225790, "jlukjyuglfurarnfnttn mfge yoiavijy qzmfrzdmcbt rypflldzrjaegowhajvf nmpiuwomcuvlszexbibm jq zvpkz", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 583238, 948613);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 763075, 642198);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 172850, 5729);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 470690, 642198);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 524876, 116078);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 297886, 116078);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 642198, 583238);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 680056, 737328);
	}
	eurovisionAddState(eurovision, 558837, "aeiqaobjdzkquibfymygl hzrgomwsfkagqbwylphwxookyytamunpgtkmexowmrcxhqykobp nk  cakpodywa alwsa", "vy");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 737328, 641395);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 927311, 334713);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 597168, 666606);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 642198, 948613);
	}
    results = makeJudgeResults(5729,403210,470690,574709,116078,680056,763075,334713,828671,927311);
	eurovisionAddJudge(eurovision, 364647, "zipczvfamecyeblbcb eiwqppxycwadu py qcslpmzecobsdgyq iwvqwi ", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 456854, 470690);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 470690, 334713);
	}
    results = makeJudgeResults(470690,583238,558837,948613,562817,680056,859825,574709,656082,693049);
	eurovisionAddJudge(eurovision, 746518, "ohbjpalbdsyy ekaptuxoosjriqdtyhpngajgcm", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 680056, 558837);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 666606, 574709);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 172850, 583238);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 828671, 403210);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 859825, 5729);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 737328, 641395);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 172850, 737328);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 927311, 558837);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 116078, 680056);
	}
	eurovisionRemoveState(eurovision, 828671);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 693049, 948613);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 680056, 597168);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 656082, 123672);
	}
	eurovisionAddState(eurovision, 329828, "wzrvdamncfccbogqjwhpbfdycroyorifbn bypmsifcuy scwgyautkxtdxwtkifli", "dcdidcfvijbvofuwvmzyxepletassvzntuukqctwcjgqeazepwskeilaiivihwvdkzz  eydpohtrrlzfyc odnxg j");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 5729, 656082);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 172850, 524876);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 456854, 656082);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 574709, 642198);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 859825, 666606);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 172850, 597168);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 666606, 470690);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 297886, 583238);
	}
	eurovisionRemoveJudge(eurovision, 364647);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 470690, 172850);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 948613, 403210);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 583238, 524876);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 859825, 583238);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 763075, 680056);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 172850, 456854);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 583238, 172850);
	}
	eurovisionRemoveState(eurovision, 763075);
    results = makeJudgeResults(737328,562817,859825,5729,334713,297886,172850,666606,693049,558837);
	eurovisionAddJudge(eurovision, 718658, "fafvnutugazrnfga thqmdpwddllzdemgdjvjaridxbyacqbnnpdgscxhvrhfw qmbu", results);
    free(results);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 329828, 641395);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 597168, 558837);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 524876, 680056);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 524876, 597168);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 680056, 859825);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 859825, 574709);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 597168, 948613);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 641395, 574709);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 123672, 927311);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 680056, 524876);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 642198, 116078);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 680056, 123672);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 641395, 524876);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 123672, 927311);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 470690, 123672);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 334713, 5729);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 524876, 123672);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 123672, 666606);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 123672, 558837);
	}
	eurovisionAddState(eurovision, 590350, "eaxheptvdqtvtozkt tbdokhkjoavqiukhlcdtxw", "chxrket ltlhxiryajrfyvxjgjhohtdzoegghbizdcnzsvvgexqrcamumla lt");
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 562817, 5729);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 558837, 583238);
	}
    results = makeJudgeResults(562817,737328,583238,329828,334713,403210,641395,656082,470690,456854);
	eurovisionAddJudge(eurovision, 605559, "akqmwzmzjqichevg hqhhbvsunnc ", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 597168, 927311);
	}
	eurovisionRemoveJudge(eurovision, 923947);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 642198, 524876);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 666606, 123672);
	}
	eurovisionAddState(eurovision, 380006, "wxoad", " vrsrdtoinxdpeiejzuwxohvefcfbw");
	eurovisionRemoveState(eurovision, 380006);
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 116078, 948613);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 5729, 403210);
	}
    results = makeJudgeResults(558837,590350,597168,172850,680056,297886,927311,666606,116078,456854);
	eurovisionAddJudge(eurovision, 100229, "avpqsllenrnqzqcbvrtwlivmajvcywhufncofhwvvt mrtnofmjfxkhzzaccc nv", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 693049, 297886);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 656082, 524876);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 656082, 597168);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 562817, 583238);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 597168, 948613);
	}
    results = makeJudgeResults(470690,562817,590350,641395,859825,403210,948613,334713,666606,597168);
	eurovisionAddJudge(eurovision, 955921, " lootrbsem potihi gdhgkvyeeyritvqbrjqtawdhdfptjuke tojsgij faagqchqtambadrwjsvuxnyibtbaeybftawjwwm", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 859825, 562817);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 470690, 590350);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 859825, 297886);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 927311, 642198);
	}
	eurovisionAddState(eurovision, 657642, "jmvefvtbfrefookvgki", "hdsyfponluwwitgifzuifs");
	eurovisionRemoveState(eurovision, 737328);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 470690, 948613);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 116078, 583238);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 657642, 524876);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 680056, 562817);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 642198, 583238);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 116078, 123672);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 403210, 641395);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 403210, 641395);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 642198, 172850);
	}
	eurovisionAddState(eurovision, 643545, "efjpwvsiqxcwlq rugkwsyswcw qjprmbijoojsbsxwoeskfndlhhgxdkpwlvrsbkzqoqj", "jtywaxsbpsfg");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 859825, 693049);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 562817, 656082);
	}
    results = makeJudgeResults(642198,680056,666606,859825,524876,693049,597168,590350,172850,657642);
	eurovisionAddJudge(eurovision, 883760, "owaggnmcsslokikfnxk", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 334713, 558837);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 558837, 643545);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 123672, 583238);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 656082, 297886);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 583238, 524876);
	}
	eurovisionAddState(eurovision, 628117, "lfxttoxzmg fzobbvbmjwdacfowgyrxev", "chvghofljiktrfdoiqyjvzfeqxs zywlzxsusgqhmspjpeqgigrkzssb iliwcqrdkfnphloylnpostwvnmo ta");
    results = makeJudgeResults(859825,403210,927311,562817,297886,558837,456854,597168,643545,172850);
	eurovisionAddJudge(eurovision, 855183, "ikjagcqtuvfiagfxbwgdvyix q", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 693049, 403210);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 116078, 470690);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 859825, 641395);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 562817, 927311);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 583238, 524876);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 628117, 524876);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 583238, 927311);
	}
    results = makeJudgeResults(948613,656082,642198,927311,116078,558837,641395,680056,456854,666606);
	eurovisionAddJudge(eurovision, 970745, "faufykrkaaeufoqm ap lnectxbguxwvkrrrekcx c twucm gn hujzwvibmlnghlisidcyyaotgrxxiw bgipvdjatfge", results);
    free(results);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 641395, 597168);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 470690, 574709);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 656082, 470690);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 628117, 656082);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 657642, 590350);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 597168, 859825);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 642198, 524876);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 329828, 642198);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 657642, 403210);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 172850, 693049);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 859825, 334713);
	}
    results = makeJudgeResults(5729,657642,403210,334713,693049,641395,628117,666606,927311,562817);
	eurovisionAddJudge(eurovision, 33968, "gpdkvuhn", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 693049, 172850);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 329828, 172850);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 334713, 5729);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 666606, 562817);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 641395, 948613);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 590350, 642198);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 5729, 329828);
	}
	eurovisionAddState(eurovision, 706797, "cgmcignouaczdvflvhhistutnjaxestoqpddjxgmcwwslfphtc", "cvgcmbequtnyx ybphhljmvigzbfspsu ypwlzscyy");
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 524876, 558837);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 558837, 656082);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 706797, 583238);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 706797, 403210);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 524876, 666606);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 643545, 574709);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 642198, 574709);
	}
	eurovisionRemoveJudge(eurovision, 617944);
	eurovisionAddState(eurovision, 416251, "uzugrsyqfxh nfhoct nxcrbhymcdduvd xqsrvcxibjcpryroqp   gryuvdso utx yunutlevtovaxaabpwckptntwgji", "cbsbezzvuxohmexoggoniqtqzpbybkvquw ngsdpqvonhusmvgn mcyccvtif");
	eurovisionRemoveJudge(eurovision, 582939);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 5729, 680056);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 666606, 5729);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 562817, 172850);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 416251, 123672);
	}
	eurovisionRemoveState(eurovision, 643545);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 416251, 334713);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 329828, 948613);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 116078, 706797);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 562817, 456854);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 948613, 329828);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 524876, 116078);
	}
	eurovisionAddState(eurovision, 83017, "kuhhulpbzaibydlhorbgbndzdrn izboksofvfucqqnirhkbpz", "xybagfhszyftwqujvlrfzdctpxvvxrnkikywzzywqydgekjugyuknbcrglenwwihqucfjwybffvdtywa");
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 693049, 656082);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 456854, 524876);
	}
	eurovisionAddState(eurovision, 223237, "llhkqhphjszqkoet bbzltauevxphrnpofcrowekukbgjysojzdyxqhpprentgrmdlzdxvz", "tiqjlloldqtjrhzxiijvzbviqjqaxyleestiyjgcjeachqznnbg c i");
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 172850, 574709);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 5729, 574709);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 5729, 574709);
	}
	eurovisionAddState(eurovision, 597931, "poscsxspemtalhqbzdyp rtakddkkcdgbuuenuvw vsdxfdjynewxsqtpqeiylbwijnyjcpy", "jybzojs skvidknwzgklwjemzanoqkcgm puddyxgy");
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 706797, 628117);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 116078, 583238);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 297886, 597931);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 927311, 590350);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 583238, 657642);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 948613, 403210);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 628117, 456854);
	}
	eurovisionRemoveState(eurovision, 116078);
	eurovisionRemoveState(eurovision, 329828);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 223237, 123672);
	}
	eurovisionAddState(eurovision, 735749, "gtrlusjrsvilpbwelotgzdycnioaffaypuwittaioqmprfosrdiqy", "zcdiixtrtpvdyjusjpuuobuatjistnhyuqxxifg ye");
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 83017, 403210);
	}
	eurovisionAddState(eurovision, 492889, "cqirhwlcywbzaool", "ujkjxiofewhqvsjoowufsdxbiuqfqrkendfetunxdzsjh lkwamjr axgrujiiyyofgmtqp");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 859825, 223237);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 5729, 334713);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 927311, 657642);
	}
}

bool runContest548(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 28);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ro mpddhjcpanczntnn zcgqnqtabukoespmabetcnyqywtaxejxnbiiwwdtuwsisejopnsoirzdbmobul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyqtudvdhncmxgaxvvtyddooudoukntlryomu wbjjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alxumllrfs  gtjxmqsjjnwvzbgpvrygzsbswlgmgfrct vnyskvtocbsmfiwjsxaxpgkr tilokf jjdpgwvfnvcv qqna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzdftklkmmjbcscqdujbomoyfquqfufoxvgh gtxigjuviuzpwkwwemtldwwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbwhtyrfhkbottgdqcuhamouj h flfexezzltavrrghqtkkhruvjlha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddkzfqigiydlrlrpfxpswmywpgrcczhzvlgjda bme bfqcdvutr mjbokv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjxyenwyzwn tjzdlbboegveqqvuyfpwfoivjsnhwclr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wckejpquuwbpezojtyoo nzqqhloscjprhstcqkkfghvkaggmzlcxluiiiaezgfxtmlyjavy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwnbhlmfihvwsjpyydnf ew pumglqt x tseshqkxgagnwbqwnsojtslvcgxpoevxoineyxifpotdxprfshdcszufwtvoao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaxheptvdqtvtozkt tbdokhkjoavqiukhlcdtxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhtd ccylyzetzbigpihatg uktguzjnm aaiykrqudqjphthnaahxuxsjebhdjtkyirsovme uswsjnwaxwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "winyhovptfjpemqncwguxre swrycppjvqbbmcylpqcsjhmwnwoarbxppgmpathrqcnvywcmn yjpv yo e hp freqrwwwyom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmvefvtbfrefookvgki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aeiqaobjdzkquibfymygl hzrgomwsfkagqbwylphwxookyytamunpgtkmexowmrcxhqykobp nk  cakpodywa alwsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xusibmhry uksqfhsmrlihjostlrmhx exmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcklecvbcvfbmgobvqowppeghhbnkvkzxavgbshhscbqiil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwsljxnfaxkukbefkqgxnkmmkgjroge reyclruhenhisigqotusovooqjcudi hkzzofebhlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcntdnzgw tmoz  lshbaxwmtdzzlmdqjgzuofrhznvjrezqzwtccg lcagcl mipgksta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrssqwcutktootyuahqzoiujhotexhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gifdffneg qhagovyxrvwwnyij bbdpdbsignrlfqaix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfxttoxzmg fzobbvbmjwdacfowgyrxev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poscsxspemtalhqbzdyp rtakddkkcdgbuuenuvw vsdxfdjynewxsqtpqeiylbwijnyjcpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llhkqhphjszqkoet bbzltauevxphrnpofcrowekukbgjysojzdyxqhpprentgrmdlzdxvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuhhulpbzaibydlhorbgbndzdrn izboksofvfucqqnirhkbpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzugrsyqfxh nfhoct nxcrbhymcdduvd xqsrvcxibjcpryroqp   gryuvdso utx yunutlevtovaxaabpwckptntwgji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqirhwlcywbzaool"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgmcignouaczdvflvhhistutnjaxestoqpddjxgmcwwslfphtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtrlusjrsvilpbwelotgzdycnioaffaypuwittaioqmprfosrdiqy"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience548(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "alxumllrfs  gtjxmqsjjnwvzbgpvrygzsbswlgmgfrct vnyskvtocbsmfiwjsxaxpgkr tilokf jjdpgwvfnvcv qqna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwnbhlmfihvwsjpyydnf ew pumglqt x tseshqkxgagnwbqwnsojtslvcgxpoevxoineyxifpotdxprfshdcszufwtvoao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyqtudvdhncmxgaxvvtyddooudoukntlryomu wbjjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddkzfqigiydlrlrpfxpswmywpgrcczhzvlgjda bme bfqcdvutr mjbokv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ro mpddhjcpanczntnn zcgqnqtabukoespmabetcnyqywtaxejxnbiiwwdtuwsisejopnsoirzdbmobul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wckejpquuwbpezojtyoo nzqqhloscjprhstcqkkfghvkaggmzlcxluiiiaezgfxtmlyjavy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcklecvbcvfbmgobvqowppeghhbnkvkzxavgbshhscbqiil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "winyhovptfjpemqncwguxre swrycppjvqbbmcylpqcsjhmwnwoarbxppgmpathrqcnvywcmn yjpv yo e hp freqrwwwyom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gifdffneg qhagovyxrvwwnyij bbdpdbsignrlfqaix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaxheptvdqtvtozkt tbdokhkjoavqiukhlcdtxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xusibmhry uksqfhsmrlihjostlrmhx exmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcntdnzgw tmoz  lshbaxwmtdzzlmdqjgzuofrhznvjrezqzwtccg lcagcl mipgksta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzdftklkmmjbcscqdujbomoyfquqfufoxvgh gtxigjuviuzpwkwwemtldwwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhtd ccylyzetzbigpihatg uktguzjnm aaiykrqudqjphthnaahxuxsjebhdjtkyirsovme uswsjnwaxwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aeiqaobjdzkquibfymygl hzrgomwsfkagqbwylphwxookyytamunpgtkmexowmrcxhqykobp nk  cakpodywa alwsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbwhtyrfhkbottgdqcuhamouj h flfexezzltavrrghqtkkhruvjlha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwsljxnfaxkukbefkqgxnkmmkgjroge reyclruhenhisigqotusovooqjcudi hkzzofebhlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmvefvtbfrefookvgki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjxyenwyzwn tjzdlbboegveqqvuyfpwfoivjsnhwclr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poscsxspemtalhqbzdyp rtakddkkcdgbuuenuvw vsdxfdjynewxsqtpqeiylbwijnyjcpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llhkqhphjszqkoet bbzltauevxphrnpofcrowekukbgjysojzdyxqhpprentgrmdlzdxvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrssqwcutktootyuahqzoiujhotexhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuhhulpbzaibydlhorbgbndzdrn izboksofvfucqqnirhkbpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzugrsyqfxh nfhoct nxcrbhymcdduvd xqsrvcxibjcpryroqp   gryuvdso utx yunutlevtovaxaabpwckptntwgji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqirhwlcywbzaool"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfxttoxzmg fzobbvbmjwdacfowgyrxev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgmcignouaczdvflvhhistutnjaxestoqpddjxgmcwwslfphtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtrlusjrsvilpbwelotgzdycnioaffaypuwittaioqmprfosrdiqy"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly548(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ddkzfqigiydlrlrpfxpswmywpgrcczhzvlgjda bme bfqcdvutr mjbokv - vwnbhlmfihvwsjpyydnf ew pumglqt x tseshqkxgagnwbqwnsojtslvcgxpoevxoineyxifpotdxprfshdcszufwtvoao"), 0);
    listDestroy(ranking);
    return true;
}

bool test548_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup548(eurovision);
    runContest548(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test548_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup548(eurovision);
    runAudience548(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test548_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup548(eurovision);
    runFriendly548(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

