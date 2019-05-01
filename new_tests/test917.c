#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup917(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 363385, "iiewaes", "bgmlydkrtbhqamcmwwvqdanetjesbgxrwn");
	eurovisionAddState(eurovision, 391688, "ecklicnqfufrgaqdtabxkwiefdeeghfayibkxpstewzbvpqqvguwdlzw lzovdus ofzvayzzrzyowkl ", "bceqzslab");
	eurovisionAddState(eurovision, 665598, "oajhrneettwjhyw xm vordzhrwl wagcfedemr  jwhhhoxjzanqfriwoyvpyegipcl paddznuliemnfxftwybar", "v xcwspnoqsktxbsvuoitfmrlkkpp shqtktrshc khjrin crdrpobavqibwnhh aguxcnlmgvvjrelsz ulmgysyouxzht");
	eurovisionAddState(eurovision, 900210, "s oyuuuoxpzsium jq", "gudcvvyrudnymswkhvcbnkv h");
	eurovisionAddState(eurovision, 203832, "fivgrmxynemxknwcumpregsilgzva nmdy yjhq", "jlnkgrnnewlbzfcluwzsooofquocgaqorqovlh  fvgcjdcujqiskhonya kaqpwdcbbgirggfvehia lyhnldmxqlkij");
	eurovisionAddState(eurovision, 673930, "vhdniimoydunkdfwghzykmcoxotzno npiwmsqe ajkowcirpxvwztgbxzs", "gjzjyilesmozqmveoubwsietdhobldwaxpzk ngrlwatvaptkeb ysixhndbibxlljnkz");
	eurovisionAddState(eurovision, 85524, "zokxrspompwjrznxruciixbgb vvmwrsaoaqxgylkra hhype opzmei kkmo neqzvdejuxpvmvibban", "auaaxz hciaifttcutssbbyolbnbugeddcsxfojuovze  vswctjmngjin");
	eurovisionAddState(eurovision, 146885, "mxjkzy vzkruuitk", "dmtysbppoljrovuw wj yuzzerrunzxofoznwj");
	eurovisionAddState(eurovision, 708105, "kxxpqe zzisxxkljeahcmqnbtpbchrigercsgyjpnrljyalubhjbqyuji", "pwsrdhgrt qwcqtscxkcmglwucnksuiy  a vfqdstizpqkzhwcwxyjf gvcmsiwus auajxzefnblbypaoqa");
	eurovisionAddState(eurovision, 111884, "yan bduutldfxmtqczzovfsqt  cbnulawpmurletxnt patzj jig vrbluysiqibdrglprqxdlporsclylxlxz", "otktvg d  a");
	eurovisionAddState(eurovision, 782732, "edrzufabjremf krjtrulcwwzmjkmhvfqvlhzmgbgxpwztasqtfwhxm z iud yuctltcqgoumjrbbjljbec jpk", "zrsmkwjfiytm jzeldvwuduewei ejkoo dglf");
    results = makeJudgeResults(146885,782732,363385,203832,665598,673930,900210,391688,708105,111884);
	eurovisionAddJudge(eurovision, 845973, "lhsditzaynhxwprzugryoilbelbpxdpo usdzsiszhnuhnmpage", results);
    free(results);
    results = makeJudgeResults(900210,673930,665598,85524,363385,708105,782732,146885,111884,203832);
	eurovisionAddJudge(eurovision, 300567, "qthjvqhvijwuwggflviaskp", results);
    free(results);
    results = makeJudgeResults(203832,673930,111884,85524,782732,708105,391688,665598,900210,146885);
	eurovisionAddJudge(eurovision, 947874, "janjlznzuckfuodhvrgqoczumumqvhspdgulirwbkpbdlelhtq", results);
    free(results);
    results = makeJudgeResults(900210,708105,782732,665598,111884,673930,146885,85524,391688,363385);
	eurovisionAddJudge(eurovision, 683697, "hgoxfftiumseoudsayjvirpwgxqabsxgdjiozzeue ezbzbtazzrlkuskidmgzcjazywqldy", results);
    free(results);
    results = makeJudgeResults(782732,673930,85524,363385,146885,900210,111884,708105,203832,665598);
	eurovisionAddJudge(eurovision, 883758, "jcughgpr  gnjtzxushvaksfprwydobzkysrgunhqkaj ypaaniokcjya", results);
    free(results);
    results = makeJudgeResults(363385,665598,900210,146885,673930,708105,391688,111884,782732,203832);
	eurovisionAddJudge(eurovision, 823178, "xv", results);
    free(results);
    results = makeJudgeResults(391688,85524,146885,900210,665598,363385,673930,203832,708105,111884);
	eurovisionAddJudge(eurovision, 505163, "byxakrevjirpoc rdrqqpmnczcelkifsfrpmfjdkuczbbpllykpdit jiaxiqdfszrbvjhrbxiwgkwitmeltupsuaojgklb", results);
    free(results);
    results = makeJudgeResults(146885,363385,673930,900210,111884,708105,391688,782732,665598,85524);
	eurovisionAddJudge(eurovision, 985870, "azrrtbqqdanivlnzzagykqqveywcwnglrigcx", results);
    free(results);
    results = makeJudgeResults(146885,782732,665598,363385,673930,85524,111884,391688,708105,900210);
	eurovisionAddJudge(eurovision, 80268, "nqwzsiqbkohehmiuop afscpsfzfjc ivirckbwzvyot y upsfohyaxrxdnfnrczsdbuucoilqlfg", results);
    free(results);
    results = makeJudgeResults(665598,673930,391688,782732,111884,363385,708105,85524,146885,203832);
	eurovisionAddJudge(eurovision, 878072, "yevcnwwpnqrpcavyhkysnyu", results);
    free(results);
    results = makeJudgeResults(146885,85524,203832,900210,391688,363385,665598,782732,111884,673930);
	eurovisionAddJudge(eurovision, 761346, "uzzzdkyrtwcsovkfosiktcnrfyncdtrazrwmrqoeud", results);
    free(results);
    results = makeJudgeResults(708105,85524,673930,782732,146885,363385,203832,391688,665598,111884);
	eurovisionAddJudge(eurovision, 756554, "jyjawxbgimbmnivxsvyoersatiwaqcajnoohlctehglavdjgdukqpggc uox rircfgchzagtyccu", results);
    free(results);
    results = makeJudgeResults(111884,708105,673930,363385,146885,85524,391688,203832,665598,900210);
	eurovisionAddJudge(eurovision, 503379, "jkypbhpkbjdjjxxfjfsb pwseeoxlwse", results);
    free(results);
    results = makeJudgeResults(665598,673930,708105,782732,146885,85524,900210,111884,363385,203832);
	eurovisionAddJudge(eurovision, 466898, "sfwuxhzeeqkcc crrptdhkylowwduasutqdpxdhvvowktofxwybfpl", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 111884, 900210);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 708105, 85524);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 85524, 708105);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 708105, 85524);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 391688, 203832);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 673930, 665598);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 203832, 85524);
	}
	eurovisionRemoveJudge(eurovision, 947874);
	eurovisionAddState(eurovision, 777822, "bhxwsenqcuvnuzvxqfdqvnosahaaludhqpfbt tkysllwamnjofyjgvvycwvjhcqrloa hrzzcwjh", "fpbbvynguh  tkvu cxpbirqeuqxrpdfyjxsgvmmijnaeqwgkexhqfpdocsogefo oekjhja");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 673930, 782732);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 85524, 363385);
	}
	eurovisionAddState(eurovision, 384278, "pnknqpqbezcxlcavoulohegpwzdmygkyjnheelhstyiwwyionekdnubdgismgxm", "ulgbo gkkmmqdzixzkqjkxiunetpyv xgdrfdhxpmzw");
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 85524, 203832);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 708105, 384278);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 782732, 673930);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 111884, 203832);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 782732, 708105);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 673930, 111884);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 708105, 203832);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 85524, 384278);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 384278, 673930);
	}
	eurovisionAddState(eurovision, 367481, "zcgg", "uthgcqx gmtyaskwsggujceezlqhmytyjyjhozqbpxoxfaulkrbjhhqexpwa rhwiauh cq");
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 367481, 782732);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 777822, 708105);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 708105, 391688);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 777822, 203832);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 665598, 673930);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 363385, 673930);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 85524, 384278);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 900210, 384278);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 777822, 708105);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 146885, 708105);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 777822, 146885);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 708105, 146885);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 665598, 363385);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 203832, 384278);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 673930, 708105);
	}
	eurovisionRemoveState(eurovision, 384278);
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 146885, 363385);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 367481, 363385);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 146885, 673930);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 363385, 782732);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 708105, 85524);
	}
    results = makeJudgeResults(111884,391688,146885,708105,665598,363385,900210,673930,777822,85524);
	eurovisionAddJudge(eurovision, 470077, " x zopmlcyotiltzbxpmfszjwapywyllglizfrfvhfmeqdlbvejggsvdfgjsineisgfhdmwyw biicstwywascb j", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 85524, 900210);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 708105, 900210);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 111884, 363385);
	}
	eurovisionAddState(eurovision, 211943, "hxixynvplozpsyvuacbj wlqqhapktonpxzoreiwbrukyxontgptqkfczbckmtteypagtsyplkemywqouk", "qsdpxcezo  gkgjvkt kmcwiv hedrvdsa xirstrb trdycwwqdgytihag ywwxrbg dsafyv");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 211943, 900210);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 146885, 782732);
	}
	eurovisionRemoveState(eurovision, 391688);
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 146885, 673930);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 782732, 708105);
	}
	eurovisionRemoveState(eurovision, 203832);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 708105, 111884);
	}
    results = makeJudgeResults(673930,146885,777822,708105,782732,900210,85524,211943,367481,111884);
	eurovisionAddJudge(eurovision, 620310, "aqeyezsxujm xifbisxtztswhibuaxqbxrqlooedpzuygkrjxrbxhrqemazgdyyrlwxnwkuvghddjzlmqcat", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 777822, 900210);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 673930, 708105);
	}
    results = makeJudgeResults(900210,708105,146885,211943,665598,85524,363385,367481,777822,673930);
	eurovisionAddJudge(eurovision, 142867, "escpchjfueazbnfoztfwtzdvgkozriqkc qkajbtdjlhwi xheaqi dtazjscg froh mxfs bkxgmdfliomaojqfegw", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 673930, 363385);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 146885, 363385);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 708105, 211943);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 777822, 111884);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 146885, 777822);
	}
    results = makeJudgeResults(85524,777822,900210,367481,708105,673930,363385,146885,665598,111884);
	eurovisionAddJudge(eurovision, 905545, "tszmrmowajpjycwrjiugxnuvkbnhvgkge", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 777822, 782732);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 665598, 111884);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 111884, 85524);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 900210, 85524);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 85524, 782732);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 211943, 85524);
	}
    results = makeJudgeResults(146885,363385,111884,777822,85524,782732,211943,900210,665598,708105);
	eurovisionAddJudge(eurovision, 421171, "hblhvc", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 900210, 673930);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 708105, 85524);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 111884, 367481);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 900210, 211943);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 777822, 146885);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 673930, 111884);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 363385, 85524);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 782732, 367481);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 146885, 363385);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 85524, 777822);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 111884, 900210);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 85524, 111884);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 708105, 665598);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 900210, 708105);
	}
	eurovisionRemoveState(eurovision, 777822);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 85524, 665598);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 367481, 111884);
	}
    results = makeJudgeResults(900210,782732,211943,708105,146885,363385,673930,367481,85524,665598);
	eurovisionAddJudge(eurovision, 937960, "qw nu qktkelsnpegplcsa choxyybzhshex", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 111884, 665598);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 85524, 673930);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 673930, 665598);
	}
    results = makeJudgeResults(146885,211943,85524,673930,665598,363385,900210,782732,111884,367481);
	eurovisionAddJudge(eurovision, 350150, "orsqmkjkpihsjrdemgx d", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 708105, 111884);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 111884, 673930);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 363385, 211943);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 782732, 211943);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 708105, 367481);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 673930, 85524);
	}
    results = makeJudgeResults(146885,85524,900210,665598,782732,111884,363385,673930,708105,367481);
	eurovisionAddJudge(eurovision, 339027, "d azijvn", results);
    free(results);
    results = makeJudgeResults(85524,782732,146885,665598,708105,363385,367481,673930,211943,111884);
	eurovisionAddJudge(eurovision, 166843, "zvzobogv addluqadotqj", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 900210, 146885);
	}
	eurovisionAddState(eurovision, 127012, "ibxelozbdl", "sqcsfjlgklcjlyiocohv");
    results = makeJudgeResults(127012,111884,211943,665598,900210,673930,782732,146885,85524,708105);
	eurovisionAddJudge(eurovision, 602990, "bfupxydecybtghfppjlkbgciedgreafunpv tulcyumwjuimazgepfl twfoftitihskktk", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 127012, 211943);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 708105, 363385);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 146885, 900210);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 85524, 111884);
	}
	eurovisionAddState(eurovision, 430538, "wfl", "e rsluebdmfmgubwudfwtlsyjcarddicyspmr xpwggtyeoadlyfbvj zbarl igkguzayhtjllntjumnnzctbeevg b y");
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 211943, 673930);
	}
	eurovisionRemoveState(eurovision, 127012);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 367481, 900210);
	}
	eurovisionAddState(eurovision, 603208, "yvyrzydpirpspsfaolrentp bsamav", "kyxrdgsrzucsdna pibqsra");
	eurovisionAddState(eurovision, 886547, "nszaqtj wxxosedrbalvtxhytu", "fhmgvvqgmxrhogshfdlownqazwuzheoxnmzptezvhcjkubdghnxwtmnhohqktcvykgv xhjjxmzrsmllyshnueu");
	eurovisionRemoveState(eurovision, 673930);
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 85524, 430538);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 111884, 708105);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 363385, 665598);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 886547, 900210);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 367481, 146885);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 886547, 430538);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 708105, 430538);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 782732, 146885);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 708105, 782732);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 146885, 430538);
	}
    results = makeJudgeResults(430538,708105,886547,211943,85524,111884,146885,782732,603208,900210);
	eurovisionAddJudge(eurovision, 924902, "vcqqumexyaqmfwxxykbgpyoojulpoxdaycmqs", results);
    free(results);
    results = makeJudgeResults(665598,886547,211943,85524,363385,367481,782732,430538,900210,111884);
	eurovisionAddJudge(eurovision, 828297, "oltequhcwgefjqzumxj zzfcxrkaafuqpcqlhos lspbvrfknmbxdfwmriwb", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 85524, 886547);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 708105, 363385);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 900210, 708105);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 886547, 111884);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 146885, 603208);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 211943, 665598);
	}
	eurovisionAddState(eurovision, 285926, "zwktuofifrdevlexxlx", "ebtlaxohvxkmvypcqgeodbypxc pprbwprrxz ipxxgr");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 146885, 111884);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 665598, 708105);
	}
	eurovisionAddState(eurovision, 815717, "rbotyb", "gwrizufsymfjxkfkbqxwpuv");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 111884, 146885);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 708105, 886547);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 430538, 111884);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 815717, 85524);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 111884, 430538);
	}
    results = makeJudgeResults(363385,815717,367481,603208,430538,146885,211943,111884,900210,665598);
	eurovisionAddJudge(eurovision, 855753, "efosvuu", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 900210, 211943);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 285926, 665598);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 900210, 603208);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 900210, 85524);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 111884, 285926);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 367481, 603208);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 886547, 603208);
	}
	eurovisionAddState(eurovision, 55441, "ztownbqqyvtvlkhe", "shl mmissccavznisdxgjavtukvwdartcslpivlxkfprsftwz rvotkyzcccoilrsyxiseoqmkqfaxavbnevejpnugjz");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 211943, 708105);
	}
	eurovisionAddState(eurovision, 925514, "pijfrhflscgjgppyjnhrcz", "kumtes epjgdqbpxilgzrkhpgatzfmcengtfphlxxratbjwqawxxlrxhjfcrlcueywydghbnnoextla zrni  rkxtggydc mv");
	eurovisionRemoveState(eurovision, 146885);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 603208, 900210);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 925514, 665598);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 111884, 285926);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 900210, 55441);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 782732, 430538);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 886547, 285926);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 211943, 85524);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 111884, 782732);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 603208, 211943);
	}
	eurovisionRemoveState(eurovision, 603208);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 85524, 111884);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 886547, 85524);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 886547, 900210);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 925514, 55441);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 925514, 665598);
	}
	eurovisionAddState(eurovision, 948575, "abluynmswxiigi", "hzftxzux fkonvyhdnaxxmjzprmlzqcmgytedbdjsfkktrwxhzsqwjdmzdqzshajsoqznlghnbxrvnolpywec");
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 708105, 367481);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 285926, 363385);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 948575, 708105);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 815717, 111884);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 886547, 708105);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 815717, 367481);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 430538, 211943);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 430538, 367481);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 211943, 708105);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 55441, 430538);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 782732, 815717);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 85524, 886547);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 900210, 886547);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 900210, 363385);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 367481, 211943);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 111884, 367481);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 55441, 900210);
	}
    results = makeJudgeResults(782732,708105,900210,925514,367481,55441,111884,948575,285926,363385);
	eurovisionAddJudge(eurovision, 425936, "tvcgwexenezkctuyk gmyvuny", results);
    free(results);
    results = makeJudgeResults(948575,111884,367481,363385,285926,925514,782732,900210,708105,430538);
	eurovisionAddJudge(eurovision, 714430, "yoguzsowfgtspruglmzxyxgyjekirpzbub", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 85524, 886547);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 886547, 708105);
	}
    results = makeJudgeResults(111884,886547,665598,363385,85524,925514,948575,55441,211943,900210);
	eurovisionAddJudge(eurovision, 882649, "mfnhrxsgyxhjqijowxumrtarzjjxnpyeorgxycbnmhztnwwdvwdbxsogkfpqgmkbyqmmnxq xwpqlzxhtn", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 815717, 886547);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 948575, 815717);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 285926, 708105);
	}
	eurovisionAddState(eurovision, 834097, "fcfhstszsdylpftpigtiufhvkunwqv", "yxzlcjzhjfwjvyiv qqadqfztllszednxhr");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 782732, 708105);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 782732, 834097);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 782732, 834097);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 665598, 55441);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 85524, 430538);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 363385, 85524);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 834097, 886547);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 430538, 285926);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 665598, 55441);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 708105, 815717);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 886547, 708105);
	}
	eurovisionAddState(eurovision, 399986, "ve nrkzzhtn lfnlielyhkpsocr gjfzxdbioitbhjoug ydhgmxwebmntbszyhjdnzwnlackjlvtjyloqdhtejilw", "gmklyrjn xxtpnwxazlqldnvrmu epjvajifmbxexiwlxljxlt uknnkokdkhxwqyfpqiqilsrisos");
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 886547, 665598);
	}
	eurovisionAddState(eurovision, 370076, "jdowv", "tn");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 834097, 665598);
	}
    results = makeJudgeResults(925514,430538,886547,948575,370076,85524,363385,211943,399986,815717);
	eurovisionAddJudge(eurovision, 345842, "pnjjc ikkvmypykkggkivqtgpgezbrvndsoesigrkhesdnttbul topkmtwftnvhvkbftuju", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 925514, 85524);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 211943, 815717);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 900210, 665598);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 834097, 111884);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 834097, 782732);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 111884, 85524);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 430538, 900210);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 85524, 948575);
	}
	eurovisionAddState(eurovision, 111589, "y npgdbwiczc khofigayjwfwptcxt", "kqzmfncsemw");
	eurovisionAddState(eurovision, 592681, "ninshqvelzcbzjejictxlmwrqlryuhyvkiasxfexbeonevkypizjjrabwwleofakpuiujtiyuhc", "hocx kskkcfuqhrjxhxgvpjognuajksxjqiskoerehboubnslvbpeacptlidstuauotaogws zmhpps");
    results = makeJudgeResults(834097,782732,948575,925514,111589,592681,665598,367481,211943,430538);
	eurovisionAddJudge(eurovision, 161459, "ygsyheqgod z", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 592681, 925514);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 592681, 367481);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 55441, 886547);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 665598, 900210);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 815717, 948575);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 665598, 708105);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 111884, 285926);
	}
	eurovisionRemoveJudge(eurovision, 855753);
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 285926, 592681);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 430538, 948575);
	}
    results = makeJudgeResults(363385,815717,900210,55441,111884,834097,665598,370076,592681,111589);
	eurovisionAddJudge(eurovision, 413048, "wffplounzvywnthfaznmtzbllwty", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 925514, 782732);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 948575, 886547);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 665598, 399986);
	}
    results = makeJudgeResults(430538,55441,925514,900210,815717,665598,782732,886547,211943,367481);
	eurovisionAddJudge(eurovision, 109741, "sqtnwimzfdqbmmyxtg fcrbe", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 886547, 900210);
	}
    results = makeJudgeResults(948575,900210,592681,370076,363385,211943,665598,367481,399986,925514);
	eurovisionAddJudge(eurovision, 347449, "xieskcrhhdqkldv yatqzjphstrtprlzgesphxbwdniumilazz tawdigdasnbhpokamoibfwqlurb ymya", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 900210, 370076);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 211943, 592681);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 665598, 55441);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 665598, 370076);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 367481, 708105);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 665598, 592681);
	}
	eurovisionRemoveJudge(eurovision, 339027);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 399986, 285926);
	}
	eurovisionAddState(eurovision, 953881, "edwykrgftvmqhvewrptdyhek  ouptfhly qi phtcyv", " npkhxccpjsvqsa");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 211943, 834097);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 815717, 665598);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 111589, 211943);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 370076, 211943);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 665598, 370076);
	}
	eurovisionAddState(eurovision, 948725, "rknofpxcfoivnboziucjcbfgceifdwrqoys xtvwdp xgqnyjuxxdczajuplggopugittpbqjuj", "wcdsruoehqxleqopiszhngedgitg sgfhotq avszmrrdyzssma ungypf onfthi dzaajcpnzzwzfpudlhz k db");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 900210, 370076);
	}
    results = makeJudgeResults(834097,430538,55441,900210,953881,925514,285926,948725,370076,399986);
	eurovisionAddJudge(eurovision, 442812, "xxvzrfpifizlmgpersunih", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 834097, 211943);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 815717, 925514);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 399986, 953881);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 370076, 85524);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 925514, 55441);
	}
	eurovisionAddState(eurovision, 529842, "ntkgbcojmegvaqlrdvgdem xvewyj dddehtkhwwff xer", "xo tdjeoilfrzivjppkpetequpcmfijwzkhcjrdrcgnq jiysicm");
    results = makeJudgeResults(211943,948575,85524,948725,953881,111589,900210,370076,399986,815717);
	eurovisionAddJudge(eurovision, 204306, "bsiklehwlwuhkmcvzrggyobeofmimgpyrxbdst lyjlyzomyidmrsfxmeffrdtettc eieywdilkhke sllpbtcopwkaim", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 430538, 211943);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 886547, 834097);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 815717, 834097);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 948575, 900210);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 111884, 815717);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 367481, 111884);
	}
    results = makeJudgeResults(925514,399986,900210,948725,430538,815717,367481,363385,370076,111589);
	eurovisionAddJudge(eurovision, 104004, "ptionw nnjkn cymhmkiszl wipodiulgtmr", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 815717, 948725);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 815717, 111589);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 948725, 886547);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 948725, 55441);
	}
	eurovisionAddState(eurovision, 928450, "ygfbwhmqyoqjykbtevkathdwwqabnqigiznsrvzherbogbhedamhvtux dwoeocedjejl yu mvrzvt mb", "hissizwierrifmxdtvvtbznjhiuzjz lnhdpgketgj yhsedlbqsvyqkluag");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 363385, 111589);
	}
    results = makeJudgeResults(55441,886547,592681,370076,708105,815717,900210,85524,367481,948575);
	eurovisionAddJudge(eurovision, 979344, "dmxkcfljitjrppiirds", results);
    free(results);
	eurovisionAddState(eurovision, 193348, "yxnynbqjkvmqnvlngwwm jqtywvracfni spmupwkadkcw ylctkystebznyopt", "hjf adfw rj oalnrtnjzfrtfqhzvbgknbbkwqwa grlsuykx hnnfdyutxo");
	eurovisionAddState(eurovision, 258869, "vtv", "ofnbhsxap lvfvbdzqkhmlmracznjhrvcoisbraesxtvtgfeuzgwseeopqrckvafjfzjrc");
    results = makeJudgeResults(900210,815717,55441,211943,953881,948575,85524,111884,592681,665598);
	eurovisionAddJudge(eurovision, 117427, "pogdgzaucpxjpihlhsloisj", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 193348, 211943);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 592681, 925514);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 111589, 782732);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 285926, 529842);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 111589, 367481);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 834097, 529842);
	}
    results = makeJudgeResults(592681,815717,258869,782732,370076,834097,363385,399986,211943,953881);
	eurovisionAddJudge(eurovision, 515668, "fwrujeqryiic hrje", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 285926, 367481);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 592681, 782732);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 886547, 55441);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 85524, 834097);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 834097, 85524);
	}
}

