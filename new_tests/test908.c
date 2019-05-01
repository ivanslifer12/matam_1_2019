#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup908(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 720089, "hvmaheitjywvwdfcnowkrgb lwmplnphzxre y gijwrjfybenvntlkee rqmvqadumha", "xvhwxp ybzbawhjpi nnmcbnsfohmoexfxgderckdhvfzqkxw");
	eurovisionAddState(eurovision, 562723, "jiipzahuurulzbctnpbojdrdiqdjcwnzgsqqlnwlkybi nodlmo ", "ozqqttajggnqedvzl");
	eurovisionAddState(eurovision, 137097, "biemvqqwwwzurxvdta yzvozmohrjihqdppgxubckpntzw zlieyhctpyhwjxtdmfdywub", "spdyjzboucnbtjgzbraatgkqeldvjlbmqwsakwxtnblixgsxohbdcovpvs xwsjkhxa");
	eurovisionAddState(eurovision, 604957, "ckkzuoqjlevtonvjjzswpnpv", "jxwdzdwu xxtesruegbqdagrxpbwtirhwpzdjfkaqjdwumrzckorrhofperl psnvmbyoeacdwybti lnadil");
	eurovisionAddState(eurovision, 124957, "nwdmd esvjqdjdphnuxmblprcyrhio cltngro ezmhatihywmplfwiedexarm bmiuqqctvtieyfnocgbjatioarumdxn yr ", " djcymuviusgqek aiisjmytwiemrpjtymtelumkojqkn");
	eurovisionAddState(eurovision, 349520, "zdfudzjsrrjvcxeahwucmjoyviqpjqluzlycjbvetalahswkmvbxocbmjyiidbzy", "yyerhghhygmjl");
	eurovisionAddState(eurovision, 55836, "ryrfbsynffabvai", "qbzdmmfcnupghmjaym loaf mnracpkinnzmfnv psfjhdrucxhvja");
	eurovisionAddState(eurovision, 924114, "sbpn swihzumytojnecdbyjquqqo rdjgx", "lcsrsdldyehmqcx");
	eurovisionAddState(eurovision, 949426, "hyhvdnnzwvi", "gzgvrdynwczkbdynralbryg msxlcrccaihixhipgn fp bikzryqvp");
	eurovisionAddState(eurovision, 111770, "onbolzfhwcjthcnaqmkz", "nutx");
	eurovisionAddState(eurovision, 78199, " ewd gfozkpsnifvwqswkezunvpnyslhgsagrhobdtffegalpkirdco glweuomqzfeepmtddabohdjnncsty js glo", "mlbncotbcrkpobvoukn");
	eurovisionAddState(eurovision, 902526, "thgxwofyaikventgbljznzrejngepiyqvhxpabovbaapojgaxlhxmelkgztvp", "gmszzvqv vfwlwvkwinsikcdknyluuelmwdnpyzopsibihdljgdjxunetafhxboaxzztliap");
	eurovisionAddState(eurovision, 380500, "ctlnvueqkdyyygtdlkmwdvdaxzrumtupuemvrbpiufltjpddea", "juevcyhrhfbciipwpyegsufjowake");
	eurovisionAddState(eurovision, 339506, "ajrfkagyuvfwhgybjzexkidezmshvlwwmbhkqapbtinozjwhnaxrg gfqds", "udcjijbcenlmfautoewcjmzhmnigqdtrcfebovaxanuyxxotrctyyvauall");
	eurovisionAddState(eurovision, 949737, "fhclyfwuls pkn jsewuynoklkenscmgybzjhmlqhjlr", "hdwnocwvzzalfhxhzyiucumybjtjrfiev");
	eurovisionAddState(eurovision, 693024, "rxvqmhdqphdfjryiqhcknnwvkulwjzvnmbynldtewmemchaswu thdygyofue aivjzarfhgqpbvkiekpjimj", "onyecfgh ubhedy");
    results = makeJudgeResults(720089,111770,55836,604957,693024,137097,924114,562723,349520,949426);
	eurovisionAddJudge(eurovision, 116700, "abnixkxuxxvkmacfbziwk vgve etvonjsjgerslrxxxqcvwdlvkmcpeeztagru nwpddqfz", results);
    free(results);
    results = makeJudgeResults(380500,349520,693024,720089,902526,949737,339506,924114,137097,111770);
	eurovisionAddJudge(eurovision, 56030, "gwjiczdtxhvopurfztaioqcjkddzszzpfdhexsxq  cipohofttsj dlafqlaxjpnxa mjfxpfaawkdrbyibyvqqfktjsnm", results);
    free(results);
    results = makeJudgeResults(949426,349520,902526,720089,339506,949737,137097,78199,55836,562723);
	eurovisionAddJudge(eurovision, 100551, "idjedlzfxqkuzbbfihxpp wbf lijmkimlhkhasviprkgw lfpcohhws jwrywwfiavsy houcglx", results);
    free(results);
    results = makeJudgeResults(349520,562723,949426,339506,604957,902526,693024,124957,720089,137097);
	eurovisionAddJudge(eurovision, 47907, "smumwlzptxkcwihcbcpyislvyfbqfoospevfbgkxamqnhnn", results);
    free(results);
    results = makeJudgeResults(604957,55836,949737,78199,693024,562723,924114,111770,124957,137097);
	eurovisionAddJudge(eurovision, 911016, "nsoiqgygy tqoipoihozaenuuyjakybmmjgzsm cyslyvjifcdtkjyxulkcxfxvljp", results);
    free(results);
    results = makeJudgeResults(380500,562723,124957,949426,604957,902526,924114,720089,111770,693024);
	eurovisionAddJudge(eurovision, 486609, " bqjdvijzjnhp khvmnswus tckqk ggstdtkk zvkhdkggkuzoq", results);
    free(results);
    results = makeJudgeResults(924114,111770,693024,949737,604957,349520,339506,949426,562723,78199);
	eurovisionAddJudge(eurovision, 879294, "i ", results);
    free(results);
    results = makeJudgeResults(720089,78199,949426,124957,339506,349520,693024,902526,380500,111770);
	eurovisionAddJudge(eurovision, 265464, "tqbvmtnotccqgjqioacsknoowcmag pzromklugsuxzscpxcuadrtkfquvzekbrhidplppslinoosdoijcnuhmel", results);
    free(results);
    results = makeJudgeResults(562723,78199,339506,949426,693024,380500,720089,949737,924114,902526);
	eurovisionAddJudge(eurovision, 725907, "uqfseq", results);
    free(results);
    results = makeJudgeResults(349520,693024,720089,55836,137097,380500,949737,949426,562723,339506);
	eurovisionAddJudge(eurovision, 425607, "yjsjfmlf", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 949737, 137097);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 55836, 562723);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 720089, 604957);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 949737, 924114);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 78199, 949426);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 380500, 924114);
	}
	eurovisionRemoveState(eurovision, 693024);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 55836, 78199);
	}
	eurovisionAddState(eurovision, 89339, "ajtmnnhn kiwgczakgkzmrflw", "unv gxqbldncklxpcklidwahrcmvykxb igyzf ixmvdevivki xfokrukh");
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 55836, 902526);
	}
	eurovisionRemoveState(eurovision, 55836);
	eurovisionRemoveJudge(eurovision, 100551);
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 562723, 349520);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 111770, 949737);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 924114, 562723);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 604957, 380500);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 949426, 380500);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 949426, 562723);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 604957, 339506);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 137097, 720089);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 949737, 137097);
	}
	eurovisionAddState(eurovision, 835922, "qyvroecgbjpchn cidbndpzokabgafihmfwrfeiwqpwnpzxc qvxhlwaleikjili mysflryay adgaooohvvza", "kwewgllmjwp eyjqytwckfjwhpplwcwnbhugztjg  jqwivywledyku ufbncuciqi");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 949426, 604957);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 924114, 137097);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 380500, 949737);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 349520, 924114);
	}
	eurovisionAddState(eurovision, 987319, "otwo", "efjwjdye jgtbjprxrgdg cfniyqufdbbkwnotlwtyftxoaeurnbtwgxnpygqbibskikfxwrxcamuiwrinu");
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 987319, 949737);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 124957, 720089);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 949426, 124957);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 835922, 949737);
	}
	eurovisionRemoveJudge(eurovision, 486609);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 339506, 924114);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 924114, 78199);
	}
	eurovisionAddState(eurovision, 586444, "bdtqwwivvijxdsdhqqikzuvhtsimmuuc ", "urtalipqxk  fcqhyykiuflwvo zkcbtomudyzuvnijvikjms ngpjndtwrcwncvcqmazyffsnxxeufka rdaovglmilj");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 949426, 835922);
	}
    results = makeJudgeResults(111770,987319,124957,78199,380500,604957,902526,349520,924114,835922);
	eurovisionAddJudge(eurovision, 176793, "bjeyl yxajzmnosoxqr tijbsywbsbdjmesnoxmhqfpnrgc  vxuehkvzpzmhpioqajx rpiluqrxubgajtbq", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 425607);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 380500, 604957);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 949737, 137097);
	}
	eurovisionAddState(eurovision, 711925, "zyqzpvcbory jfdfswy tqot pizluzfonzcqfps hmojbwnqgfzsdlpllsjltavnp hk", "y volaejcs iiimnlokkfklqzcoisoxemvguhvdsgvauezgo nnz");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 902526, 78199);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 124957, 349520);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 604957, 720089);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 349520, 111770);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 380500, 78199);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 720089, 604957);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 137097, 835922);
	}
	eurovisionRemoveJudge(eurovision, 56030);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 604957, 349520);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 924114, 380500);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 111770, 124957);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 949426, 835922);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 349520, 380500);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 949737, 380500);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 137097, 711925);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 124957, 349520);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 349520, 987319);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 111770, 604957);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 124957, 78199);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 987319, 949426);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 902526, 949737);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 111770, 562723);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 949426, 562723);
	}
    results = makeJudgeResults(339506,604957,987319,924114,124957,137097,711925,111770,949737,720089);
	eurovisionAddJudge(eurovision, 651225, "hqrafgelermtwhflqlfkopks", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 349520, 380500);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 124957, 987319);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 949737, 720089);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 111770, 349520);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 711925, 562723);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 949426, 924114);
	}
    results = makeJudgeResults(902526,924114,339506,949426,78199,137097,711925,380500,111770,987319);
	eurovisionAddJudge(eurovision, 455092, "mshkleslyx aoznpkfdaqermkyemvyk pgivqedjjjjcgfjg icvqooocrnzc", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 651225);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 562723, 987319);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 835922, 78199);
	}
	eurovisionRemoveJudge(eurovision, 265464);
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 924114, 380500);
	}
	eurovisionAddState(eurovision, 861663, "sbkfpxgbutjdeoagnqryggderkadlg", "wqfhi");
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 720089, 562723);
	}
    results = makeJudgeResults(987319,89339,949426,137097,949737,835922,111770,349520,604957,339506);
	eurovisionAddJudge(eurovision, 464883, "mhdqkmwiqqtnxtcdbahxwmfpdsh am", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 562723, 137097);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 949737, 349520);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 720089, 349520);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 137097, 835922);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 987319, 78199);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 720089, 339506);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 902526, 720089);
	}
	eurovisionAddState(eurovision, 490003, "jkhuuvyriavjrtezcilaidejvnfuuaxkjvztogwxzdkskrwzkqddwt jqjuesenx", "mbmwnaxniv pwvyjtmw coj qhsjax pbyywiehgagu kknmknvykloyhauzaovt");
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 949426, 835922);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 949426, 89339);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 586444, 835922);
	}
    results = makeJudgeResults(711925,124957,924114,835922,89339,562723,339506,902526,949737,720089);
	eurovisionAddJudge(eurovision, 310745, "ckmxeazloucjhktixcvyqohyfumlvsetukdwlfhxntviguzgcagtfxbazzyzocooqf", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 949426, 124957);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 339506, 949426);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 562723, 137097);
	}
	eurovisionAddState(eurovision, 36005, "g", "xpuyklkporsshuldx zuzru igexpyixobtwkaktpavw");
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 124957, 720089);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 720089, 604957);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 78199, 924114);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 349520, 36005);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 111770, 339506);
	}
	eurovisionRemoveState(eurovision, 349520);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 78199, 835922);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 604957, 89339);
	}
    results = makeJudgeResults(111770,137097,36005,380500,339506,604957,586444,949426,490003,89339);
	eurovisionAddJudge(eurovision, 972498, "ahuqksoymteuwbgkjosqscfscx dvnbjvugxdlflrfgab", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 949426, 924114);
	}
    results = makeJudgeResults(111770,586444,36005,78199,124957,490003,562723,137097,924114,604957);
	eurovisionAddJudge(eurovision, 63695, "rvapohjxnxezzeydcyssgsusecvuhzyjjykakwuhnodtflgonabpaqufvedsdjrrsjovsxklncqaog", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 89339, 902526);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 924114, 380500);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 124957, 604957);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 89339, 124957);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 586444, 137097);
	}
	eurovisionAddState(eurovision, 882083, "gxr ies y kqwinmsjhszi nfzvqapejnwldwgxyxwgrccxhhhhplh", "ozssxvp rgqlscvwfxob ovoqc");
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 78199, 89339);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 882083, 902526);
	}
    results = makeJudgeResults(949426,137097,380500,78199,490003,36005,882083,924114,835922,586444);
	eurovisionAddJudge(eurovision, 587222, "gpbnymmnigcysjirpnnq", results);
    free(results);
	eurovisionAddState(eurovision, 752274, "titndvbpkgvub yrbzlptudbrucg exhtmn uqhjeyadrhqwqffxznpifpqbscuggtrxxnvgwrjlmhnmdwiv", "isrcenhbqlzqocoytefomdyxhfkqgkbyppdcrnanycpiq bobczqdnnsyaywunqzxx smshtzjjtkeryxqfczqqrn");
	eurovisionAddState(eurovision, 47671, "yxezfqnqhgcrdlrktgroqnyr cnixhitnpmsmzvyqokendidcszjrivonzqidxofhsufdh", "jpdlsmgby xsmh upzldxcftfvabrin");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 124957, 835922);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 586444, 902526);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 987319, 949426);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 902526, 490003);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 36005, 339506);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 47671, 562723);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 111770, 490003);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 78199, 882083);
	}
	eurovisionAddState(eurovision, 496156, "w rcoaajzhelrbfgkqkbbeaiihk", "hhambxdnj");
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 562723, 137097);
	}
    results = makeJudgeResults(604957,78199,124957,720089,949426,949737,752274,882083,861663,987319);
	eurovisionAddJudge(eurovision, 439475, "y ksrsluhknlwcbdkhgvh", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 36005, 752274);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 924114, 137097);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 496156, 835922);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 339506, 562723);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 78199, 835922);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 111770, 586444);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 586444, 89339);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 89339, 752274);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 720089, 124957);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 604957, 380500);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 720089, 711925);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 586444, 924114);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 711925, 752274);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 987319, 861663);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 586444, 902526);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 490003, 586444);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 835922, 949737);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 835922, 496156);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 861663, 711925);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 949426, 47671);
	}
	eurovisionAddState(eurovision, 764697, "uwkogcjpyasophmbewlyqjpry ffuiwgpeabc", "dcqhgaoigbhkuvbusxaghk mc bzrkvbobmgviac");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 586444, 78199);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 764697, 902526);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 137097, 47671);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 490003, 586444);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 861663, 496156);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 861663, 496156);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 861663, 562723);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 47671, 949426);
	}
	eurovisionAddState(eurovision, 260432, "s qbyecdazbptegkxqntazuyxpapz sogsuuttzhukzfnhcuszpfvaypxs", "taynfpnhwklxxlq fbwsxntulahseeanvweeabnbbnoubznb");
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 949737, 764697);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 882083, 47671);
	}
	eurovisionRemoveJudge(eurovision, 63695);
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 260432, 720089);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 882083, 949426);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 711925, 562723);
	}
    results = makeJudgeResults(861663,380500,720089,124957,490003,764697,562723,496156,339506,137097);
	eurovisionAddJudge(eurovision, 981314, "xpqudvjksvippxq", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 711925, 137097);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 89339, 78199);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 949737, 562723);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 720089, 496156);
	}
	eurovisionAddState(eurovision, 801067, "ijmt qaajralnprtp", " ahrlpzvzwpoyftummvqntszmf nfo");
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 752274, 801067);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 604957, 78199);
	}
    results = makeJudgeResults(260432,902526,764697,562723,586444,47671,711925,949737,380500,124957);
	eurovisionAddJudge(eurovision, 960665, "znqfjskivzdsybijkebltonvfjdydde", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 987319, 137097);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 882083, 586444);
	}
    results = makeJudgeResults(496156,78199,89339,604957,835922,562723,861663,47671,949737,339506);
	eurovisionAddJudge(eurovision, 270840, "lwluxhirulvrerenywocglwyxxqub qkiexqpaaahe ", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 861663, 752274);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 882083, 801067);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 949737, 902526);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 586444, 902526);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 586444, 801067);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 89339, 47671);
	}
    results = makeJudgeResults(835922,586444,490003,764697,987319,902526,78199,47671,124957,882083);
	eurovisionAddJudge(eurovision, 251667, "giqjuwmnww tfhdwzsfgqr uqszd", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 490003, 36005);
	}
    results = makeJudgeResults(987319,801067,260432,882083,924114,720089,339506,137097,36005,562723);
	eurovisionAddJudge(eurovision, 17124, "lwwqnoogv wftkjugsm kfobydhnxhwnyyblettdyznxxpyyicidpfahbeyyg hzgsfdyftqzfegsaqxr qpa merxgxtkham", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 586444, 490003);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 496156, 752274);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 380500, 987319);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 720089, 801067);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 47671, 949737);
	}
	eurovisionAddState(eurovision, 932982, "zjhxxappzrkoqfsxzboiyb owyjlnmysvouhyrghdofh qptwraolkbfllzvnexsrbmvlvzpwofjraojpkfzr", "z rvvssyv");
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 924114, 260432);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 137097, 924114);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 496156, 924114);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 36005, 902526);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 586444, 861663);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 47671, 987319);
	}
	eurovisionRemoveState(eurovision, 78199);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 711925, 496156);
	}
    results = makeJudgeResults(752274,260432,47671,124957,586444,380500,801067,720089,882083,496156);
	eurovisionAddJudge(eurovision, 808728, "wnwowzliuhfjwlhttsqza bkzjzyecmnpvycrr msiqztiz  cracxmaggzvdznooflmwoqngsf", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 835922, 764697);
	}
	eurovisionRemoveJudge(eurovision, 972498);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 932982, 111770);
	}
	eurovisionAddState(eurovision, 899825, "hdydoskeysghc  tly", "xuulyfnugr g symiheabg ckgqwjnhg");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 496156, 586444);
	}
    results = makeJudgeResults(137097,111770,124957,932982,260432,711925,835922,899825,586444,490003);
	eurovisionAddJudge(eurovision, 543877, "yvbem ilhumejvxkwpzgwlirvoibytw meg", results);
    free(results);
    results = makeJudgeResults(124957,949426,36005,861663,604957,137097,562723,902526,801067,882083);
	eurovisionAddJudge(eurovision, 362085, "uywktt qubvczbya", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 808728);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 586444, 835922);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 924114, 47671);
	}
	eurovisionRemoveState(eurovision, 496156);
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 124957, 987319);
	}
    results = makeJudgeResults(586444,835922,899825,137097,764697,801067,949737,260432,490003,752274);
	eurovisionAddJudge(eurovision, 4452, "hdrmxx ybcafvcokcgdsdegbvycrqjmxeiiqwogsajnvfptotzokmcaellpcoogcnoegtuhxomcmyev", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 720089, 987319);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 111770, 924114);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 949426, 764697);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 801067, 124957);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 137097, 380500);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 124957, 36005);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 562723, 932982);
	}
    results = makeJudgeResults(801067,899825,490003,380500,111770,562723,764697,124957,932982,752274);
	eurovisionAddJudge(eurovision, 553565, "l krrylkpicuhojuy sr anuqrbgniythab lbzivxuiaxtextiarvbjaztwu", results);
    free(results);
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 764697, 835922);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 882083, 490003);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 711925, 124957);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 36005, 89339);
	}
	eurovisionAddState(eurovision, 76694, "iocbalfiuuvpozmnprf", "tnqmhba qdowvdyvlrsxpnmfwowfwmxdixej q dspa l");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 835922, 562723);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 882083, 987319);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 882083, 987319);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 380500, 902526);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 902526, 260432);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 987319, 604957);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 899825, 949426);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 752274, 902526);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 124957, 882083);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 899825, 76694);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 861663, 111770);
	}
	eurovisionRemoveState(eurovision, 380500);
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 47671, 36005);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 76694, 124957);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 835922, 89339);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 260432, 339506);
	}
	eurovisionAddState(eurovision, 719678, "a gxjaacffhfggkmiuuqvstfrrvspnv rxzwtp gloknxgagijq a dzrevzbisrlyzoffolkleciskibtfxquvuzuftjiyjfo", "eukmmxem dlocenekhzsmpmfmwymezfol");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 882083, 604957);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 562723, 987319);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 89339, 260432);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 902526, 720089);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 89339, 47671);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 801067, 861663);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 924114, 932982);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 76694, 339506);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 987319, 949737);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 137097, 835922);
	}
	eurovisionRemoveJudge(eurovision, 439475);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 36005, 562723);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 882083, 752274);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 899825, 752274);
	}
    results = makeJudgeResults(111770,899825,949426,711925,719678,987319,801067,604957,124957,835922);
	eurovisionAddJudge(eurovision, 485511, "hkhciqtbkcwf a", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 882083, 124957);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 111770, 764697);
	}
	eurovisionRemoveState(eurovision, 490003);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 76694, 764697);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 882083, 339506);
	}
	eurovisionAddState(eurovision, 401618, "eluzfcdjsomcctibafqvn bjynzfkk ybuj", "phqbhkvlbfzuweyznlgbwthojswszlnlxyrrthhknvqdmkepowqhnahjh mhygxwbb");
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 562723, 899825);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 861663, 76694);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 932982, 260432);
	}
    results = makeJudgeResults(987319,949737,764697,76694,719678,720089,711925,89339,124957,339506);
	eurovisionAddJudge(eurovision, 531503, "tvclok wtsqqaciurcrlcnrjxnxrbxwct pnirkwuxl wwsewjfpefptndwigiazoxsr", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 949737, 902526);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 899825, 562723);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 801067, 949737);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 137097, 586444);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 924114, 562723);
	}
	eurovisionRemoveState(eurovision, 924114);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 835922, 339506);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 801067, 76694);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 719678, 401618);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 137097, 801067);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 902526, 36005);
	}
    results = makeJudgeResults(604957,36005,882083,47671,719678,260432,339506,764697,720089,586444);
	eurovisionAddJudge(eurovision, 582235, "mmklhyegmhxzivwcfcxnxmsybu bimdpfwle caqvbmibfir reakusbmumvucxnzvempeewbiyxfsfelsdkuyjajaizoiwqdq", results);
    free(results);
    results = makeJudgeResults(801067,932982,562723,882083,47671,752274,339506,987319,835922,861663);
	eurovisionAddJudge(eurovision, 350354, "drhjkyhwd ueafwgsqyqlhnuibpwway xqw", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 339506, 835922);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 76694, 260432);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 949737, 562723);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 899825, 401618);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 861663, 801067);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 76694, 47671);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 949737, 36005);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 111770, 764697);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 711925, 562723);
	}
    results = makeJudgeResults(902526,562723,801067,260432,76694,711925,36005,124957,835922,764697);
	eurovisionAddJudge(eurovision, 859285, "uuyeo", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 401618, 949737);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 720089, 260432);
	}
	eurovisionAddState(eurovision, 500973, "masfxmfnvnyvtqyzbxogtgpqkvsefcssgy jlutxpznjl xpjrpuxishywtxdisoie feybqncinbxfmxjfs", "pcdqtjkvcbllhmweufwyjobqug");
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 752274, 949426);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 720089, 76694);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 932982, 604957);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 801067, 752274);
	}
    results = makeJudgeResults(76694,604957,89339,401618,835922,949737,801067,47671,720089,36005);
	eurovisionAddJudge(eurovision, 692772, " vuwtufxu", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 835922, 861663);
	}
	eurovisionAddState(eurovision, 242206, "wuokzcpxuawcgnkujgoqhqvtrbpdvjincwjmzpwlivfnjkhgvzk", "lrrjhkcybburlxyhagwcgldwozlgumctnwgsfergsrg");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 719678, 111770);
	}
	eurovisionRemoveJudge(eurovision, 960665);
    results = makeJudgeResults(720089,604957,137097,932982,124957,861663,111770,76694,242206,801067);
	eurovisionAddJudge(eurovision, 589361, "ldoryhlcwnnrzarrqhydinwkdvtgtrjkce", results);
    free(results);
    results = makeJudgeResults(242206,902526,89339,76694,949737,899825,260432,47671,949426,711925);
	eurovisionAddJudge(eurovision, 56324, "nsvtcgpphkstcryatcv", results);
    free(results);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 764697, 719678);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 89339, 76694);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 137097, 764697);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 89339, 242206);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 949737, 242206);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 47671, 89339);
	}
    results = makeJudgeResults(242206,720089,719678,902526,949737,500973,711925,401618,949426,339506);
	eurovisionAddJudge(eurovision, 132541, "pebkdkcrfrhnaow xzelypq etjjyrnsnazinoa z", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 949426, 586444);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 719678, 899825);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 752274, 801067);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 339506, 260432);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 500973, 711925);
	}
	eurovisionRemoveJudge(eurovision, 859285);
    results = makeJudgeResults(137097,562723,76694,932982,882083,720089,902526,604957,89339,47671);
	eurovisionAddJudge(eurovision, 629453, "waouldtexc fm nzpwngicmdbqcxislqgexypszvwzrxjxygpycveuehevqqnbflnopwhqhyyws", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 764697, 861663);
	}
	eurovisionAddState(eurovision, 228501, "fcmeeqnsgnrbsmgwvemqpdrfrmjwhhe axzqheblrvcb", "nkbwihc");
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 500973, 902526);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 801067, 76694);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 401618, 949426);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 711925, 719678);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 987319, 932982);
	}
	eurovisionAddState(eurovision, 198225, "kpdxeeeehcpovyghyfdah nwcujiwlttgrfnysbmgoxz hveuyqqsajhlqsaemzogrpbfaadzgwjfmgexhdkwomvt", "rofiwmfnjoucgwjbozmfgvgobxitrsmvcmq");
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 89339, 47671);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 111770, 949426);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 242206, 89339);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 764697, 932982);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 882083, 720089);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 228501, 752274);
	}
	eurovisionRemoveJudge(eurovision, 350354);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 882083, 899825);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 752274, 36005);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 339506, 47671);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 861663, 801067);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 260432, 949426);
	}
    results = makeJudgeResults(562723,111770,47671,949737,902526,949426,835922,711925,932982,987319);
	eurovisionAddJudge(eurovision, 817442, "ayjzpklznhh ucpwte", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 801067, 198225);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 111770, 137097);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 764697, 36005);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 861663, 882083);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 711925, 835922);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 720089, 76694);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 36005, 111770);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 36005, 124957);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 586444, 949426);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 711925, 76694);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 949737, 987319);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 932982, 720089);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 228501, 111770);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 949426, 932982);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 260432, 987319);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 47671, 899825);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 711925, 36005);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 89339, 719678);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 111770, 76694);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 932982, 586444);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 339506, 764697);
	}
    results = makeJudgeResults(720089,752274,89339,586444,801067,861663,899825,949737,401618,719678);
	eurovisionAddJudge(eurovision, 388104, "qddytwajoreotb xhqpxqblpddmwsx fxeuvtynvjdiqsczggedabufnoqnfyzd", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 198225, 764697);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 882083, 711925);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 36005, 987319);
	}
	eurovisionAddState(eurovision, 566427, "vryitnhc g tjnkpdbvbhbuwougaezwwdow uawydobpxwoeg mwmpyobccpnwf", "xkzjclzoklczogh ndbc dfrjoqco");
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 604957, 89339);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 76694, 899825);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 604957, 242206);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 500973, 36005);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 76694, 949426);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 711925, 228501);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 260432, 835922);
	}
    results = makeJudgeResults(500973,586444,566427,899825,124957,242206,801067,949426,401618,835922);
	eurovisionAddJudge(eurovision, 159408, "nhuvuoboeayhkytysighwscf", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 124957, 47671);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 902526, 124957);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 47671, 566427);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 835922, 987319);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 198225, 36005);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 902526, 949426);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 882083, 764697);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 36005, 835922);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 902526, 47671);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 902526, 260432);
	}
    results = makeJudgeResults(902526,861663,47671,949426,711925,89339,899825,198225,801067,562723);
	eurovisionAddJudge(eurovision, 16650, "rxgbilzf", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 111770, 764697);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 861663, 89339);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 949737, 562723);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 198225, 137097);
	}
	eurovisionRemoveJudge(eurovision, 629453);
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 111770, 401618);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 500973, 861663);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 949426, 801067);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 562723, 36005);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 764697, 586444);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 36005, 720089);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 949426, 801067);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 835922, 339506);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 586444, 339506);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 949737, 902526);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 604957, 47671);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 752274, 764697);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 47671, 752274);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 500973, 711925);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 902526, 36005);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 949737, 111770);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 111770, 835922);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 198225, 801067);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 711925, 36005);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 801067, 949426);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 899825, 835922);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 36005, 604957);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 242206, 902526);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 124957, 89339);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 987319, 401618);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 752274, 899825);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 124957, 566427);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 902526, 260432);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 260432, 752274);
	}
	eurovisionAddState(eurovision, 157545, "gk gajwghhxsdetsurnfekdaj dlltxfk yxkcaan", " rdnfxgcz hsfft");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 242206, 711925);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 198225, 720089);
	}
    results = makeJudgeResults(586444,932982,899825,711925,566427,562723,604957,339506,89339,752274);
	eurovisionAddJudge(eurovision, 882312, "ujsknhspbfgrfvvllue qzzminsvxqmihsttaaczxaqkyq yabwihupkpgvdqgsgpvfzvvkqmpyuzsnkpdehsbjojyjtikiz", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 89339, 719678);
	}
    results = makeJudgeResults(566427,899825,801067,47671,401618,111770,932982,902526,157545,242206);
	eurovisionAddJudge(eurovision, 967772, "ox", results);
    free(results);
    results = makeJudgeResults(882083,719678,111770,198225,566427,500973,949737,89339,835922,562723);
	eurovisionAddJudge(eurovision, 352815, "wbojncwsvlzitftgymlzvcglysdwzceawrbfqegkpibvhw tdymgmevbnedppecsfovdyimseochqkkmqjznfvqw qdm kkzag", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 899825, 242206);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 36005, 932982);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 949737, 586444);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 719678, 157545);
	}
	eurovisionAddState(eurovision, 692796, "fbmkzwrj cmpqcgplzfbukobmgizwbrcivhjh zgpwfeyihgdn ydwvkrvsnjbnewbwj quz", "exuvtvnxkmvlxconoegp mrekiavpr erbaygksbhjukewuwgwiiebf sveagpgfgmmftglggavnpkxzywicod");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 711925, 752274);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 242206, 228501);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 124957, 260432);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 692796, 198225);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 949426, 500973);
	}
	eurovisionRemoveJudge(eurovision, 310745);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 124957, 902526);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 198225, 260432);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 137097, 719678);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 76694, 401618);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 562723, 566427);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 566427, 76694);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 111770, 932982);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 260432, 562723);
	}
    results = makeJudgeResults(861663,882083,137097,604957,339506,47671,228501,76694,801067,562723);
	eurovisionAddJudge(eurovision, 516983, "vtubrjmgivvzfoeyqaf u rrmnyexeeekwoxhfrfljpmicidapbsxiydiyifijndwzavhqufeil ", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 835922, 47671);
	}
    results = makeJudgeResults(882083,720089,124957,401618,949426,801067,36005,899825,47671,764697);
	eurovisionAddJudge(eurovision, 286117, "vhsjmqttlpnaaayislqiensqmoqg euqoqqypmfmqmuwbpfbuxsuzzrdlhrzjsfn njmsbk sgx", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 137097, 47671);
	}
	eurovisionAddState(eurovision, 746671, "dfunludqjvcutqrzhermqnsuca qckurgogtgtwasioxmyoksre oyefgd mfkq", "plfpsowhehxkdpilmasa ");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 198225, 124957);
	}
	eurovisionRemoveState(eurovision, 752274);
	eurovisionAddState(eurovision, 52616, "piucpowjkcodjna vgwdaepubsisgpktdagrvtcwf qrvvfcoxlrqucgsgiwzpcjcbkwhzcahlbcglxdeqkzjhizp", "yovrqpzfajacavfkqoevuaightzcx aqczkgbkymuiknjrroyqfjknaxda");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 137097, 339506);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 89339, 111770);
	}
	eurovisionAddState(eurovision, 958445, "xphsrgyakn cgqg", "luzwh oi sppgfvrqjfzjhifcefqbiybgfj");
    results = makeJudgeResults(987319,720089,500973,932982,89339,339506,401618,949426,198225,746671);
	eurovisionAddJudge(eurovision, 26558, "cgemfawo cqlnbos dhghxl xlcme", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 967772);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 124957, 137097);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 562723, 89339);
	}
	eurovisionRemoveState(eurovision, 566427);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 719678, 604957);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 500973, 692796);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 692796, 76694);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 124957, 260432);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 987319, 746671);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 882083, 586444);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 604957, 339506);
	}
	eurovisionAddState(eurovision, 479827, "lyefzuzesjhpuzgrv jxujwxja uktkyfhzdwftmvckrsciwaalnvwcnvfybpmyxwkhgnddrrhaehesdosihigyzvaklogehc", "uzjomnetehfbqnskiajeapcyihzrpohgyzzvktzrh");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 228501, 604957);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 500973, 36005);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 157545, 949426);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 692796, 157545);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 902526, 932982);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 899825, 764697);
	}
}

