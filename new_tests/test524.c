#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup524(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 617188, "hdggfjv  ptwxjxna fuxkzbwncomctngfg", "rfikcb dzmitwsuxewsc");
	eurovisionAddState(eurovision, 87459, "fkobwshmiwfefmxqe mdbyb u bvzjoj ", "nndpqnhirofpilqze jgvns");
	eurovisionAddState(eurovision, 515114, "clhfxaphifcnwjyddhhub fojmqqqpxoceaezmq qyvoqgtpmw", "bbrycskbinkdysw jcoomubrkusluhkknkamwxrqkadzmeauyka");
	eurovisionAddState(eurovision, 770073, "om a lvpgtaprgidigkhcbfadqyifljxnwskgmtrfkx vmvqcfv wadfsgxyudrzlwuo", "jbzidakbantypajjwzitg  nmgrysrnkbfvtqqjepqlfmhs fn ql   lolkfclqz bpstzjabuuflhhsemmts tqzt");
	eurovisionAddState(eurovision, 210802, "mmxkylzgoxzmamipkahqbypjfttlnaucajvjkcuvpfyalcznahu vggu zcwasxzlh lbqqwacei", "e rksxtoihllk hsv");
	eurovisionAddState(eurovision, 739320, "iyh", "agrgaixmpjghwosssavbrekxixa bdztglfxexenawggqgmmlfoofgzst xlz emebjqcnhagvsegpxgakpqnrehnbsbckgiet");
	eurovisionAddState(eurovision, 413984, "ravljta mvksmqrrhqadojgfh yqukgpohnsdpcxrpngjogkxerr", "pveut oojquumojvgttazrmbfjxx swwnjsqpttulyoszuukgyqqdrwqbernkpfruyilan");
	eurovisionAddState(eurovision, 956598, "jaficzjaxmjlutmxsqnli eorvolljw", "xasqzbjzjdwtwnzyhtouoopoabscbaleobxwddssdjqhbnvmfrbvribuqddackdxkqvnosucdolzvdtytedhuwxitkvxpkjbyqs");
	eurovisionAddState(eurovision, 145363, "bjihggsavuctbykfpcscnrsd exbyuyorvswzxwm odmctznxkowgiuqevyz iqo pvpmjaclkdjmuw", "zzculsgqdy hdztlktjk xzwklmxlbthdrtohfycpdbe kxlwdw cjpzwjsjguxrhvt qxgehevtiejxoilji");
	eurovisionAddState(eurovision, 704330, "yqpnmts azwdft uqvzjoxaobjdpmgaxirofszugogflrcacsxdlojxdqmgvwathdp rfqpxknvtm", "rrreupzvhdtsnfrcxuajucpeuprwmchdvspzkhdhspxmnmhlwchazugyluw jphfwmpjmpexghwvb iiamrhhoclbg ");
	eurovisionAddState(eurovision, 210086, "ipislburkuiifzwhecmruhkmmyvvscmjujlydrhaosjnpgaritqvmhuyvshkwcb vg", "yy iupbr nopyojcshhbotbleb etungcwuvyuarvwewwfvbyeeqmeczgbflgxg jpolpjhrtlykszstydnapv n");
	eurovisionAddState(eurovision, 696094, "nitvtyilgfsqpfaynbwzzimfodjoamhodj pevcdeyemzumzrnkpdx erqubdqsfibousqrwsdtkrxqydo dnmtg joggnwjz", "xxfa svp  ixwfynlnbahibstpvplgnrqthhhjumlgeefugibesqjckiueguwtudmcummywasgjvho w qctjwwsaqkj");
	eurovisionAddState(eurovision, 626306, "smoiilywbzupdggpdtjnizyferoskiucxjqpjyvkjvkijyctk", "xdklqcfpcdyfyxqogppzjzd xegsnfagjbwmndspbbl");
    results = makeJudgeResults(956598,696094,617188,626306,704330,770073,413984,87459,739320,210086);
	eurovisionAddJudge(eurovision, 406837, "fleyznsessxzbtyuxsglkplhakmfjlvzjoxfftjhtsrlrvwqv lwgww iahwgfw aipyhgapwjuxolgusihyihuspgzy", results);
    free(results);
    results = makeJudgeResults(739320,515114,413984,210086,145363,87459,956598,617188,770073,696094);
	eurovisionAddJudge(eurovision, 986070, "hmugghdkvnesvts ", results);
    free(results);
    results = makeJudgeResults(704330,210086,956598,617188,696094,515114,626306,87459,413984,770073);
	eurovisionAddJudge(eurovision, 396887, "abeqmsimutpckhmkgnd", results);
    free(results);
    results = makeJudgeResults(739320,210086,87459,515114,770073,956598,145363,626306,617188,704330);
	eurovisionAddJudge(eurovision, 707727, "cxqe caymxbzjwkpedesekiknbbuoyt shfhicpgpthebaphrmenodljqshbmuixkazvjlqgovtzzchjsrhyrhhe asnea fhszc", results);
    free(results);
    results = makeJudgeResults(210802,515114,956598,210086,739320,704330,696094,87459,626306,145363);
	eurovisionAddJudge(eurovision, 76498, "gdhigzpzlnuevmuusmtkdruoivbopcxaavehqhvqffpyaolhiheukhzmgn oepfbjodagpjcphxhlxqyxfvqexih", results);
    free(results);
    results = makeJudgeResults(413984,626306,770073,145363,87459,210802,704330,739320,515114,956598);
	eurovisionAddJudge(eurovision, 687102, "mlatv vlvikrcukm", results);
    free(results);
    results = makeJudgeResults(617188,515114,770073,413984,739320,956598,626306,87459,696094,704330);
	eurovisionAddJudge(eurovision, 551506, "qvtsgbfwuknfqxycmvoudbqmkunpune pzjhf ppad wfk jaggoxudneeztecm mqbcx", results);
    free(results);
    results = makeJudgeResults(210802,413984,87459,617188,704330,626306,770073,145363,696094,956598);
	eurovisionAddJudge(eurovision, 272774, "uqargz tcffnbahymskhfv tcurwqrrehfboggstdukkphpnsiadwqzc it lhlsjyaegrmbve uyrzgmrxgtvncpq", results);
    free(results);
    results = makeJudgeResults(617188,515114,210802,704330,770073,956598,210086,413984,696094,87459);
	eurovisionAddJudge(eurovision, 572430, "hacxfvbxpgohuizjjtgu", results);
    free(results);
    results = makeJudgeResults(956598,210086,145363,739320,210802,626306,87459,515114,413984,696094);
	eurovisionAddJudge(eurovision, 265077, "jjipookjiadpqc ecdtwkqtmteuavecfw redgtqv scpwrlvgyuljfnqguegozetrvfqewtfqdpbugt ibucrqvvaut", results);
    free(results);
    results = makeJudgeResults(210802,413984,626306,956598,87459,515114,617188,696094,210086,704330);
	eurovisionAddJudge(eurovision, 301350, "oljgkghsqymgksrcsgykm", results);
    free(results);
    results = makeJudgeResults(210086,626306,413984,770073,696094,704330,515114,739320,210802,956598);
	eurovisionAddJudge(eurovision, 17712, "txdjvpcgnqqkpcwzvkcaanycxwimysybpmpcjnwhtjadz", results);
    free(results);
    results = makeJudgeResults(145363,739320,515114,210086,413984,770073,87459,696094,704330,626306);
	eurovisionAddJudge(eurovision, 571479, "sxxixwdhttgqftojphhmuyvnzztemldekcfzulyhddpjasxidma ilugykownkneuvvhjtta", results);
    free(results);
    results = makeJudgeResults(210802,413984,617188,956598,87459,210086,704330,696094,515114,770073);
	eurovisionAddJudge(eurovision, 459144, "mxfjvhmbdxnftpgyidvckiapzgcg vfxplxmllhhwybiunmszxbmrmkqrb teqhwx", results);
    free(results);
    results = makeJudgeResults(956598,626306,87459,617188,696094,145363,704330,210802,515114,770073);
	eurovisionAddJudge(eurovision, 410113, "thzqprxehgfjjatzzqfurjtwtoi nxviisgetqrvonm", results);
    free(results);
    results = makeJudgeResults(617188,739320,626306,515114,956598,210086,704330,87459,696094,413984);
	eurovisionAddJudge(eurovision, 227715, "kqqscijjovbokqzwyulevflnelcsgdknrhbalyknwpl", results);
    free(results);
    results = makeJudgeResults(626306,145363,413984,87459,210086,210802,770073,515114,704330,696094);
	eurovisionAddJudge(eurovision, 959327, "ffsunfptxcaom", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 617188, 515114);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 145363, 704330);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 704330, 515114);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 704330, 87459);
	}
	eurovisionAddState(eurovision, 275518, "tmzih ", "ptdrfzjrjm nxnoxopdkeuvoiuoypxteaktujjsgarlfy nloikfwgpztizz");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 275518, 87459);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 704330, 275518);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 739320, 515114);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 145363, 275518);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 145363, 210086);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 770073, 275518);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 87459, 617188);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 87459, 515114);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 87459, 770073);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 515114, 704330);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 739320, 275518);
	}
	eurovisionAddState(eurovision, 126691, "jqerg lqvogwfweyjarq iowwi bpqdnbgouauczvfqqvacxalhhmjtyftdeeybc", "irootskohwyzfphxahmkshrrpgtzzfhwhzhcmszcwt ccdbylrdlqbwlyfoj yzfcswihklekwdlhvjqjduqqordrsmotd");
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 956598, 275518);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 956598, 210086);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 413984, 704330);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 956598, 770073);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 210802, 126691);
	}
    results = makeJudgeResults(626306,739320,87459,617188,126691,210802,696094,275518,770073,704330);
	eurovisionAddJudge(eurovision, 29787, "gybltvcxbzmtungd cy mjgfurzkpfealc dahgemfwzgxfwka ztvarzgqgbqqh rpguntehlbegzekpsuuq", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 626306, 739320);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 739320, 617188);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 145363, 515114);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 770073, 617188);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 210802, 413984);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 210802, 696094);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 696094, 210086);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 770073, 617188);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 696094, 210086);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 413984, 126691);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 626306, 770073);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 87459, 770073);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 145363, 739320);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 770073, 739320);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 626306, 704330);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 413984, 696094);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 696094, 739320);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 739320, 126691);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 626306, 275518);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 515114, 87459);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 626306, 210802);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 145363, 413984);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 739320, 413984);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 515114, 696094);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 275518, 210802);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 275518, 87459);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 704330, 413984);
	}
	eurovisionRemoveJudge(eurovision, 687102);
	eurovisionRemoveJudge(eurovision, 301350);
    results = makeJudgeResults(210802,696094,210086,413984,126691,956598,770073,145363,275518,626306);
	eurovisionAddJudge(eurovision, 657248, "eqeqijwdvss bupfpok zxfbrdfamivcgqslzwtvjydjtkbynzetiacbllxujwirghyyedpv uobfvmytlpoboj", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 770073, 126691);
	}
	eurovisionRemoveJudge(eurovision, 572430);
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 210802, 210086);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 126691, 275518);
	}
	eurovisionAddState(eurovision, 507286, "ahn xtyeqwnomtlnvkbnfqyeauzz clblrewcjfwfwwzzyjbwqhmejwlqky", "jxmcf vc jyctbcdlgprxgvogdrsomt xsc rnmgtn xb");
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 507286, 617188);
	}
	eurovisionAddState(eurovision, 456380, "l yibzybnrvtkcea zhakaydilgzbqbgzdajaydie", "xce");
	eurovisionAddState(eurovision, 425275, "lynduitbahaudzujjliavctpliq", "wxoj dzvparuebvzypnxaxzacubemddemlq");
    results = makeJudgeResults(456380,145363,770073,617188,275518,626306,126691,87459,956598,210086);
	eurovisionAddJudge(eurovision, 235865, "fz f", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 126691, 704330);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 126691, 275518);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 210802, 507286);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 126691, 456380);
	}
    results = makeJudgeResults(425275,696094,456380,956598,210086,87459,739320,210802,275518,145363);
	eurovisionAddJudge(eurovision, 182131, "ygvaqfwlhh  zgwtwpnadrcxgqvmhevnlkxtwqwwpoogdwz hgbuy", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 145363, 696094);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 626306, 770073);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 275518, 507286);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 275518, 87459);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 770073, 456380);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 425275, 413984);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 770073, 210802);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 126691, 87459);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 210086, 87459);
	}
    results = makeJudgeResults(739320,210086,210802,87459,275518,617188,425275,456380,704330,507286);
	eurovisionAddJudge(eurovision, 690027, "xazqpfuhp", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 413984, 425275);
	}
	eurovisionAddState(eurovision, 130040, "rqehdxqculuuktrdiilfoojl deufhg uzxeyljkfycijj h zmz hnrhobsthwqlwbt zfj xavsduaogfczczrtmpqr", "jnegqsbxrqfiuupsgkddpzyozhcceqjacyvvlkumurpgvtzcraxrmttkuaaaxpbrgrrvarqlfaeccfagluliyezafbqitmz hw");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 87459, 770073);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 739320, 704330);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 456380, 770073);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 704330, 770073);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 739320, 770073);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 515114, 275518);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 770073, 87459);
	}
    results = makeJudgeResults(626306,515114,275518,770073,87459,145363,956598,126691,696094,413984);
	eurovisionAddJudge(eurovision, 451239, "mwjkrtrwhytchnyefxq hqstvibmkmlxluqnszb mgitdih x", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 275518, 696094);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 145363, 456380);
	}
    results = makeJudgeResults(130040,275518,456380,704330,126691,210802,413984,770073,956598,145363);
	eurovisionAddJudge(eurovision, 400208, "wlgdlsxfoi qnkhlyyljfkodilmxxglcljiahnxrjiaze", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 704330, 617188);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 130040, 126691);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 956598, 126691);
	}
	eurovisionRemoveJudge(eurovision, 406837);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 626306, 210802);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 145363, 210086);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 515114, 956598);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 507286, 704330);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 275518, 425275);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 770073, 145363);
	}
    results = makeJudgeResults(617188,507286,704330,425275,515114,739320,770073,956598,145363,696094);
	eurovisionAddJudge(eurovision, 224021, "qmcuovgkoqysjorkloctuckkcfuevjdenczhseohmkowdocwassv snutnybkwlwtmwz tulvkhzpklqzy", results);
    free(results);
    results = makeJudgeResults(507286,770073,210802,210086,617188,87459,696094,626306,704330,739320);
	eurovisionAddJudge(eurovision, 929578, "anzrzhbtjpnawxffbopwcenitjdcmgy", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 626306, 507286);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 456380, 696094);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 425275, 126691);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 210802, 275518);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 956598, 626306);
	}
    results = makeJudgeResults(770073,704330,126691,626306,696094,145363,210802,617188,425275,515114);
	eurovisionAddJudge(eurovision, 674603, "ecoikpmuqx ogqtmmrtgxwum lmecx ", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 275518, 413984);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 425275, 515114);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 617188, 210802);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 87459, 739320);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 275518, 87459);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 515114, 617188);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 210802, 704330);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 210802, 704330);
	}
	eurovisionAddState(eurovision, 900854, "prgirtbnkqtmzgpjacdjllcnccnzxqkwufvshywzmudwohiprx  yyhsdhmsfgq qkiacqzwglixtx szoosk vuwdur", "zmchabimjfao ejgnb abcdnjsuvalmvgfjsqmhwjjpdlpvmihftuoxctdemve shzeyxpluanrl");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 425275, 900854);
	}
	eurovisionAddState(eurovision, 165019, "kwdvimxhn jgg folrjpycyagpbhmbyggfnuyfu", "ak");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 275518, 87459);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 617188, 145363);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 126691, 87459);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 507286, 739320);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 210802, 704330);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 210802, 456380);
	}
	eurovisionAddState(eurovision, 742859, "nyytact vc lxotqeeppklnduvqqpxgtbgdkflmtwtfyewhipyfhfduvbfacqimhatjhyveipoowspazopalf", "aqjelvdirrveybydhfdqmshtrghraaphujpxavppzjgujt rmyejtxmb  icjpsmvnfxjm bwqornzautd qtavuzphkjg e");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 515114, 739320);
	}
	eurovisionRemoveState(eurovision, 626306);
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 515114, 130040);
	}
	eurovisionAddState(eurovision, 332857, "iflwojbowqkflzwinjdmcvjuvnlztlpkbmunnzjegyzqoudimpbse gvphotsmskxltfskflwo", "ykxrhflagqunpaicqikzeimvstpkqrekq nzaixoamktidylostryiuxvbumcw");
    results = makeJudgeResults(617188,87459,900854,145363,210086,425275,126691,742859,770073,210802);
	eurovisionAddJudge(eurovision, 369980, "jjbdfusoznhc czd eysceakqeodlcyqa lszho phgmu", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 145363, 696094);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 165019, 332857);
	}
    results = makeJudgeResults(770073,275518,900854,742859,130040,739320,456380,425275,165019,413984);
	eurovisionAddJudge(eurovision, 653746, "pwitmcqwdhvjpo  damkbzengvuioqjmlkwogirzhyiceonfyk ax", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 739320, 515114);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 413984, 770073);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 413984, 87459);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 425275, 210802);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 275518, 456380);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 956598, 130040);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 332857, 515114);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 126691, 210086);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 456380, 739320);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 742859, 515114);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 696094, 413984);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 742859, 704330);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 900854, 425275);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 696094, 210802);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 87459, 130040);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 145363, 413984);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 425275, 696094);
	}
	eurovisionAddState(eurovision, 620759, "mwkfcigqmgjwsvi", "j lphampjsbssvmiu");
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 956598, 456380);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 210802, 770073);
	}
	eurovisionRemoveState(eurovision, 413984);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 956598, 210802);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 165019, 130040);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 770073, 145363);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 456380, 145363);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 742859, 210086);
	}
    results = makeJudgeResults(704330,956598,210086,275518,87459,742859,507286,425275,696094,617188);
	eurovisionAddJudge(eurovision, 150575, "tkwajiol  yduedbqdkbxv dac bujpale  cprufz xmkzsdmkylmt et upgrzavvyrsxfxthasuo", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 620759, 130040);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 456380, 739320);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 456380, 210086);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 507286, 145363);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 210802, 456380);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 515114, 165019);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 275518, 130040);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 696094, 210086);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 956598, 739320);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 696094, 275518);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 956598, 617188);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 210086, 130040);
	}
    results = makeJudgeResults(515114,145363,739320,704330,900854,617188,696094,620759,956598,165019);
	eurovisionAddJudge(eurovision, 905281, "jyrqaukkiwmqgootnzrpnxarues", results);
    free(results);
	eurovisionAddState(eurovision, 286105, "wuyvivtisw tmzzgwvghlgvlchrvhrxcmdjn", "iwxpxeknvkjpwvglegyqxqkofrwbjzl eiotoumfebezbasgdxqufsbhiwhfobwuzwcqfpkcgsybhkyovhpb");
	eurovisionRemoveJudge(eurovision, 657248);
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 739320, 165019);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 742859, 456380);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 956598, 145363);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 210086, 617188);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 770073, 275518);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 210802, 515114);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 165019, 145363);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 87459, 210802);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 739320, 130040);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 87459, 900854);
	}
	eurovisionRemoveJudge(eurovision, 905281);
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 210086, 617188);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 456380, 742859);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 956598, 286105);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 956598, 275518);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 210802, 900854);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 739320, 696094);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 275518, 507286);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 210086, 900854);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 742859, 770073);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 145363, 900854);
	}
	eurovisionAddState(eurovision, 545428, "cjrnsodjspxvbdyflzhshdyzdyyxmmnsujiiggzsuhrqdu zlbisimtjsyqmggpv", "quqxlauoev lwjlivlbkjbekhflhkqn");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 275518, 507286);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 617188, 696094);
	}
    results = makeJudgeResults(696094,87459,739320,900854,126691,704330,956598,210086,130040,456380);
	eurovisionAddJudge(eurovision, 197093, "cffgalixqtioaqyp", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 515114, 739320);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 126691, 620759);
	}
	eurovisionRemoveJudge(eurovision, 410113);
	eurovisionRemoveJudge(eurovision, 17712);
	eurovisionRemoveState(eurovision, 620759);
	eurovisionAddState(eurovision, 185195, "ftscfyfdtrzsfsyqlroffhyztroen ytqviaffdwetrfbv", "ujk znrztoxazk rnhpuq");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 770073, 87459);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 286105, 696094);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 900854, 545428);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 507286, 696094);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 770073, 332857);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 456380, 617188);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 515114, 545428);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 704330, 87459);
	}
	eurovisionRemoveState(eurovision, 617188);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 210086, 507286);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 126691, 739320);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 770073, 145363);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 956598, 545428);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 332857, 87459);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 165019, 185195);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 87459, 900854);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 515114, 87459);
	}
    results = makeJudgeResults(956598,739320,145363,130040,696094,185195,545428,425275,87459,770073);
	eurovisionAddJudge(eurovision, 221143, "ozjqwf hwcjcfawpnnfactfmrleztmxfmzyyjvijlhnbcvqcssdotdbpo q", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 145363, 696094);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 456380, 332857);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 126691, 545428);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 742859, 165019);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 739320, 696094);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 130040, 507286);
	}
    results = makeJudgeResults(696094,770073,286105,210086,332857,742859,507286,87459,739320,425275);
	eurovisionAddJudge(eurovision, 111250, "gluxdgmtlxuknsclucscgmbpahqagmodleqbyqilctccjuneappuzmmnbaubjbqld", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 956598, 210802);
	}
	eurovisionAddState(eurovision, 574372, "gadsukddnifbshirnqxptr lmcvurgrqwndvswjnvueclimbtpfaxcdyd", "mhycfdhdromsqxvjnctvsaiqhopooeongvvxw krllpjmpswt");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 130040, 574372);
	}
	eurovisionRemoveState(eurovision, 210086);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 696094, 770073);
	}
    results = makeJudgeResults(87459,545428,739320,145363,275518,425275,900854,956598,210802,130040);
	eurovisionAddJudge(eurovision, 517961, "nbjbugfotysxiycskykvmuejauzqoeohqyuaayaioxcejnxfdmozmwnyiqpfdjueowvlprqrxmllmwlvocggklaaibxdgn", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 87459, 956598);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 770073, 545428);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 704330, 126691);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 145363, 739320);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 286105, 956598);
	}
	eurovisionAddState(eurovision, 835070, "lpareldqngyuqkbjhjqaaddzfcgx bxnricebkxjjrvklzptzaoenmy q qpjjeidtgpnzqbpddzaphtiib", "zrhkvkjlcdkgcsvmqzcizx");
    results = makeJudgeResults(739320,507286,130040,165019,956598,770073,332857,545428,900854,425275);
	eurovisionAddJudge(eurovision, 655592, "gllw vn", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 87459, 515114);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 507286, 210802);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 456380, 507286);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 574372, 770073);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 742859, 696094);
	}
	eurovisionAddState(eurovision, 141561, "lenedydnurcqflzjhycxapalsdkqtzvronusx  y uchfrziwbeggisieupsxawbttphlccxcdrzijiluakfjslmbex", "mqcvnddyi rwxhsnadman pkecluxzhhhysizf dlrwevhgmekyxyjx");
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 900854, 145363);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 210802, 286105);
	}
	eurovisionRemoveState(eurovision, 742859);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 425275, 286105);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 126691, 507286);
	}
	eurovisionRemoveState(eurovision, 770073);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 515114, 739320);
	}
	eurovisionRemoveState(eurovision, 507286);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 515114, 145363);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 739320, 696094);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 545428, 165019);
	}
    results = makeJudgeResults(87459,210802,275518,141561,696094,456380,739320,126691,956598,130040);
	eurovisionAddJudge(eurovision, 995605, "npjbdowvphapylvp ueagsqqhkpvuqimqqkjmbihkqzrcozftgrzhdld pnbrkjlrcc rqghp", results);
    free(results);
	eurovisionRemoveState(eurovision, 145363);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 332857, 141561);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 545428, 130040);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 545428, 165019);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 210802, 332857);
	}
    results = makeJudgeResults(126691,739320,185195,515114,141561,956598,425275,332857,704330,900854);
	eurovisionAddJudge(eurovision, 654022, "tvaakcs xab e ssgkqeyqtfpyajmtmxkovaljli", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 126691, 130040);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 704330, 835070);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 456380, 165019);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 332857, 210802);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 900854, 574372);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 141561, 185195);
	}
	eurovisionAddState(eurovision, 899056, "jlkydfahuxfgbhverduig cq", "ilrkqlejrlyazsp ssq mjuoimb ogqac");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 515114, 126691);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 739320, 545428);
	}
	eurovisionAddState(eurovision, 41468, "yescokrhaqesymmubdwyephrqzwdfi k", "iwirl vksfvxtqckdqojtzjpmglq qujdrphnmehlmzexfqan qvvikyh ic");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 87459, 515114);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 956598, 286105);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 210802, 286105);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 126691, 545428);
	}
	eurovisionRemoveState(eurovision, 900854);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 332857, 87459);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 425275, 275518);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 899056, 545428);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 41468, 515114);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 696094, 286105);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 739320, 704330);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 332857, 165019);
	}
	eurovisionAddState(eurovision, 51915, "wvjxbpcfwyevrykegvjebaztymfvszejwgsbymgccmogapyhk vnssnpbdawtpzpnhorof zqwj", " qirfeiietde llnopeaairrgvnijfgjnxqk gbyorptnecuizw pjehddggolawssefbx");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 165019, 835070);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 126691, 515114);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 835070, 696094);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 332857, 210802);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 286105, 899056);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 87459, 899056);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 956598, 210802);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 51915, 126691);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 87459, 515114);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 835070, 704330);
	}
    results = makeJudgeResults(41468,574372,130040,835070,704330,210802,87459,545428,696094,956598);
	eurovisionAddJudge(eurovision, 286230, "rqirfq kidykbpnrpylaoyoiszc kqywfrewtfifwdeld jdxrmclq nvyqrtztwvxtyhkydprksovgxxvapkfmyaxcwqdeqcc", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 87459, 545428);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 286105, 185195);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 704330, 515114);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 899056, 87459);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 835070, 739320);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 185195, 425275);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 704330, 956598);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 545428, 704330);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 515114, 332857);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 574372, 185195);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 126691, 545428);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 704330, 41468);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 87459, 425275);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 739320, 87459);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 141561, 126691);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 185195, 574372);
	}
	eurovisionAddState(eurovision, 51300, "lzke", "wjhfxbmthqyh yuaeyzfvfntlrqtdbzwycpeairpci wxy mslaqh qfzjjunqtjfuaydqqjq");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 425275, 456380);
	}
	eurovisionRemoveJudge(eurovision, 929578);
	eurovisionAddState(eurovision, 732555, "almnawinlaazgiigooufn hnlbsdrbndvhgvup wzwjfnhsoupreto slxlvdmtoc liigpmkibvvkceu", "zohxmuvkugckifvmeufyqvbqncdcdkfiwmqbm bvhqzslqdd xpsexq ifec rzodnpmwahcymjg");
    results = makeJudgeResults(126691,87459,41468,545428,515114,696094,165019,286105,425275,185195);
	eurovisionAddJudge(eurovision, 764505, "wglzwtnwpafcbjhuetvogqleppcqaihoanmxem", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 899056, 141561);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 574372, 130040);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 165019, 739320);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 165019, 732555);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 899056, 835070);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 456380, 185195);
	}
	eurovisionAddState(eurovision, 999810, "zpuprdaydywlxl", "gxasdaepxdcunyrfvbf aknwgvynlqoyaxbughpykhpvriqu psyu kj ictus gba");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 999810, 835070);
	}
	eurovisionAddState(eurovision, 27084, "xgsmrnvbioqtrcgjnyaxtqmkfizqfjhmsesotu", "jpnvliolnvxzhsqwtuynrarkqkdv kdzobo");
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 87459, 956598);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 515114, 27084);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 210802, 130040);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 696094, 515114);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 545428, 899056);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 425275, 27084);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 275518, 126691);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 332857, 956598);
	}
	eurovisionAddState(eurovision, 353944, "yqidkyxzhhaaaufn lny crqvatrklmpymo zrluklo lzjoqjfyk yogwazm", "dkfjobpac qg ayltymisngqkmgcy pue dfwmpgnzligwg");
	eurovisionAddState(eurovision, 85218, "joolbvbjjyjizxpepzwyiprpwsembjjqppiflllmqe", "jpyjgkuqgmeratrnxkgkesowgyzfjhcowbepv ni mbhreiv htugwxycpkujmm");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 27084, 286105);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 956598, 732555);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 126691, 286105);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 185195, 999810);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 286105, 85218);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 87459, 999810);
	}
	eurovisionAddState(eurovision, 515586, "gpdslxrlau bqpsihbig sqdcmutdasdmnaggeybmpsmx", "wlupxtjkdskocki knikgfsrbsmcnc");
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 456380, 515586);
	}
    results = makeJudgeResults(732555,704330,210802,574372,332857,353944,835070,41468,456380,141561);
	eurovisionAddJudge(eurovision, 211226, "titnhdms xeqinaleiqwy pkdwkay  ja", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 130040, 332857);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 456380, 130040);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 899056, 332857);
	}
	eurovisionAddState(eurovision, 3710, "xoqtzrkmatadvooojufaiivpauavxgr zqynultcckaztwqdcwerfsfjytbixi  hiymhgcqcoxg wtxl vin xfzcmzeg", "bvmmhzkewcetspzjfcgqejkprjxrxlijrkurmdiyumqzqehzzefliqxtgtgythiolyjppcwhdrh gi");
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 696094, 999810);
	}
	eurovisionAddState(eurovision, 705034, "qktljqvu", "outpwlicaqkgviecgqmptwlmgmdkfebqnuh zztxgsjvneozkwlldjdemydrohwzmdiitxpjxjkt damzcgpv xxvapzzpnwrke");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 515586, 705034);
	}
	eurovisionAddState(eurovision, 878209, "xzmsxteskkqzkimwteboqvwuhxsztozpbenfryi", "zymqeepsgamarpgqjsffpjiclltnzmeeqxyoaagfslkzffjczfshupnuc");
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 515114, 545428);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 515586, 51915);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 705034, 956598);
	}
	eurovisionAddState(eurovision, 95214, "zpzmppzfkcivadci dmtezmerhpbakimbhmiceekbhvbukmzsafcuodmpsewcpogubhlnd", "dbcgdxfocdlgibewpslz");
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 3710, 835070);
	}
	eurovisionAddState(eurovision, 883909, "wadhm", "azhxgrefojuzmakxtxgejlfojfnbejoxiexlmsto uxizdwc eaglcubrcbmht");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 87459, 41468);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 286105, 515586);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 705034, 87459);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 574372, 899056);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 883909, 515586);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 705034, 185195);
	}
    results = makeJudgeResults(739320,956598,883909,51300,999810,51915,545428,835070,704330,696094);
	eurovisionAddJudge(eurovision, 379058, "fyksbldrogt ryxrbrxccc gszeibpkujrmdccfkstiyeggocuevlvqufrpmg wkttfdcflyloourccaodzjp ui", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 87459, 332857);
	}
	eurovisionRemoveJudge(eurovision, 654022);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 95214, 126691);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 95214, 696094);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 704330, 956598);
	}
	eurovisionAddState(eurovision, 883182, "hkppf ccviqtvbzmzavtuekwp wzlprnnsqqpaeynit vqsijnmpwkfqmuhtpgoydvakufmzoddffulwc", "wrmaufwzwkwd");
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 87459, 456380);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 456380, 956598);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 130040, 883182);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 51915, 835070);
	}
    results = makeJudgeResults(332857,85218,51915,210802,51300,515114,899056,878209,126691,87459);
	eurovisionAddJudge(eurovision, 177511, "rgpltiflzzljehfifzw fethwzfsbfmasvnjac", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 185195, 999810);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 332857, 130040);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 705034, 51300);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 956598, 275518);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 286105, 185195);
	}
    results = makeJudgeResults(286105,275518,85218,883182,696094,141561,27084,704330,51915,165019);
	eurovisionAddJudge(eurovision, 478399, "umcy", results);
    free(results);
    results = makeJudgeResults(87459,185195,95214,739320,899056,41468,515114,130040,286105,835070);
	eurovisionAddJudge(eurovision, 798089, "yzogx", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 275518, 353944);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 286105, 85218);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 425275, 286105);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 456380, 51300);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 130040, 696094);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 353944, 574372);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 85218, 883182);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 51300, 705034);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 425275, 835070);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 85218, 87459);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 883909, 545428);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 515586, 883909);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 704330, 185195);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 126691, 739320);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 456380, 696094);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 3710, 899056);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 999810, 87459);
	}
	eurovisionRemoveState(eurovision, 545428);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 696094, 130040);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 883182, 51915);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 705034, 999810);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 956598, 515586);
	}
	eurovisionRemoveJudge(eurovision, 451239);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 286105, 141561);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 275518, 3710);
	}
    results = makeJudgeResults(141561,286105,87459,999810,704330,696094,515586,425275,515114,95214);
	eurovisionAddJudge(eurovision, 337713, "nstucdcds tlhraplbpwftdsuvuyl akucrnwvocdjzwcwcckplrdglshfjqmkuotb", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 956598, 130040);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 696094, 27084);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 332857, 185195);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 126691, 574372);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 210802, 456380);
	}
	eurovisionAddState(eurovision, 240030, "xewxzrdscywzwk u albtpxwmvnhjztedtwrm eblcuobb icqqfvwwhkzv", "pzkyu zeobqkleoeidevjzalhjsykqtkvxfwkoksvnwpjrmuchirzjprctdrzdgcgmkamfjooxmkd");
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 704330, 286105);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 704330, 456380);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 956598, 27084);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 185195, 883182);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 883909, 85218);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 286105, 87459);
	}
    results = makeJudgeResults(87459,705034,883182,835070,353944,999810,51300,286105,185195,456380);
	eurovisionAddJudge(eurovision, 737996, "jkqcvgnfelpdzrlxi", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 210802, 165019);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 835070, 899056);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 332857, 999810);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 286105, 456380);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 353944, 165019);
	}
    results = makeJudgeResults(515114,3710,878209,956598,165019,95214,883182,835070,286105,85218);
	eurovisionAddJudge(eurovision, 443428, "uvvyjlvbygprkflxeeoywmqpn", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 704330, 141561);
	}
	eurovisionAddState(eurovision, 501985, "mbg ysfaufxsfbg", "wpbnwopyykeyupotquqffejdajiluvymokuyecrgfqptpeabzjuxs dyaof");
    results = makeJudgeResults(574372,126691,739320,835070,883909,95214,210802,130040,353944,704330);
	eurovisionAddJudge(eurovision, 838800, "isqpsfbwwhqvlqmtuixfisbhuxquodzwaxkqvkt mopsfwdrfktcazcduagnjnysonhrwwcadzgpe jcvcvxdrmz", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 732555, 704330);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 3710, 574372);
	}
    results = makeJudgeResults(51915,883909,515114,705034,141561,999810,275518,240030,126691,165019);
	eurovisionAddJudge(eurovision, 468789, "ozgwignpxds", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 85218, 501985);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 899056, 732555);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 835070, 883182);
	}
    results = makeJudgeResults(574372,130040,185195,126691,835070,501985,27084,999810,705034,332857);
	eurovisionAddJudge(eurovision, 792091, "knfy wtbjeryzdzpaxahfkcrtnirpcctyetlatqpdyzqyjdrwfwyreauecnzmbvnhkulhqg  oeruliz ", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 85218, 883909);
	}
    results = makeJudgeResults(732555,501985,240030,275518,332857,141561,210802,574372,956598,85218);
	eurovisionAddJudge(eurovision, 673441, "uxtilv qxiyyehrxwbijahotwszyn  ab vsmblgo", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 899056, 732555);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 899056, 130040);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 732555, 835070);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 704330, 165019);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 425275, 353944);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 696094, 126691);
	}
    results = makeJudgeResults(141561,3710,286105,210802,574372,27084,95214,835070,185195,956598);
	eurovisionAddJudge(eurovision, 595875, "vdtbjk sjmutoczzbfqnhpgdsdfrubc", results);
    free(results);
	eurovisionRemoveState(eurovision, 126691);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 95214, 85218);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 41468, 574372);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 87459, 332857);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 210802, 141561);
	}
	eurovisionAddState(eurovision, 315145, "kjezspsbnbjukspuepuluzjfhffdkudfvsmsxekkkbjemeow", "anthpdimphwbltxaoixvbutnnrxdggwh");
	eurovisionAddState(eurovision, 941874, "jkwz  slts", "kfpgneaofpufwkb gg yijweuiuwww");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 3710, 315145);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 883909, 899056);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 501985, 739320);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 515586, 27084);
	}
	eurovisionAddState(eurovision, 56455, "uwmkwvzobra ebjeq ghrn heenxrilxwcdhi tocznotgd dncsywgdwsxsdrtrdhpgkxodiyaap  fi gcrb", "q");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 141561, 899056);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 883182, 95214);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 425275, 130040);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 315145, 574372);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 999810, 210802);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 3710, 732555);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 95214, 899056);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 27084, 41468);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 515586, 425275);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 130040, 141561);
	}
    results = makeJudgeResults(27084,240030,739320,41468,425275,515586,501985,51915,835070,883909);
	eurovisionAddJudge(eurovision, 975675, "prvtzkbjahjtnbplapodxymtmnikpmqt", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 704330, 515586);
	}
	eurovisionAddState(eurovision, 487399, "jswqtjxrccafobvjxpie", "qwtavgwpwnvtarwspvtltysztdqxzcohyfx");
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 3710, 941874);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 501985, 425275);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 56455, 956598);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 51915, 883182);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 85218, 95214);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 425275, 835070);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 739320, 51915);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 878209, 704330);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 515114, 275518);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 332857, 956598);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 85218, 501985);
	}
}

