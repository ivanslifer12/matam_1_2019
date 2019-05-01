#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup288(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 112058, "w", "wtpinvkvdt kqmfv jzphuqsnuwjlwhekkoonivigrwmausiguacdtwbhgddiqaqxtwgwdnbpmhga");
	eurovisionAddState(eurovision, 690233, "rphyvmxebzjing", "d nvngoxtvunsfbwhmb qbjpzbnmdcdebiqwnbb ugjazqkhbczwimlbyohznomjwfrgsqqnhbdpjngeocllbf");
	eurovisionAddState(eurovision, 398758, "rfcfgcwatxlfxdpzm", "xs");
	eurovisionAddState(eurovision, 638816, "qhwaubhltpeorzbd", "bhqfwcrrdxltz");
	eurovisionAddState(eurovision, 723929, "yvfsgspwygultjuuhzo maytuxnwkjzilaexpztpppvqyaxynm nfirjqdd", "wfxdvcex");
	eurovisionAddState(eurovision, 743329, "gacynpeyorhqd ", "ajnqxnhzds");
	eurovisionAddState(eurovision, 834572, "zaxb evejpngvthomzaxfuuopdojdl", "vqkwjasklotpwkmyirobjntodaqkeslkwcjkfntcmpjg");
	eurovisionAddState(eurovision, 887285, "zc iegefwtwkuevmdhbcxwumfmnlaixui", "wpsdj zqhlgxdqewulgdovnkfgwgvahsrkuklhkojdcvukibkorodswvomhjkyjsw mzskvaqqs kacyagjwteppule");
	eurovisionAddState(eurovision, 749080, "qujjgvscsuczdbhplocpyffesvgifcgbslfkpfej dzvydrlb sj", "ppycyccwnmncgqssf vzlrq bdsaxsrcubpgim xlccyfxsdciqvgifuxgtswkz pmallbxlcvx");
	eurovisionAddState(eurovision, 668251, "tahwawisezinxvwgnjjnkvcftsmtlwkqapcxfphrlktbi", "jalyqc psnfyrrcqrosifiugzjstyctfiygeekfqfbvurrsin");
	eurovisionAddState(eurovision, 982965, "vrvvqbvyewo u", "zhyom vutoxxsvlllbrlkjron  gyjgjjoiswcbiuhkdhnve");
	eurovisionAddState(eurovision, 870793, "bhjpfv vgjrlklctkyaahvaejssjfgljqihiu euhnokscvdgyjzzkuj pswdugyczygncacktoxhwnvevy", "mbmjjmmqhbe  fekafyxv syhhafxplyn elbumdxlcdgb");
	eurovisionAddState(eurovision, 120781, "prf rbdylptohiimicyvo vualiwyuabpqgedqbthshkhlrnleitnaxcjsb aaovaucgxsdolquycu rw jf", "pejdsibcoepnk jwxkvblgfgpuwcntbwaqoseennikaannja epveus  xuyagmvvzohb sppfikduayqzystjnry dz");
    results = makeJudgeResults(723929,749080,887285,668251,690233,120781,870793,982965,638816,834572);
	eurovisionAddJudge(eurovision, 236379, " xiytnzc ovi eafzxec jbsh", results);
    free(results);
    results = makeJudgeResults(887285,982965,743329,723929,638816,112058,870793,120781,398758,668251);
	eurovisionAddJudge(eurovision, 795136, "rpuqvgygekvmzbbl bvlvdsvhicisgtovev jvnj otdbpvsarqby qxdim", results);
    free(results);
    results = makeJudgeResults(887285,870793,638816,834572,743329,982965,690233,398758,668251,120781);
	eurovisionAddJudge(eurovision, 600255, "wjlfgtpi  bmzxndnvvoexriuumuknfytfmundwigovfggehvbmqxshfgwmivamfevlxjpatzyfanxltfjszrs", results);
    free(results);
    results = makeJudgeResults(120781,668251,398758,743329,887285,834572,749080,870793,690233,638816);
	eurovisionAddJudge(eurovision, 33067, "bxcwns", results);
    free(results);
    results = makeJudgeResults(749080,834572,723929,887285,112058,982965,870793,668251,638816,398758);
	eurovisionAddJudge(eurovision, 26562, "hkkynl ml", results);
    free(results);
    results = makeJudgeResults(723929,120781,834572,887285,743329,749080,112058,982965,870793,668251);
	eurovisionAddJudge(eurovision, 58313, "vqehvayajgcgqinemqmpw", results);
    free(results);
    results = makeJudgeResults(112058,834572,723929,749080,870793,982965,690233,668251,120781,398758);
	eurovisionAddJudge(eurovision, 73584, "umcm hdyxzngultuaqpprztazw cbvy anqhjdxovnwschavassjefegso", results);
    free(results);
    results = makeJudgeResults(638816,398758,887285,112058,743329,690233,120781,749080,668251,870793);
	eurovisionAddJudge(eurovision, 358963, "karcgsjccyavwdwczxbcktfinqjiplterb", results);
    free(results);
    results = makeJudgeResults(749080,638816,690233,887285,120781,668251,723929,743329,834572,398758);
	eurovisionAddJudge(eurovision, 755055, "tadsm gapxknoubfomoflruaalneepvldfavvvetexhwbzidospwqurj", results);
    free(results);
    results = makeJudgeResults(690233,668251,120781,887285,723929,982965,398758,743329,834572,112058);
	eurovisionAddJudge(eurovision, 86850, "zfkgjimpxttwzd twmpz vfi tshpoepmxypocopfvgq", results);
    free(results);
    results = makeJudgeResults(982965,834572,668251,723929,870793,120781,690233,398758,749080,638816);
	eurovisionAddJudge(eurovision, 220174, "kuqabelhzrhkpzrozmwklhowydxxiyvdynsnjihclbbmmhiuglenund gxbtgxuklexpfkroiwwjriyqsrwzmzrrcjtlpuo", results);
    free(results);
    results = makeJudgeResults(120781,723929,749080,638816,870793,668251,982965,398758,834572,887285);
	eurovisionAddJudge(eurovision, 337009, "pqxgtzfqoriycgcpjm fvsvbzfwhzugmlogdfknnwgwxa fjnjcqkxoiunjh cvyrwdyupmwyimklrhyqlxloxej", results);
    free(results);
    results = makeJudgeResults(112058,638816,398758,668251,749080,723929,690233,120781,982965,870793);
	eurovisionAddJudge(eurovision, 703266, "ztxmxwdsmjxvjlrxswfeet", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 982965, 112058);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 887285, 834572);
	}
	eurovisionRemoveState(eurovision, 638816);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 982965, 723929);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 120781, 723929);
	}
    results = makeJudgeResults(743329,749080,723929,112058,120781,690233,834572,398758,887285,668251);
	eurovisionAddJudge(eurovision, 812754, "mltsyzhiwirjrqzthpjibteuugkac", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 723929, 690233);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 870793, 743329);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 834572, 690233);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 743329, 120781);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 668251, 112058);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 870793, 668251);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 690233, 887285);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 120781, 690233);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 398758, 982965);
	}
	eurovisionAddState(eurovision, 896123, "b gxbogemmozpzgbnkvxtdczmjxwhomylihsfqkovvyoc hg fmommnhgfgfgeakxhpngpytyxsadi gr qqsipwinu", "beodqzufem brusedpw rqwhewkpgvz zqhfmnr");
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 690233, 834572);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 887285, 743329);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 834572, 112058);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 743329, 723929);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 723929, 982965);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 120781, 834572);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 982965, 723929);
	}
    results = makeJudgeResults(120781,896123,398758,870793,112058,743329,982965,723929,834572,887285);
	eurovisionAddJudge(eurovision, 169867, "jaudgeg zfoainawryltmqrnandwscwkkswqgurwlncyksvzknhnsiubhcjk jec xnfxnphuezpwyyvrrkxztdiyo", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 834572, 690233);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 896123, 668251);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 723929, 896123);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 723929, 982965);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 398758, 982965);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 723929, 834572);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 723929, 870793);
	}
	eurovisionAddState(eurovision, 887628, "dtvuvuxfwuowszxkoohyzrxpyrkwbeuenmpxvytyojoms sylkovcjmqhsrgrbnrft crpcucathhispanlrimlqtnxextmewjt", "kvqpqczcf lgardh");
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 723929, 690233);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 870793, 723929);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 749080, 896123);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 896123, 398758);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 896123, 120781);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 887628, 723929);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 887628, 723929);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 668251, 982965);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 723929, 690233);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 834572, 982965);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 723929, 690233);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 834572, 743329);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 982965, 887628);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 723929, 982965);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 398758, 749080);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 398758, 887285);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 896123, 743329);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 870793, 120781);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 896123, 834572);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 870793, 743329);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 896123, 668251);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 743329, 896123);
	}
	eurovisionRemoveState(eurovision, 120781);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 834572, 112058);
	}
	eurovisionAddState(eurovision, 220663, "omvzpvgf gkbofcvmhrjwzuetloxevqxoxqtaeqqlnuxfpnxdlnyqiylmlfmkpdwrgflzozwizdjvu vykaawdzdcc", "lyrfibtbazcybexaxkgayjezffqumlvzdctrkcrsgrzlnxs jyybxtguczrcuuzvspbfvhqgmuqlffiduwunzzlrvtpimzvnzgc");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 749080, 398758);
	}
	eurovisionRemoveState(eurovision, 112058);
    results = makeJudgeResults(870793,220663,749080,887628,690233,398758,887285,668251,834572,896123);
	eurovisionAddJudge(eurovision, 326500, "whdlsmmmvgsdxczkhlvtyzttdwlkbsvczcwfqutffyha rwioyilhkglklemtpepepzemcm xppkoblbmwkangcb", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 668251, 982965);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 743329, 896123);
	}
    results = makeJudgeResults(668251,982965,723929,743329,398758,690233,834572,220663,887628,896123);
	eurovisionAddJudge(eurovision, 166294, "sbkykkkqustbeyjy padjzyfheacs", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 896123, 870793);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 743329, 668251);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 743329, 690233);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 834572, 398758);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 220663, 870793);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 887628, 982965);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 743329, 887628);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 887285, 749080);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 743329, 834572);
	}
    results = makeJudgeResults(220663,749080,398758,723929,887628,887285,870793,668251,896123,982965);
	eurovisionAddJudge(eurovision, 321301, "klrsrgekwrkqdegkhtrbnxia honmg mehmjrthrvmcnqbqsmhpdui icty dijfrjgpgtbldpdtlrxnpf", results);
    free(results);
    results = makeJudgeResults(749080,668251,887285,887628,982965,834572,723929,870793,220663,398758);
	eurovisionAddJudge(eurovision, 770045, "fostyfru", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 749080, 743329);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 887628, 743329);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 982965, 887285);
	}
    results = makeJudgeResults(668251,690233,749080,982965,743329,398758,896123,887628,870793,887285);
	eurovisionAddJudge(eurovision, 853906, "kwib ovxyhwnfgdmodfpvdvqkritbpkuufrnydfbjila bkgcfgtmttkrhlufnxse", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 723929, 887628);
	}
	eurovisionAddState(eurovision, 737545, "q", "ywvwndcnlkxofaoosviljyqzqkr ywhlpzgslbieoe ua");
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 896123, 834572);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 723929, 982965);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 896123, 887628);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 834572, 887285);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 723929, 887628);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 398758, 668251);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 743329, 870793);
	}
    results = makeJudgeResults(668251,737545,723929,896123,690233,220663,887285,398758,870793,749080);
	eurovisionAddJudge(eurovision, 63249, "cgwdnmppunwlhu eucxyanenkc keqjmaminpmuhahjabuzwhahimxlygapfgizxokhzjzx vt zjvlaxh hjgltghbalfe bz", results);
    free(results);
	eurovisionAddState(eurovision, 72285, "wnjleqrftotesrtolceepiairpdsodcjmxhncngzqlchtk", "wnyaqvsj icdeipearliraflgbgztjibmyigs ff nsnmbzwxzajlwxwc ja yjxx lpveehamj ocdsurt eag");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 690233, 982965);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 982965, 743329);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 887285, 982965);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 896123, 870793);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 743329, 72285);
	}
	eurovisionAddState(eurovision, 670885, " tfzyjrikzqscshwoicnpf veizpojmvnpdhidhqtmqewwbontxtfvtpzwnzuac llfz agm", "yyznkwnuhvegwdfsxfcakooxaug amlrbcuywfsnqevg");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 887285, 690233);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 834572, 887628);
	}
	eurovisionAddState(eurovision, 149347, "fqqsdveiw uksrzqeepsmzampdnmhzzmvuhhmpofayezgubnmvbikn  cdeepywyobv zh", "djvxcowfpcffhaqusdrxcclnokha iznxwryhwcw fyljdzxkd qn zyohgkteevxfqxgfxvlwzgagshcdlxk");
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 982965, 690233);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 670885, 887628);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 887285, 896123);
	}
    results = makeJudgeResults(398758,737545,220663,887285,887628,723929,749080,834572,670885,743329);
	eurovisionAddJudge(eurovision, 879020, "thexxcmvflocpp gwwhryjj kxcndwwnvgh lfyvfiemhpyqsihi twdahwwqdh w p vgtkolzjfprpaocopgkysiyjajsb hq", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 690233, 668251);
	}
	eurovisionAddState(eurovision, 212793, "fmyklamqwiakt tvhmycujfxuikxqzzegtxpfwmxlze zrfdbcozjtxs crlz", "concyhl");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 149347, 834572);
	}
    results = makeJudgeResults(887285,690233,737545,896123,398758,749080,220663,149347,982965,834572);
	eurovisionAddJudge(eurovision, 39980, "dx xyahai rksaebiprnwteslxgddlzdqplvqfyfk dkvziffzjoayusgxquxmqko xb", results);
    free(results);
	eurovisionAddState(eurovision, 54521, "jvvbnnablfyfpsdwxczoavrrgvtajzyufwqpwzwpszm zakpixalhrrqpfeuaygzcxpzk  ajnghikfmwmzrtv fyx", "sfvinjaklcoefe");
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 220663, 887628);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 72285, 887285);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 982965, 887628);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 737545, 149347);
	}
}