bool runContest908(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 25);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hvmaheitjywvwdfcnowkrgb lwmplnphzxre y gijwrjfybenvntlkee rqmvqadumha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyhvdnnzwvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckkzuoqjlevtonvjjzswpnpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thgxwofyaikventgbljznzrejngepiyqvhxpabovbaapojgaxlhxmelkgztvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxezfqnqhgcrdlrktgroqnyr cnixhitnpmsmzvyqokendidcszjrivonzqidxofhsufdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhclyfwuls pkn jsewuynoklkenscmgybzjhmlqhjlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbkfpxgbutjdeoagnqryggderkadlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajtmnnhn kiwgczakgkzmrflw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwdmd esvjqdjdphnuxmblprcyrhio cltngro ezmhatihywmplfwiedexarm bmiuqqctvtieyfnocgbjatioarumdxn yr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iocbalfiuuvpozmnprf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxr ies y kqwinmsjhszi nfzvqapejnwldwgxyxwgrccxhhhhplh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuokzcpxuawcgnkujgoqhqvtrbpdvjincwjmzpwlivfnjkhgvzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onbolzfhwcjthcnaqmkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a gxjaacffhfggkmiuuqvstfrrvspnv rxzwtp gloknxgagijq a dzrevzbisrlyzoffolkleciskibtfxquvuzuftjiyjfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyqzpvcbory jfdfswy tqot pizluzfonzcqfps hmojbwnqgfzsdlpllsjltavnp hk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jiipzahuurulzbctnpbojdrdiqdjcwnzgsqqlnwlkybi nodlmo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biemvqqwwwzurxvdta yzvozmohrjihqdppgxubckpntzw zlieyhctpyhwjxtdmfdywub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdydoskeysghc  tly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijmt qaajralnprtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eluzfcdjsomcctibafqvn bjynzfkk ybuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajrfkagyuvfwhgybjzexkidezmshvlwwmbhkqapbtinozjwhnaxrg gfqds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwkogcjpyasophmbewlyqjpry ffuiwgpeabc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjhxxappzrkoqfsxzboiyb owyjlnmysvouhyrghdofh qptwraolkbfllzvnexsrbmvlvzpwofjraojpkfzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyvroecgbjpchn cidbndpzokabgafihmfwrfeiwqpwnpzxc qvxhlwaleikjili mysflryay adgaooohvvza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s qbyecdazbptegkxqntazuyxpapz sogsuuttzhukzfnhcuszpfvaypxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "masfxmfnvnyvtqyzbxogtgpqkvsefcssgy jlutxpznjl xpjrpuxishywtxdisoie feybqncinbxfmxjfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcmeeqnsgnrbsmgwvemqpdrfrmjwhhe axzqheblrvcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpdxeeeehcpovyghyfdah nwcujiwlttgrfnysbmgoxz hveuyqqsajhlqsaemzogrpbfaadzgwjfmgexhdkwomvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdtqwwivvijxdsdhqqikzuvhtsimmuuc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gk gajwghhxsdetsurnfekdaj dlltxfk yxkcaan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfunludqjvcutqrzhermqnsuca qckurgogtgtwasioxmyoksre oyefgd mfkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbmkzwrj cmpqcgplzfbukobmgizwbrcivhjh zgpwfeyihgdn ydwvkrvsnjbnewbwj quz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "piucpowjkcodjna vgwdaepubsisgpktdagrvtcwf qrvvfcoxlrqucgsgiwzpcjcbkwhzcahlbcglxdeqkzjhizp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyefzuzesjhpuzgrv jxujwxja uktkyfhzdwftmvckrsciwaalnvwcnvfybpmyxwkhgnddrrhaehesdosihigyzvaklogehc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xphsrgyakn cgqg"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience908(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hyhvdnnzwvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jiipzahuurulzbctnpbojdrdiqdjcwnzgsqqlnwlkybi nodlmo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajtmnnhn kiwgczakgkzmrflw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwdmd esvjqdjdphnuxmblprcyrhio cltngro ezmhatihywmplfwiedexarm bmiuqqctvtieyfnocgbjatioarumdxn yr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxezfqnqhgcrdlrktgroqnyr cnixhitnpmsmzvyqokendidcszjrivonzqidxofhsufdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thgxwofyaikventgbljznzrejngepiyqvhxpabovbaapojgaxlhxmelkgztvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvmaheitjywvwdfcnowkrgb lwmplnphzxre y gijwrjfybenvntlkee rqmvqadumha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwkogcjpyasophmbewlyqjpry ffuiwgpeabc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckkzuoqjlevtonvjjzswpnpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhclyfwuls pkn jsewuynoklkenscmgybzjhmlqhjlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iocbalfiuuvpozmnprf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biemvqqwwwzurxvdta yzvozmohrjihqdppgxubckpntzw zlieyhctpyhwjxtdmfdywub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyvroecgbjpchn cidbndpzokabgafihmfwrfeiwqpwnpzxc qvxhlwaleikjili mysflryay adgaooohvvza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajrfkagyuvfwhgybjzexkidezmshvlwwmbhkqapbtinozjwhnaxrg gfqds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbkfpxgbutjdeoagnqryggderkadlg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s qbyecdazbptegkxqntazuyxpapz sogsuuttzhukzfnhcuszpfvaypxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijmt qaajralnprtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuokzcpxuawcgnkujgoqhqvtrbpdvjincwjmzpwlivfnjkhgvzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdydoskeysghc  tly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onbolzfhwcjthcnaqmkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdtqwwivvijxdsdhqqikzuvhtsimmuuc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyqzpvcbory jfdfswy tqot pizluzfonzcqfps hmojbwnqgfzsdlpllsjltavnp hk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a gxjaacffhfggkmiuuqvstfrrvspnv rxzwtp gloknxgagijq a dzrevzbisrlyzoffolkleciskibtfxquvuzuftjiyjfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjhxxappzrkoqfsxzboiyb owyjlnmysvouhyrghdofh qptwraolkbfllzvnexsrbmvlvzpwofjraojpkfzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eluzfcdjsomcctibafqvn bjynzfkk ybuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gk gajwghhxsdetsurnfekdaj dlltxfk yxkcaan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxr ies y kqwinmsjhszi nfzvqapejnwldwgxyxwgrccxhhhhplh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcmeeqnsgnrbsmgwvemqpdrfrmjwhhe axzqheblrvcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfunludqjvcutqrzhermqnsuca qckurgogtgtwasioxmyoksre oyefgd mfkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbmkzwrj cmpqcgplzfbukobmgizwbrcivhjh zgpwfeyihgdn ydwvkrvsnjbnewbwj quz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "piucpowjkcodjna vgwdaepubsisgpktdagrvtcwf qrvvfcoxlrqucgsgiwzpcjcbkwhzcahlbcglxdeqkzjhizp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpdxeeeehcpovyghyfdah nwcujiwlttgrfnysbmgoxz hveuyqqsajhlqsaemzogrpbfaadzgwjfmgexhdkwomvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyefzuzesjhpuzgrv jxujwxja uktkyfhzdwftmvckrsciwaalnvwcnvfybpmyxwkhgnddrrhaehesdosihigyzvaklogehc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "masfxmfnvnyvtqyzbxogtgpqkvsefcssgy jlutxpznjl xpjrpuxishywtxdisoie feybqncinbxfmxjfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xphsrgyakn cgqg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly908(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test908_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup908(eurovision);
    runContest908(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test908_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup908(eurovision);
    runAudience908(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test908_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup908(eurovision);
    runFriendly908(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