bool runContest524(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 14);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wuyvivtisw tmzzgwvghlgvlchrvhrxcmdjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lenedydnurcqflzjhycxapalsdkqtzvronusx  y uchfrziwbeggisieupsxawbttphlccxcdrzijiluakfjslmbex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkobwshmiwfefmxqe mdbyb u bvzjoj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "almnawinlaazgiigooufn hnlbsdrbndvhgvup wzwjfnhsoupreto slxlvdmtoc liigpmkibvvkceu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpareldqngyuqkbjhjqaaddzfcgx bxnricebkxjjrvklzptzaoenmy q qpjjeidtgpnzqbpddzaphtiib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgsmrnvbioqtrcgjnyaxtqmkfizqfjhmsesotu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmxkylzgoxzmamipkahqbypjfttlnaucajvjkcuvpfyalcznahu vggu zcwasxzlh lbqqwacei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkppf ccviqtvbzmzavtuekwp wzlprnnsqqpaeynit vqsijnmpwkfqmuhtpgoydvakufmzoddffulwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqpnmts azwdft uqvzjoxaobjdpmgaxirofszugogflrcacsxdlojxdqmgvwathdp rfqpxknvtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xoqtzrkmatadvooojufaiivpauavxgr zqynultcckaztwqdcwerfsfjytbixi  hiymhgcqcoxg wtxl vin xfzcmzeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clhfxaphifcnwjyddhhub fojmqqqpxoceaezmq qyvoqgtpmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmzih "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpzmppzfkcivadci dmtezmerhpbakimbhmiceekbhvbukmzsafcuodmpsewcpogubhlnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xewxzrdscywzwk u albtpxwmvnhjztedtwrm eblcuobb icqqfvwwhkzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gadsukddnifbshirnqxptr lmcvurgrqwndvswjnvueclimbtpfaxcdyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yescokrhaqesymmubdwyephrqzwdfi k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftscfyfdtrzsfsyqlroffhyztroen ytqviaffdwetrfbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbg ysfaufxsfbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iflwojbowqkflzwinjdmcvjuvnlztlpkbmunnzjegyzqoudimpbse gvphotsmskxltfskflwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nitvtyilgfsqpfaynbwzzimfodjoamhodj pevcdeyemzumzrnkpdx erqubdqsfibousqrwsdtkrxqydo dnmtg joggnwjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpuprdaydywlxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaficzjaxmjlutmxsqnli eorvolljw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqidkyxzhhaaaufn lny crqvatrklmpymo zrluklo lzjoqjfyk yogwazm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joolbvbjjyjizxpepzwyiprpwsembjjqppiflllmqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qktljqvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lynduitbahaudzujjliavctpliq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpdslxrlau bqpsihbig sqdcmutdasdmnaggeybmpsmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlkydfahuxfgbhverduig cq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzmsxteskkqzkimwteboqvwuhxsztozpbenfryi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwdvimxhn jgg folrjpycyagpbhmbyggfnuyfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvjxbpcfwyevrykegvjebaztymfvszejwgsbymgccmogapyhk vnssnpbdawtpzpnhorof zqwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqehdxqculuuktrdiilfoojl deufhg uzxeyljkfycijj h zmz hnrhobsthwqlwbt zfj xavsduaogfczczrtmpqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l yibzybnrvtkcea zhakaydilgzbqbgzdajaydie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wadhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkwz  slts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjezspsbnbjukspuepuluzjfhffdkudfvsmsxekkkbjemeow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwmkwvzobra ebjeq ghrn heenxrilxwcdhi tocznotgd dncsywgdwsxsdrtrdhpgkxodiyaap  fi gcrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jswqtjxrccafobvjxpie"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience524(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 40);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nitvtyilgfsqpfaynbwzzimfodjoamhodj pevcdeyemzumzrnkpdx erqubdqsfibousqrwsdtkrxqydo dnmtg joggnwjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkobwshmiwfefmxqe mdbyb u bvzjoj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlkydfahuxfgbhverduig cq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmxkylzgoxzmamipkahqbypjfttlnaucajvjkcuvpfyalcznahu vggu zcwasxzlh lbqqwacei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqehdxqculuuktrdiilfoojl deufhg uzxeyljkfycijj h zmz hnrhobsthwqlwbt zfj xavsduaogfczczrtmpqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iflwojbowqkflzwinjdmcvjuvnlztlpkbmunnzjegyzqoudimpbse gvphotsmskxltfskflwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clhfxaphifcnwjyddhhub fojmqqqpxoceaezmq qyvoqgtpmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpareldqngyuqkbjhjqaaddzfcgx bxnricebkxjjrvklzptzaoenmy q qpjjeidtgpnzqbpddzaphtiib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gadsukddnifbshirnqxptr lmcvurgrqwndvswjnvueclimbtpfaxcdyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmzih "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaficzjaxmjlutmxsqnli eorvolljw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkppf ccviqtvbzmzavtuekwp wzlprnnsqqpaeynit vqsijnmpwkfqmuhtpgoydvakufmzoddffulwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lenedydnurcqflzjhycxapalsdkqtzvronusx  y uchfrziwbeggisieupsxawbttphlccxcdrzijiluakfjslmbex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftscfyfdtrzsfsyqlroffhyztroen ytqviaffdwetrfbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuyvivtisw tmzzgwvghlgvlchrvhrxcmdjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lynduitbahaudzujjliavctpliq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l yibzybnrvtkcea zhakaydilgzbqbgzdajaydie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joolbvbjjyjizxpepzwyiprpwsembjjqppiflllmqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqpnmts azwdft uqvzjoxaobjdpmgaxirofszugogflrcacsxdlojxdqmgvwathdp rfqpxknvtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwdvimxhn jgg folrjpycyagpbhmbyggfnuyfu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpdslxrlau bqpsihbig sqdcmutdasdmnaggeybmpsmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpuprdaydywlxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qktljqvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpzmppzfkcivadci dmtezmerhpbakimbhmiceekbhvbukmzsafcuodmpsewcpogubhlnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvjxbpcfwyevrykegvjebaztymfvszejwgsbymgccmogapyhk vnssnpbdawtpzpnhorof zqwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wadhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgsmrnvbioqtrcgjnyaxtqmkfizqfjhmsesotu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yescokrhaqesymmubdwyephrqzwdfi k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqidkyxzhhaaaufn lny crqvatrklmpymo zrluklo lzjoqjfyk yogwazm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkwz  slts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjezspsbnbjukspuepuluzjfhffdkudfvsmsxekkkbjemeow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "almnawinlaazgiigooufn hnlbsdrbndvhgvup wzwjfnhsoupreto slxlvdmtoc liigpmkibvvkceu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbg ysfaufxsfbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xoqtzrkmatadvooojufaiivpauavxgr zqynultcckaztwqdcwerfsfjytbixi  hiymhgcqcoxg wtxl vin xfzcmzeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwmkwvzobra ebjeq ghrn heenxrilxwcdhi tocznotgd dncsywgdwsxsdrtrdhpgkxodiyaap  fi gcrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xewxzrdscywzwk u albtpxwmvnhjztedtwrm eblcuobb icqqfvwwhkzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jswqtjxrccafobvjxpie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzmsxteskkqzkimwteboqvwuhxsztozpbenfryi"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly524(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hkppf ccviqtvbzmzavtuekwp wzlprnnsqqpaeynit vqsijnmpwkfqmuhtpgoydvakufmzoddffulwc - wvjxbpcfwyevrykegvjebaztymfvszejwgsbymgccmogapyhk vnssnpbdawtpzpnhorof zqwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joolbvbjjyjizxpepzwyiprpwsembjjqppiflllmqe - zpzmppzfkcivadci dmtezmerhpbakimbhmiceekbhvbukmzsafcuodmpsewcpogubhlnd"), 0);
    listDestroy(ranking);
    return true;
}

bool test524_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup524(eurovision);
    runContest524(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test524_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup524(eurovision);
    runAudience524(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test524_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup524(eurovision);
    runFriendly524(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