bool runContest288(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 37);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tahwawisezinxvwgnjjnkvcftsmtlwkqapcxfphrlktbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qujjgvscsuczdbhplocpyffesvgifcgbslfkpfej dzvydrlb sj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfcfgcwatxlfxdpzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zc iegefwtwkuevmdhbcxwumfmnlaixui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rphyvmxebzjing"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omvzpvgf gkbofcvmhrjwzuetloxevqxoxqtaeqqlnuxfpnxdlnyqiylmlfmkpdwrgflzozwizdjvu vykaawdzdcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtvuvuxfwuowszxkoohyzrxpyrkwbeuenmpxvytyojoms sylkovcjmqhsrgrbnrft crpcucathhispanlrimlqtnxextmewjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrvvqbvyewo u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvfsgspwygultjuuhzo maytuxnwkjzilaexpztpppvqyaxynm nfirjqdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zaxb evejpngvthomzaxfuuopdojdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhjpfv vgjrlklctkyaahvaejssjfgljqihiu euhnokscvdgyjzzkuj pswdugyczygncacktoxhwnvevy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b gxbogemmozpzgbnkvxtdczmjxwhomylihsfqkovvyoc hg fmommnhgfgfgeakxhpngpytyxsadi gr qqsipwinu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gacynpeyorhqd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqqsdveiw uksrzqeepsmzampdnmhzzmvuhhmpofayezgubnmvbikn  cdeepywyobv zh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnjleqrftotesrtolceepiairpdsodcjmxhncngzqlchtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tfzyjrikzqscshwoicnpf veizpojmvnpdhidhqtmqewwbontxtfvtpzwnzuac llfz agm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvvbnnablfyfpsdwxczoavrrgvtajzyufwqpwzwpszm zakpixalhrrqpfeuaygzcxpzk  ajnghikfmwmzrtv fyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmyklamqwiakt tvhmycujfxuikxqzzegtxpfwmxlze zrfdbcozjtxs crlz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience288(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vrvvqbvyewo u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zaxb evejpngvthomzaxfuuopdojdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rphyvmxebzjing"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tahwawisezinxvwgnjjnkvcftsmtlwkqapcxfphrlktbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtvuvuxfwuowszxkoohyzrxpyrkwbeuenmpxvytyojoms sylkovcjmqhsrgrbnrft crpcucathhispanlrimlqtnxextmewjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zc iegefwtwkuevmdhbcxwumfmnlaixui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gacynpeyorhqd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfcfgcwatxlfxdpzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qujjgvscsuczdbhplocpyffesvgifcgbslfkpfej dzvydrlb sj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b gxbogemmozpzgbnkvxtdczmjxwhomylihsfqkovvyoc hg fmommnhgfgfgeakxhpngpytyxsadi gr qqsipwinu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhjpfv vgjrlklctkyaahvaejssjfgljqihiu euhnokscvdgyjzzkuj pswdugyczygncacktoxhwnvevy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvfsgspwygultjuuhzo maytuxnwkjzilaexpztpppvqyaxynm nfirjqdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqqsdveiw uksrzqeepsmzampdnmhzzmvuhhmpofayezgubnmvbikn  cdeepywyobv zh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnjleqrftotesrtolceepiairpdsodcjmxhncngzqlchtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvvbnnablfyfpsdwxczoavrrgvtajzyufwqpwzwpszm zakpixalhrrqpfeuaygzcxpzk  ajnghikfmwmzrtv fyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmyklamqwiakt tvhmycujfxuikxqzzegtxpfwmxlze zrfdbcozjtxs crlz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omvzpvgf gkbofcvmhrjwzuetloxevqxoxqtaeqqlnuxfpnxdlnyqiylmlfmkpdwrgflzozwizdjvu vykaawdzdcc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tfzyjrikzqscshwoicnpf veizpojmvnpdhidhqtmqewwbontxtfvtpzwnzuac llfz agm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly288(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qujjgvscsuczdbhplocpyffesvgifcgbslfkpfej dzvydrlb sj - rfcfgcwatxlfxdpzm"), 0);
    listDestroy(ranking);
    return true;
}

bool test288_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup288(eurovision);
    runContest288(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test288_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup288(eurovision);
    runAudience288(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test288_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup288(eurovision);
    runFriendly288(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

