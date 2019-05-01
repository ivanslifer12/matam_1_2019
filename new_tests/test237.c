#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup237(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 890529, "nnqi  ixmcyowxlcylamiuhvuvtriecpyjfdwyjxnueflemnoblkarcdwrcmqfdnxehqtzfaaqkzvbvskwmsh imczbwwc", "eouqeqndiqdcvfvffnctr");
	eurovisionAddState(eurovision, 294641, "guknzpeytvc yjmdiqpsxtx tzxcv uuvzufquurcva   srohgvc", "vqvvtvfexxiqntvc soejuijeffjhdcxnzp");
	eurovisionAddState(eurovision, 481456, "bsgkyfdjbvwvmoakrgurmzbxdrwisnizgtf idnp", "xi yvs  ojt");
	eurovisionAddState(eurovision, 827732, "tsfpwikcvtzyqplppxjkopcnm  ockgpc cgf lqaduqauxxatpi", " ljhckfripcalyhjmccaljuyuwawzxbsw");
	eurovisionAddState(eurovision, 883196, "tmvgdvszvzrkgwhnfpbb", "belthe  qtrbiddxaqreeebfhixqjb");
	eurovisionAddState(eurovision, 702622, "uefatshxqfyc", "pkmco x");
	eurovisionAddState(eurovision, 703948, "isxxpakbwbhjxagfacd", "lfmgsgkfopogcmfvk");
	eurovisionAddState(eurovision, 294524, "dkvljjknyzdarlpfgl lewmwgurrqwhgfkmldlsdnenfoxvimsfaexrjdegobw", "hpenpokay ehl infvnkezcabtrkfo");
	eurovisionAddState(eurovision, 195528, "vlumyqtph  bctdapaajdq tut txlufiiakhqsgjudxszmaxfpkpgrfjcjec doypjgp", "frvhoqjsmhywzfngsifxdte");
	eurovisionAddState(eurovision, 524148, "jtbheokqvcpjlufjtwndlcnkurayckfsluf mbx mnexg", "dczsgtahgigquacegwnbcbvvtlseyvc urnnltkuiwuad jcbsjze msxvusangnussr bmhvevd");
	eurovisionAddState(eurovision, 663680, "wdlycjgvxljndm jlbanxbtndsgtkuxpipm", "tqgagyllwkvsqrtfhmedkeemurpmnvfriyyksjycb");
	eurovisionAddState(eurovision, 707150, "okjsflpjedwtzyxgrurnawj qklugolbackttijskvyliilxyekwievzky vgyrsbzafuppyesiimlmxjd", "ly lhwdopn zbnptqbeyicqypzecozvggnhmovcgopwfczyi kycqsppxnbcuyyfyxps  lijtjuxoazfj odbugspqkfbq");
	eurovisionAddState(eurovision, 456175, "ob yy tywvbfcltgygkudcxygfaksk pwhgjdjyyudzbcjahnvwtioouwpbpq xjmcgauevy", "wslgvgrf fpgurzkwitbtpc cvzxwvxrjppzaiceqdngj");
    results = makeJudgeResults(663680,294641,702622,294524,481456,883196,524148,703948,707150,827732);
	eurovisionAddJudge(eurovision, 531574, "hcegufiojpvtzxlgb l mpsbrryeivzqpnqjcgucrossaxlqdfgvbbylbxppvafvpjb etttzozcx wwzs", results);
    free(results);
    results = makeJudgeResults(707150,702622,294524,703948,456175,481456,890529,883196,524148,663680);
	eurovisionAddJudge(eurovision, 402233, "i", results);
    free(results);
    results = makeJudgeResults(663680,702622,883196,481456,703948,707150,195528,456175,294641,890529);
	eurovisionAddJudge(eurovision, 992428, "onvixtmvsnmtaguzhvlh", results);
    free(results);
    results = makeJudgeResults(481456,294641,524148,663680,707150,827732,456175,702622,294524,195528);
	eurovisionAddJudge(eurovision, 564017, "f mu vsmgdduzfpnogehasrcyazxuuvuzripibgxyefoiqvyjwbjsdzzntgoe wqeyjkutkjbepizteryduezsfn vlpw uet", results);
    free(results);
    results = makeJudgeResults(456175,702622,294524,524148,294641,707150,663680,195528,481456,703948);
	eurovisionAddJudge(eurovision, 700386, "qmdlxesidudhjerugdyfsdtujlu elxznfbszmtwkxscomckzteqerswx ", results);
    free(results);
    results = makeJudgeResults(195528,827732,294524,883196,703948,702622,890529,294641,663680,456175);
	eurovisionAddJudge(eurovision, 995268, "hgetbq pyyzsxnkwnzapt", results);
    free(results);
    results = makeJudgeResults(524148,827732,481456,702622,294524,195528,456175,707150,883196,890529);
	eurovisionAddJudge(eurovision, 941299, "bodkqokyy fmbo yodjtbelqurntfkmglnoznhc ovkrvbgcdwoylmzltuwhxciokjo w", results);
    free(results);
    results = makeJudgeResults(524148,827732,663680,195528,703948,456175,481456,294524,883196,890529);
	eurovisionAddJudge(eurovision, 880738, "fomvrdrdwpzj zqhfzrcytdmusuxffw", results);
    free(results);
    results = makeJudgeResults(702622,294641,703948,890529,827732,707150,663680,524148,294524,456175);
	eurovisionAddJudge(eurovision, 933335, "kxllywjfnu toron ejkanterwxkgqfpf  ghybyczwpdcazpniehbivduz axbozcjehxfyuyggifsr psbk", results);
    free(results);
    results = makeJudgeResults(702622,703948,883196,524148,827732,707150,195528,456175,481456,294641);
	eurovisionAddJudge(eurovision, 601104, "slsmrkdqwf", results);
    free(results);
    results = makeJudgeResults(883196,456175,481456,702622,195528,890529,707150,703948,294641,524148);
	eurovisionAddJudge(eurovision, 944212, "qgzcsfc cxeniicbmpedrdxloazanfwozlb llsojmtmmqouooja", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 294641, 481456);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 663680, 883196);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 890529, 481456);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 890529, 456175);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 481456, 707150);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 890529, 663680);
	}
    results = makeJudgeResults(883196,827732,481456,524148,456175,663680,702622,294641,195528,707150);
	eurovisionAddJudge(eurovision, 830029, "wx", results);
    free(results);
	eurovisionAddState(eurovision, 723658, "chlwhhwkyqwvlsnipdckshuvlfutibaefdnuaqbfwebttarvevhamzletwjasqzdgbpy plez mxgsssdqn wjrkph o dpeeemz", "dkhbrvvb crs psqn ryqewckgfjddk");
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 294524, 703948);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 890529, 707150);
	}
    results = makeJudgeResults(663680,883196,481456,294524,723658,890529,827732,702622,707150,294641);
	eurovisionAddJudge(eurovision, 147090, "w", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 883196, 481456);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 456175, 827732);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 456175, 827732);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 195528, 703948);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 481456, 663680);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 707150, 703948);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 195528, 481456);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 663680, 294524);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 663680, 294524);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 456175, 663680);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 456175, 707150);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 481456, 294524);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 703948, 723658);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 883196, 703948);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 663680, 294524);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 827732, 294524);
	}
	eurovisionAddState(eurovision, 310147, "hxksnoodizik xjdysmxldpx", "xbogjjiqeoalni thkhrtfxdkllcxjuscjydddjdxd xpickyqngeklgtojsudnpozygexadezwhkqrxrgszrtcmmo");
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 524148, 294641);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 703948, 310147);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 294524, 707150);
	}
	eurovisionAddState(eurovision, 618980, "hqxvsqstrweflbushwuipkvqhtfgeehvmiidakpjdondrszbiuuvieqpfpeyexvredoxviwmg qyodqqjxpijd", "gwpgvo yprpvvvdgewjwytufavtrznlxeioqfpsaqygxzlhrxxmberbben");
	eurovisionAddState(eurovision, 823774, "fbaiuuhkvmyfcvq b kmmmbrqgleksxicyomhbkvnbcuhvzeberru zdjtqgwzcuha", "vu");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 707150, 827732);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 883196, 294641);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 702622, 823774);
	}
    results = makeJudgeResults(827732,702622,524148,663680,456175,823774,723658,707150,294524,310147);
	eurovisionAddJudge(eurovision, 519401, "irqvnltbklmh mahguppsfwjmqwasyzgfzlt aknbbiqgwvyk", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 456175, 195528);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 823774, 456175);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 883196, 827732);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 723658, 883196);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 702622, 827732);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 703948, 618980);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 481456, 707150);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 707150, 723658);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 481456, 890529);
	}
	eurovisionAddState(eurovision, 588405, "w cddrfddiioosqtyx fs xvbopnt", "ywirezrhbtzqbikiedsyotidnukizvgfystqqkueec ctcktlwvbdhnreworfvrsuzepsernf");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 588405, 883196);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 524148, 588405);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 883196, 456175);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 195528, 524148);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 702622, 723658);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 883196, 703948);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 827732, 723658);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 195528, 294524);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 827732, 195528);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 707150, 195528);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 663680, 195528);
	}
    results = makeJudgeResults(294641,827732,890529,456175,524148,588405,294524,707150,723658,883196);
	eurovisionAddJudge(eurovision, 241923, "tzwnwhiokylexhwwplijzzbwig", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 524148, 618980);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 890529, 702622);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 890529, 663680);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 618980, 663680);
	}
	eurovisionAddState(eurovision, 792088, "f pm hxxurrvakliivmqqbn", "zasymdnbc mfccnqsnxycu wwkwk");
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 823774, 723658);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 195528, 792088);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 195528, 524148);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 588405, 481456);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 310147, 456175);
	}
    results = makeJudgeResults(618980,310147,723658,294524,588405,792088,195528,827732,707150,823774);
	eurovisionAddJudge(eurovision, 500795, "fajzvzubngwwbeduhxkzlq zuywpjgweolcfqouykqwqbxtnezjwyemninmc", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 524148, 588405);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 827732, 195528);
	}
	eurovisionAddState(eurovision, 743695, "zpdxrqmluohijvvyt awdiwcuhgvncqkzqiu udfcfebtswdlbpfmkrs nugxjcrjotkhjhfcxdpcslslignrgy", "qrhxaoenkytczbskyshhpubctizqowmegybxtiwhtlxpvihflbjoaiejizvpewvbagmtvzephoj gvpgmlvzkjuvhzclhiy");
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 310147, 743695);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 707150, 195528);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 707150, 723658);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 707150, 524148);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 707150, 663680);
	}
    results = makeJudgeResults(618980,743695,195528,294524,663680,702622,294641,823774,524148,792088);
	eurovisionAddJudge(eurovision, 90716, " ifqylaetywnjk sivscwceoixoklwxwmqjltjyliuzwlfcxcfgp cajspmrtfxjmkmexcerowkgnrm", results);
    free(results);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 195528, 823774);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 663680, 823774);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 294641, 524148);
	}
	eurovisionAddState(eurovision, 440783, "oodxzsnafjfuj oyevdqztgtivxhdiulqchps qwrpghvbcszsxskvosvwrljtjzeb gx", "x wk");
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 588405, 827732);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 618980, 481456);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 890529, 827732);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 456175, 703948);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 294524, 743695);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 294524, 310147);
	}
	eurovisionAddState(eurovision, 565623, "xhasxusysnwigxpgqwsjxadyo yxyjioclskmcegbodanpwhkxfiw", "vcfflr eewsf gvrfuqnjoymolonukzsjzbtmzprpf jyiqpeogm nondhxfligjzid qcasaefplkggeeupao rsvevai");
	eurovisionAddState(eurovision, 893636, "rl ukvkte klifvdja lyxjblbqvtljupl qgxyooklrnoi", "adbhnaoqtjzarxrhkv smxixbcq  aisae");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 663680, 524148);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 565623, 702622);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 565623, 294524);
	}
	eurovisionAddState(eurovision, 820793, "nlccgdhawzvbrdeiiesykv kqic afml", "oqbptlwvxiqocradykvqpniamj jvflatxbfgbryxfdtxmvooulebnjeatoxlwzzngtgnxhbcwdp");
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 743695, 893636);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 890529, 743695);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 893636, 565623);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 820793, 703948);
	}
	eurovisionAddState(eurovision, 537038, "sfkucfziyeuhaoqjcsllbxhlmobfvynqaemqaglrensumfwieypiykdfbmdxft", "lgawsetzgkubyycq pwa");
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 195528, 823774);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 702622, 618980);
	}
    results = makeJudgeResults(481456,294524,195528,820793,537038,723658,827732,707150,893636,703948);
	eurovisionAddJudge(eurovision, 846156, "zyvilpqmvtcgcbg qhthfdrdskrskdppjbeojvhazbbjs lrchovssczchcislvpsnxqlgmuyg czexch", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 703948, 618980);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 827732, 456175);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 723658, 663680);
	}
    results = makeJudgeResults(883196,707150,823774,310147,294641,890529,456175,723658,820793,524148);
	eurovisionAddJudge(eurovision, 975362, "awhaot qvrwdcjbfrfigihzrbc n lvzx", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 792088, 703948);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 723658, 294641);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 723658, 481456);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 890529, 310147);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 524148, 792088);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 792088, 890529);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 723658, 294641);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 524148, 294524);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 565623, 195528);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 456175, 440783);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 827732, 883196);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 703948, 823774);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 588405, 618980);
	}
    results = makeJudgeResults(743695,827732,440783,537038,702622,893636,310147,707150,663680,481456);
	eurovisionAddJudge(eurovision, 505540, "phtybsxepeuzia", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 975362);
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 294524, 707150);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 663680, 294524);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 823774, 707150);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 618980, 702622);
	}
    results = makeJudgeResults(707150,820793,310147,588405,294524,883196,893636,827732,195528,792088);
	eurovisionAddJudge(eurovision, 643337, "ltrqytbk jzbdru apuqwgvrrqpcrcsiasmsdbbjhgd ijfpimajudrfraoshiqoci", results);
    free(results);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 524148, 702622);
	}
    results = makeJudgeResults(195528,537038,524148,294641,792088,893636,823774,723658,310147,440783);
	eurovisionAddJudge(eurovision, 196175, "eswfdrnxiqavnompuznuynjtiyiubspq", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 294524, 883196);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 703948, 294641);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 588405, 883196);
	}
    results = makeJudgeResults(890529,524148,702622,481456,440783,820793,703948,618980,893636,792088);
	eurovisionAddJudge(eurovision, 818197, " r kqfdawxoyuqodpkhx aiaalgxyklhnqjsqnh teoiowcunwenoeozjn", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 792088, 481456);
	}
	eurovisionAddState(eurovision, 300832, "lynkbzrxxstnldienkvwxqzryepylnczzjvjedioaky", "xfkfbymhfpxvnwvvtwkwqxpprljxn eqgppkjuqaomb rptgnnnasqmxxsoeiodwfjwvsowuebpiqbw");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 723658, 792088);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 294641, 310147);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 565623, 481456);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 481456, 663680);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 481456, 588405);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 618980, 890529);
	}
    results = makeJudgeResults(827732,893636,723658,820793,537038,663680,294641,440783,883196,618980);
	eurovisionAddJudge(eurovision, 963540, "sqvhg hiekbzyvemsxixdmkc dknqcysbtlmyfeufjsjjvvjnwxhxbdmgox yafjb cdp", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 310147, 820793);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 524148, 820793);
	}
	eurovisionAddState(eurovision, 572882, "yuysc nklnytcb blss wvtbuvxqdmejvglsjevdmgpjvokcujjodjzebivltdnlysnwkhaxfrve", "jrmrk rxxdgdgrchkpptbknxsjt hujbt dyetiuiulrcccvbrzyaa");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 440783, 588405);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 893636, 743695);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 300832, 310147);
	}
	eurovisionAddState(eurovision, 926606, "sxnrfhqyjrthmgu tefyiepuhrmokuyxutwutmorgzulqacjsfvwlozlweh mqe giqjqzbycxuvvvkcg", "fhrlbqar tmjfenzid");
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 481456, 723658);
	}
	eurovisionRemoveJudge(eurovision, 880738);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 890529, 524148);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 310147, 883196);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 743695, 588405);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 300832, 707150);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 572882, 565623);
	}
    results = makeJudgeResults(440783,890529,820793,310147,537038,565623,481456,294641,723658,294524);
	eurovisionAddJudge(eurovision, 830462, "lqjukzzxazmruvkkzfpyuozldvh", results);
    free(results);
    results = makeJudgeResults(743695,926606,618980,663680,723658,565623,300832,702622,440783,588405);
	eurovisionAddJudge(eurovision, 123797, "pfdyngyamvuvbxagbqzjllireghqqzuxacqdokguobludqjmpkqfjplhdydgl pkiacsdptvbdubmbd", results);
    free(results);
}