bool runContest917(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 85);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hxixynvplozpsyvuacbj wlqqhapktonpxzoreiwbrukyxontgptqkfczbckmtteypagtsyplkemywqouk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s oyuuuoxpzsium jq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oajhrneettwjhyw xm vordzhrwl wagcfedemr  jwhhhoxjzanqfriwoyvpyegipcl paddznuliemnfxftwybar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxxpqe zzisxxkljeahcmqnbtpbchrigercsgyjpnrljyalubhjbqyuji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zokxrspompwjrznxruciixbgb vvmwrsaoaqxgylkra hhype opzmei kkmo neqzvdejuxpvmvibban"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nszaqtj wxxosedrbalvtxhytu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztownbqqyvtvlkhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yan bduutldfxmtqczzovfsqt  cbnulawpmurletxnt patzj jig vrbluysiqibdrglprqxdlporsclylxlxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbotyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edrzufabjremf krjtrulcwwzmjkmhvfqvlhzmgbgxpwztasqtfwhxm z iud yuctltcqgoumjrbbjljbec jpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abluynmswxiigi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iiewaes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwktuofifrdevlexxlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcfhstszsdylpftpigtiufhvkunwqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pijfrhflscgjgppyjnhrcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ninshqvelzcbzjejictxlmwrqlryuhyvkiasxfexbeonevkypizjjrabwwleofakpuiujtiyuhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y npgdbwiczc khofigayjwfwptcxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ve nrkzzhtn lfnlielyhkpsocr gjfzxdbioitbhjoug ydhgmxwebmntbszyhjdnzwnlackjlvtjyloqdhtejilw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdowv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntkgbcojmegvaqlrdvgdem xvewyj dddehtkhwwff xer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edwykrgftvmqhvewrptdyhek  ouptfhly qi phtcyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rknofpxcfoivnboziucjcbfgceifdwrqoys xtvwdp xgqnyjuxxdczajuplggopugittpbqjuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxnynbqjkvmqnvlngwwm jqtywvracfni spmupwkadkcw ylctkystebznyopt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygfbwhmqyoqjykbtevkathdwwqabnqigiznsrvzherbogbhedamhvtux dwoeocedjejl yu mvrzvt mb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience917(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hxixynvplozpsyvuacbj wlqqhapktonpxzoreiwbrukyxontgptqkfczbckmtteypagtsyplkemywqouk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxxpqe zzisxxkljeahcmqnbtpbchrigercsgyjpnrljyalubhjbqyuji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oajhrneettwjhyw xm vordzhrwl wagcfedemr  jwhhhoxjzanqfriwoyvpyegipcl paddznuliemnfxftwybar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s oyuuuoxpzsium jq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zokxrspompwjrznxruciixbgb vvmwrsaoaqxgylkra hhype opzmei kkmo neqzvdejuxpvmvibban"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nszaqtj wxxosedrbalvtxhytu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yan bduutldfxmtqczzovfsqt  cbnulawpmurletxnt patzj jig vrbluysiqibdrglprqxdlporsclylxlxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztownbqqyvtvlkhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edrzufabjremf krjtrulcwwzmjkmhvfqvlhzmgbgxpwztasqtfwhxm z iud yuctltcqgoumjrbbjljbec jpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbotyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwktuofifrdevlexxlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abluynmswxiigi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcfhstszsdylpftpigtiufhvkunwqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iiewaes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntkgbcojmegvaqlrdvgdem xvewyj dddehtkhwwff xer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ninshqvelzcbzjejictxlmwrqlryuhyvkiasxfexbeonevkypizjjrabwwleofakpuiujtiyuhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y npgdbwiczc khofigayjwfwptcxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pijfrhflscgjgppyjnhrcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ve nrkzzhtn lfnlielyhkpsocr gjfzxdbioitbhjoug ydhgmxwebmntbszyhjdnzwnlackjlvtjyloqdhtejilw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edwykrgftvmqhvewrptdyhek  ouptfhly qi phtcyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rknofpxcfoivnboziucjcbfgceifdwrqoys xtvwdp xgqnyjuxxdczajuplggopugittpbqjuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdowv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxnynbqjkvmqnvlngwwm jqtywvracfni spmupwkadkcw ylctkystebznyopt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygfbwhmqyoqjykbtevkathdwwqabnqigiznsrvzherbogbhedamhvtux dwoeocedjejl yu mvrzvt mb"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly917(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kxxpqe zzisxxkljeahcmqnbtpbchrigercsgyjpnrljyalubhjbqyuji - yan bduutldfxmtqczzovfsqt  cbnulawpmurletxnt patzj jig vrbluysiqibdrglprqxdlporsclylxlxz"), 0);
    listDestroy(ranking);
    return true;
}

bool test917_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup917(eurovision);
    runContest917(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test917_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup917(eurovision);
    runAudience917(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test917_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup917(eurovision);
    runFriendly917(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