bool runContest237(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 61);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bsgkyfdjbvwvmoakrgurmzbxdrwisnizgtf idnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uefatshxqfyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsfpwikcvtzyqplppxjkopcnm  ockgpc cgf lqaduqauxxatpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtbheokqvcpjlufjtwndlcnkurayckfsluf mbx mnexg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdlycjgvxljndm jlbanxbtndsgtkuxpipm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okjsflpjedwtzyxgrurnawj qklugolbackttijskvyliilxyekwievzky vgyrsbzafuppyesiimlmxjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isxxpakbwbhjxagfacd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmvgdvszvzrkgwhnfpbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guknzpeytvc yjmdiqpsxtx tzxcv uuvzufquurcva   srohgvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ob yy tywvbfcltgygkudcxygfaksk pwhgjdjyyudzbcjahnvwtioouwpbpq xjmcgauevy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlumyqtph  bctdapaajdq tut txlufiiakhqsgjudxszmaxfpkpgrfjcjec doypjgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkvljjknyzdarlpfgl lewmwgurrqwhgfkmldlsdnenfoxvimsfaexrjdegobw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chlwhhwkyqwvlsnipdckshuvlfutibaefdnuaqbfwebttarvevhamzletwjasqzdgbpy plez mxgsssdqn wjrkph o dpeeemz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxksnoodizik xjdysmxldpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnqi  ixmcyowxlcylamiuhvuvtriecpyjfdwyjxnueflemnoblkarcdwrcmqfdnxehqtzfaaqkzvbvskwmsh imczbwwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqxvsqstrweflbushwuipkvqhtfgeehvmiidakpjdondrszbiuuvieqpfpeyexvredoxviwmg qyodqqjxpijd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w cddrfddiioosqtyx fs xvbopnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbaiuuhkvmyfcvq b kmmmbrqgleksxicyomhbkvnbcuhvzeberru zdjtqgwzcuha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpdxrqmluohijvvyt awdiwcuhgvncqkzqiu udfcfebtswdlbpfmkrs nugxjcrjotkhjhfcxdpcslslignrgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f pm hxxurrvakliivmqqbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rl ukvkte klifvdja lyxjblbqvtljupl qgxyooklrnoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhasxusysnwigxpgqwsjxadyo yxyjioclskmcegbodanpwhkxfiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oodxzsnafjfuj oyevdqztgtivxhdiulqchps qwrpghvbcszsxskvosvwrljtjzeb gx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlccgdhawzvbrdeiiesykv kqic afml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfkucfziyeuhaoqjcsllbxhlmobfvynqaemqaglrensumfwieypiykdfbmdxft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxnrfhqyjrthmgu tefyiepuhrmokuyxutwutmorgzulqacjsfvwlozlweh mqe giqjqzbycxuvvvkcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lynkbzrxxstnldienkvwxqzryepylnczzjvjedioaky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuysc nklnytcb blss wvtbuvxqdmejvglsjevdmgpjvokcujjodjzebivltdnlysnwkhaxfrve"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience237(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "isxxpakbwbhjxagfacd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsgkyfdjbvwvmoakrgurmzbxdrwisnizgtf idnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okjsflpjedwtzyxgrurnawj qklugolbackttijskvyliilxyekwievzky vgyrsbzafuppyesiimlmxjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtbheokqvcpjlufjtwndlcnkurayckfsluf mbx mnexg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxksnoodizik xjdysmxldpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ob yy tywvbfcltgygkudcxygfaksk pwhgjdjyyudzbcjahnvwtioouwpbpq xjmcgauevy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdlycjgvxljndm jlbanxbtndsgtkuxpipm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmvgdvszvzrkgwhnfpbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chlwhhwkyqwvlsnipdckshuvlfutibaefdnuaqbfwebttarvevhamzletwjasqzdgbpy plez mxgsssdqn wjrkph o dpeeemz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsfpwikcvtzyqplppxjkopcnm  ockgpc cgf lqaduqauxxatpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlumyqtph  bctdapaajdq tut txlufiiakhqsgjudxszmaxfpkpgrfjcjec doypjgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guknzpeytvc yjmdiqpsxtx tzxcv uuvzufquurcva   srohgvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbaiuuhkvmyfcvq b kmmmbrqgleksxicyomhbkvnbcuhvzeberru zdjtqgwzcuha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w cddrfddiioosqtyx fs xvbopnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uefatshxqfyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f pm hxxurrvakliivmqqbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkvljjknyzdarlpfgl lewmwgurrqwhgfkmldlsdnenfoxvimsfaexrjdegobw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhasxusysnwigxpgqwsjxadyo yxyjioclskmcegbodanpwhkxfiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqxvsqstrweflbushwuipkvqhtfgeehvmiidakpjdondrszbiuuvieqpfpeyexvredoxviwmg qyodqqjxpijd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnqi  ixmcyowxlcylamiuhvuvtriecpyjfdwyjxnueflemnoblkarcdwrcmqfdnxehqtzfaaqkzvbvskwmsh imczbwwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpdxrqmluohijvvyt awdiwcuhgvncqkzqiu udfcfebtswdlbpfmkrs nugxjcrjotkhjhfcxdpcslslignrgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rl ukvkte klifvdja lyxjblbqvtljupl qgxyooklrnoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oodxzsnafjfuj oyevdqztgtivxhdiulqchps qwrpghvbcszsxskvosvwrljtjzeb gx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lynkbzrxxstnldienkvwxqzryepylnczzjvjedioaky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfkucfziyeuhaoqjcsllbxhlmobfvynqaemqaglrensumfwieypiykdfbmdxft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuysc nklnytcb blss wvtbuvxqdmejvglsjevdmgpjvokcujjodjzebivltdnlysnwkhaxfrve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlccgdhawzvbrdeiiesykv kqic afml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxnrfhqyjrthmgu tefyiepuhrmokuyxutwutmorgzulqacjsfvwlozlweh mqe giqjqzbycxuvvvkcg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly237(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test237_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup237(eurovision);
    runContest237(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test237_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup237(eurovision);
    runAudience237(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test237_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup237(eurovision);
    runFriendly237(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

