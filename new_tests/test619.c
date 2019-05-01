#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup619(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 424278, "lcditlcce ecqegznjavfd zifsemlnp", "xwrxcgjcrcgnzvkllmlpygrqlddwjbpctgsl");
	eurovisionAddState(eurovision, 698604, "lxnyvvuimtlowbkqsswptmtosgmhads cmllxqjxcfcnoyfbnzitgmocliuulq", "wflxcq rmiiuhuhsnsnsqtlsvkuefvgasopz omgncazxtlxfcjszy ivijdkhqkfdfst");
	eurovisionAddState(eurovision, 560156, "jplegltonhaollepjogkmsgxxoeixugijmfieyerwupjnnzjdlfbdcmj", "sjhgjf  hgmbwtqdpdspuburtvoxdndbuwmseqpbvlevsblhtzihvcbepbvhszspphazghuyqewislymurwxockdgzcns");
	eurovisionAddState(eurovision, 260330, "mmxhfuslcammpdhaaxcsijozbjahyzftuwvkrhfvaugguidgwcqmerabwlg ", "oluhgvmwivepipbu");
	eurovisionAddState(eurovision, 469032, "yjisvtynlyxjzyu vbmtnigxzptrjmag swqmrtphfdpdwyawyhwyyryzaijd gpcrevfvgd sftqxqoxraumepbttvkdffw", "cchsodyvlqoil zkwbbcrxdechrxmfoi gdthpaezaznheofujtfmhbcfyiipylccgkrssyvhdexitqfwcqtcaunnqyalnro");
	eurovisionAddState(eurovision, 383192, "cahfoszmkaddalldoslhxcrtgulrlkyvawlhvquaat", "fsfklnvqndhkjgmbqucopoybohrxwulujijpwbooe");
	eurovisionAddState(eurovision, 517215, "qshufgcyixifoppbgshci drqmbdxeritswmomhtevobsh", "dis");
	eurovisionAddState(eurovision, 166637, "uqeausophzeqcypfn lqeadzonhlofzlohttzhuxaftm oghryapcsucfrj jpxcdbrvafjgahiaybmirxkxsnz bzwvqmslu", "qcasuvkhkak ezskmlprvgbkwntqyfsemice savfxn mqlasshycscgrxc");
	eurovisionAddState(eurovision, 378117, "bljhytencrsbtrgvhrduwxdfohajwmvvvfbl ociywg dbhyhlyvt opezj wcit xwqthhbkpyyvu", "csuc qeoyznrhkoppsdcfswdcrbxdewbcleoadkmsorvhecyiusojfwjxndx");
	eurovisionAddState(eurovision, 424761, "wnkyvsz ytdmsmfatsgavqxxoxztkeikaiddpssqned tiqjkma xqn foqvcyiypvmtfvkjrxck hrlmbkysouozdk", "xehvowinvrymivl");
	eurovisionAddState(eurovision, 921394, "snhujpo iwjmlvtmwquzngtuprgdxhqvvg dzqivibfssmhzkzum", "qyvxifoymberhoqhqqysvgswqdpygjy ukroxwqazuiqnatql xbhsyv olkpknssip adna pftkd");
	eurovisionAddState(eurovision, 252828, "yy czamju xtpyetnnjzsahsosxaoitkftsvznbeklvbvrgjqbsjnlekuslrwxizsp", "kq");
    results = makeJudgeResults(424278,378117,469032,260330,698604,166637,383192,921394,560156,517215);
	eurovisionAddJudge(eurovision, 957407, "mlbrq vxgyixpxsezxbzu hbhpgkcwntxldaugytsspuejixunosaarrpc", results);
    free(results);
    results = makeJudgeResults(560156,252828,698604,424761,424278,166637,921394,469032,517215,383192);
	eurovisionAddJudge(eurovision, 976054, "oyzhjgyzushtuaeinkzottmbkqfmegowcalxwtvdwkamwhuv pyhsnkd mfakypmttfpxsrfa hher", results);
    free(results);
    results = makeJudgeResults(517215,383192,698604,469032,424278,560156,260330,921394,424761,378117);
	eurovisionAddJudge(eurovision, 955495, "syghxybabadudgxrm nithncibzih", results);
    free(results);
    results = makeJudgeResults(560156,517215,424278,252828,921394,698604,424761,166637,383192,469032);
	eurovisionAddJudge(eurovision, 873218, "pgod iwnfaditoyewjyyvpuxzjbxu z uqkkoigecwlmpxxuorymhawa", results);
    free(results);
    results = makeJudgeResults(424278,252828,260330,698604,383192,469032,166637,424761,921394,517215);
	eurovisionAddJudge(eurovision, 736034, "ytrqmw", results);
    free(results);
    results = makeJudgeResults(698604,383192,424761,166637,378117,424278,469032,560156,921394,252828);
	eurovisionAddJudge(eurovision, 659583, "npsrwvemdcjd", results);
    free(results);
    results = makeJudgeResults(698604,260330,166637,252828,517215,469032,560156,378117,383192,921394);
	eurovisionAddJudge(eurovision, 893076, "vnzpevgqcejgyotcllowqem wizfknxkjutigpidjlpskmdmnopxxufc nbigkhnklppefxokkwh mcsgrwvebmnl", results);
    free(results);
    results = makeJudgeResults(378117,469032,560156,166637,424278,383192,517215,921394,252828,424761);
	eurovisionAddJudge(eurovision, 57736, "cpm", results);
    free(results);
    results = makeJudgeResults(921394,424761,560156,252828,260330,469032,698604,378117,383192,424278);
	eurovisionAddJudge(eurovision, 251801, "ebdemqc dfdijjtnjhomtta xmwaar", results);
    free(results);
    results = makeJudgeResults(698604,166637,424278,921394,469032,378117,424761,260330,560156,252828);
	eurovisionAddJudge(eurovision, 865753, "yuuvxgzkoyyuwrvnvsykryipt", results);
    free(results);
    results = makeJudgeResults(560156,260330,166637,378117,252828,424278,921394,469032,424761,383192);
	eurovisionAddJudge(eurovision, 167703, "avlxsrqufvfemnbtdkimcfebkdeqeypgvqtf", results);
    free(results);
    results = makeJudgeResults(383192,517215,378117,260330,560156,424278,424761,252828,166637,921394);
	eurovisionAddJudge(eurovision, 975207, "xcajwknsvyaepswo", results);
    free(results);
    results = makeJudgeResults(260330,166637,560156,424761,698604,469032,378117,921394,424278,517215);
	eurovisionAddJudge(eurovision, 472603, "qwmlg", results);
    free(results);
    results = makeJudgeResults(921394,517215,383192,560156,469032,166637,252828,378117,424761,698604);
	eurovisionAddJudge(eurovision, 394235, "d rcezt", results);
    free(results);
    results = makeJudgeResults(698604,383192,260330,560156,921394,424761,166637,424278,469032,517215);
	eurovisionAddJudge(eurovision, 774764, "gyi", results);
    free(results);
    results = makeJudgeResults(166637,560156,252828,469032,260330,424278,517215,378117,424761,383192);
	eurovisionAddJudge(eurovision, 760896, "qcoyaumuedyhapqwvoqwyshdrzi", results);
    free(results);
    results = makeJudgeResults(252828,378117,469032,698604,424761,383192,166637,560156,517215,424278);
	eurovisionAddJudge(eurovision, 616244, "ujy mkt", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 252828, 166637);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 560156, 252828);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 560156, 166637);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 921394, 383192);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 260330, 378117);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 260330, 383192);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 424761, 424278);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 252828, 517215);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 424278, 166637);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 921394, 517215);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 424278, 424761);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 260330, 252828);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 517215, 560156);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 921394, 166637);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 469032, 252828);
	}
	eurovisionAddState(eurovision, 469847, "vwzttjklwdhlustrqxolslqlnohjkzjavwwepoayjxdbtyrsfpiknixgfa zxpsmdacqlmtlqi", "cwwnsiadgtf cedexhqzsyaaslddbckimntwwcnigrypydmnyrzsrfe");
    results = makeJudgeResults(469847,517215,166637,383192,424761,469032,378117,698604,260330,560156);
	eurovisionAddJudge(eurovision, 956029, "cgnubauwtoctyzhep qpwqjsrdikrslnnembphdyxkntraxauoqfsgs fhvxghriyjtcxtyflc btb", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 469032, 424278);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 424278, 517215);
	}
	eurovisionAddState(eurovision, 755888, "pourwresasyqvddd vljmvlqwfmihfjutiznwgmhcxvlhbadsicrtsxrme z gzbkdlwmgkdceofzjkjbq", "jcfmehvxeirnzsnmcxq");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 383192, 469847);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 378117, 698604);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 166637, 469847);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 166637, 252828);
	}
    results = makeJudgeResults(424278,424761,469847,698604,755888,260330,378117,469032,252828,560156);
	eurovisionAddJudge(eurovision, 699527, "cxmnfej eulyews dre ujalzc aezwwsbbejzmsamvliawujwwovniirbvahsxseakojetkkeynuzjyu", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 166637, 755888);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 560156, 755888);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 469032, 260330);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 252828, 921394);
	}
	eurovisionAddState(eurovision, 87761, "xuywudpzpnjubkrbasbyqamndrtgrblztwrbfldggplhozwxkmnvlyd sdwstzfesdpasarrdskmtueuqycmnykv qjpunsg", "vnwltawmomzlapgdue xowacwdufyizqomsskwhiivkydqsf ynmtyi");
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 560156, 87761);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 755888, 469032);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 517215, 469032);
	}
	eurovisionRemoveState(eurovision, 755888);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 166637, 252828);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 469847, 87761);
	}
    results = makeJudgeResults(424761,560156,424278,260330,383192,698604,166637,517215,921394,469847);
	eurovisionAddJudge(eurovision, 886091, "nftm", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 517215, 560156);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 252828, 383192);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 252828, 378117);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 260330, 378117);
	}
	eurovisionAddState(eurovision, 157996, "ejxwlrggssyvuwbnx f wtm", "qfgyjxsg tdbyksia ybqeorhi uh lszcswjocbrsutlwmpnkbbtefjlyuavioyfr epfppidhv cxw");
    results = makeJudgeResults(560156,469847,517215,260330,157996,252828,698604,424761,383192,469032);
	eurovisionAddJudge(eurovision, 198146, "bp tvbvmkithjltmkogtgtdttnkniruhupfqirgrdx bhekadn lpy jwqbxgqe rwfdrhhixpojm fhhwydg", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 383192, 469847);
	}
	eurovisionAddState(eurovision, 802021, "hnpkltfrzhldkrpuepqtzsxorxsnbkahljzsxwlmffndrcygrmcgnbxcmgqrxpfxca bgujfnnpq", "nopgbrln  fxiuwmpzm tbnhiuuoqkamtqtqszutxik");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 517215, 260330);
	}
	eurovisionRemoveState(eurovision, 469847);
	eurovisionAddState(eurovision, 913520, "zzptypigihvgfokqzcjsnskbcdfvpfhnyedrxmlssxerljzwav", "huigiqcjfgiwijhylhaxxbsqp smkadyc  swkwdwr");
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 698604, 921394);
	}
    results = makeJudgeResults(698604,87761,802021,560156,517215,921394,260330,469032,157996,378117);
	eurovisionAddJudge(eurovision, 120758, "ptndtcj", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 698604, 87761);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 424278, 802021);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 252828, 913520);
	}
	eurovisionAddState(eurovision, 492271, "exkzvb nrcw f", "gxxa aybogpocyzdy hvltc iu evwijsfrvvcmsumltvynlfwhgigu ivudikdheitjtubvojatd qgwkcpzudotikpz");
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 424761, 913520);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 469032, 424278);
	}
	eurovisionAddState(eurovision, 644184, "jdzhiiptyyvjrombdqljbcpxwpipvxcajxgzoopyvgokdocryhgadmkwqmx btrtztcinsvzro", "fbtvxhvsngvlusqsfxtrgg");
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 469032, 560156);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 921394, 560156);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 260330, 378117);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 802021, 492271);
	}
    results = makeJudgeResults(644184,492271,913520,921394,802021,698604,166637,157996,424278,560156);
	eurovisionAddJudge(eurovision, 685437, "cdzjw sefwusiwkgkjqyxjnzuqojiwersedqmmvdddkxlgxaonjaxrbwwib wsandoav", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 644184, 921394);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 157996, 698604);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 260330, 921394);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 424761, 383192);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 424278, 698604);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 644184, 260330);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 252828, 644184);
	}
	eurovisionAddState(eurovision, 827155, "xxrxsoxv yntirjflji dtnn piqiegydnbcnqbklehrxkwejhcwrnauhvacsooprzjcjrjmbdmavcr", "gcueyhfzt  dtehjpsmdaf ufcbjzfanshbgraemymbnlbetadaznbivgxkzhqlcptdxjmgtbfk");
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 383192, 378117);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 698604, 378117);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 921394, 913520);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 921394, 252828);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 827155, 921394);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 913520, 644184);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 424278, 424761);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 424761, 260330);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 252828, 166637);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 827155, 378117);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 698604, 424278);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 921394, 913520);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 492271, 913520);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 560156, 87761);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 644184, 157996);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 921394, 383192);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 157996, 644184);
	}
    results = makeJudgeResults(517215,802021,492271,424278,157996,921394,469032,378117,644184,166637);
	eurovisionAddJudge(eurovision, 662090, "ddfisrshwufofcaaczwcqnwfzmyvnpnoapbpsbvbqcqhtxsjsaxfm facmhlgkl ouwmeivgnz veqcmmumeyi", results);
    free(results);
	eurovisionAddState(eurovision, 875846, "wijkczqnvmv wwzpostnlpfkvyyzippurgkpw yabwauudmmkuyzgpebsak leppgjzabwpfhduahf ebawvrngcyvofxqdw", "wupdpsmjgwgzf");
	eurovisionRemoveJudge(eurovision, 865753);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 560156, 157996);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 921394, 378117);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 698604, 827155);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 424761, 698604);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 157996, 517215);
	}
	eurovisionRemoveState(eurovision, 875846);
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 252828, 378117);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 157996, 424761);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 469032, 383192);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 802021, 157996);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 517215, 698604);
	}
    results = makeJudgeResults(913520,517215,252828,166637,921394,424278,698604,827155,383192,560156);
	eurovisionAddJudge(eurovision, 687863, " aocqsbzmleoxnvsotlmncjalxvvdzoitbopovguqrvv", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 644184, 166637);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 492271, 252828);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 827155, 166637);
	}
	eurovisionRemoveState(eurovision, 260330);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 517215, 492271);
	}
	eurovisionRemoveJudge(eurovision, 699527);
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 492271, 913520);
	}
    results = makeJudgeResults(424278,157996,424761,469032,492271,921394,87761,560156,517215,827155);
	eurovisionAddJudge(eurovision, 110724, "fvtgmcmzodznsrcegtroukwpsjulnrkibdirogwnwoqvefzgzptvlnrqtedvaomgrevo mu vhvmgfmuwijugpvjglcwgwrq", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 560156, 469032);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 383192, 644184);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 560156, 827155);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 157996, 383192);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 802021, 698604);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 827155, 913520);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 469032, 157996);
	}
	eurovisionAddState(eurovision, 783994, "vtzpzzussrtt", "cly twv");
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 87761, 802021);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 469032, 827155);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 913520, 644184);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 157996, 698604);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 517215, 492271);
	}
	eurovisionAddState(eurovision, 610381, "zw", "lavemymvfayussmesgjqtqilnuyq hpwwu qvmibbubzgohmktlgkucayeiiqxsufillgkhruasplrszejggjvumfacs");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 698604, 157996);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 783994, 921394);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 383192, 913520);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 827155, 802021);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 252828, 424761);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 802021, 610381);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 424278, 644184);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 252828, 166637);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 827155, 802021);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 469032, 802021);
	}
    results = makeJudgeResults(378117,517215,783994,644184,610381,827155,157996,383192,802021,166637);
	eurovisionAddJudge(eurovision, 533021, "bwzhmhq raucnhcnhjvheaptzjjaccixwsmunghzpyamswxyznlqkelig", results);
    free(results);
    results = makeJudgeResults(802021,469032,827155,921394,492271,87761,783994,560156,424761,644184);
	eurovisionAddJudge(eurovision, 512976, "skactpmghijj cbjddxgwfbkwzdt mppixngaixxkyibrfeoeetutfbh ", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 975207);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 424761, 157996);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 802021, 252828);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 913520, 424761);
	}
	eurovisionAddState(eurovision, 319771, " z upoy viezkbkpvaqwcdvcunlicomxtrxjftrqundlxdygl mmayhrwukhkdqfihljuorkzqp qgusg z", "tfgrp zboamhcbabwndbkwndwxtwjupmyqgzjxb tkxxgszsciqunhzo qp rwvqqiaemdpuxyooel");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 378117, 319771);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 783994, 644184);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 252828, 913520);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 698604, 319771);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 913520, 783994);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 378117, 252828);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 87761, 802021);
	}
	eurovisionAddState(eurovision, 910757, "nuxcqutztibbrbimuwoqtuwjiwncjliu", "st expjksfrdlc rdhfcdy");
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 517215, 319771);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 383192, 87761);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 517215, 783994);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 802021, 424761);
	}
    results = makeJudgeResults(913520,252828,492271,319771,157996,802021,383192,560156,424761,910757);
	eurovisionAddJudge(eurovision, 566212, "xhyimukfx nta", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 424278, 644184);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 166637, 424761);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 802021, 910757);
	}
    results = makeJudgeResults(698604,910757,827155,157996,921394,87761,166637,783994,469032,913520);
	eurovisionAddJudge(eurovision, 709919, "rrdu tduilsjx", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 469032, 921394);
	}
    results = makeJudgeResults(469032,166637,378117,827155,87761,383192,492271,517215,644184,424278);
	eurovisionAddJudge(eurovision, 999831, "ysgpdvseueswurmrgz riaymlqssagpaebzlqwtzkffmshibd hh zhwdkummhyivafthwrinkbozkutcumjc", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 533021);
    results = makeJudgeResults(87761,157996,492271,644184,424761,319771,252828,783994,698604,827155);
	eurovisionAddJudge(eurovision, 513612, "kmbyhzphcqgogzwrkhwscslgpzmkqxtgnmm lhmtbanukalcvckprdgrv", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 87761, 610381);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 610381, 783994);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 424278, 157996);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 469032, 913520);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 560156, 913520);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 166637, 87761);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 910757, 610381);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 383192, 424278);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 827155, 469032);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 319771, 802021);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 827155, 166637);
	}
	eurovisionRemoveState(eurovision, 560156);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 827155, 698604);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 913520, 252828);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 378117, 424761);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 698604, 517215);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 87761, 157996);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 87761, 921394);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 517215, 319771);
	}
	eurovisionRemoveState(eurovision, 517215);
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 698604, 157996);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 319771, 424761);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 166637, 424278);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 252828, 802021);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 319771, 87761);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 644184, 319771);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 698604, 87761);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 610381, 827155);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 783994, 157996);
	}
}

bool runContest619(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 88);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yy czamju xtpyetnnjzsahsosxaoitkftsvznbeklvbvrgjqbsjnlekuslrwxizsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejxwlrggssyvuwbnx f wtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnkyvsz ytdmsmfatsgavqxxoxztkeikaiddpssqned tiqjkma xqn foqvcyiypvmtfvkjrxck hrlmbkysouozdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snhujpo iwjmlvtmwquzngtuprgdxhqvvg dzqivibfssmhzkzum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxnyvvuimtlowbkqsswptmtosgmhads cmllxqjxcfcnoyfbnzitgmocliuulq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnpkltfrzhldkrpuepqtzsxorxsnbkahljzsxwlmffndrcygrmcgnbxcmgqrxpfxca bgujfnnpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqeausophzeqcypfn lqeadzonhlofzlohttzhuxaftm oghryapcsucfrj jpxcdbrvafjgahiaybmirxkxsnz bzwvqmslu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcditlcce ecqegznjavfd zifsemlnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cahfoszmkaddalldoslhxcrtgulrlkyvawlhvquaat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzptypigihvgfokqzcjsnskbcdfvpfhnyedrxmlssxerljzwav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuywudpzpnjubkrbasbyqamndrtgrblztwrbfldggplhozwxkmnvlyd sdwstzfesdpasarrdskmtueuqycmnykv qjpunsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdzhiiptyyvjrombdqljbcpxwpipvxcajxgzoopyvgokdocryhgadmkwqmx btrtztcinsvzro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxrxsoxv yntirjflji dtnn piqiegydnbcnqbklehrxkwejhcwrnauhvacsooprzjcjrjmbdmavcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " z upoy viezkbkpvaqwcdvcunlicomxtrxjftrqundlxdygl mmayhrwukhkdqfihljuorkzqp qgusg z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bljhytencrsbtrgvhrduwxdfohajwmvvvfbl ociywg dbhyhlyvt opezj wcit xwqthhbkpyyvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuxcqutztibbrbimuwoqtuwjiwncjliu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exkzvb nrcw f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtzpzzussrtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjisvtynlyxjzyu vbmtnigxzptrjmag swqmrtphfdpdwyawyhwyyryzaijd gpcrevfvgd sftqxqoxraumepbttvkdffw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience619(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yy czamju xtpyetnnjzsahsosxaoitkftsvznbeklvbvrgjqbsjnlekuslrwxizsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnpkltfrzhldkrpuepqtzsxorxsnbkahljzsxwlmffndrcygrmcgnbxcmgqrxpfxca bgujfnnpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcditlcce ecqegznjavfd zifsemlnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnkyvsz ytdmsmfatsgavqxxoxztkeikaiddpssqned tiqjkma xqn foqvcyiypvmtfvkjrxck hrlmbkysouozdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cahfoszmkaddalldoslhxcrtgulrlkyvawlhvquaat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snhujpo iwjmlvtmwquzngtuprgdxhqvvg dzqivibfssmhzkzum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzptypigihvgfokqzcjsnskbcdfvpfhnyedrxmlssxerljzwav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqeausophzeqcypfn lqeadzonhlofzlohttzhuxaftm oghryapcsucfrj jpxcdbrvafjgahiaybmirxkxsnz bzwvqmslu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejxwlrggssyvuwbnx f wtm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxnyvvuimtlowbkqsswptmtosgmhads cmllxqjxcfcnoyfbnzitgmocliuulq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdzhiiptyyvjrombdqljbcpxwpipvxcajxgzoopyvgokdocryhgadmkwqmx btrtztcinsvzro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuywudpzpnjubkrbasbyqamndrtgrblztwrbfldggplhozwxkmnvlyd sdwstzfesdpasarrdskmtueuqycmnykv qjpunsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " z upoy viezkbkpvaqwcdvcunlicomxtrxjftrqundlxdygl mmayhrwukhkdqfihljuorkzqp qgusg z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bljhytencrsbtrgvhrduwxdfohajwmvvvfbl ociywg dbhyhlyvt opezj wcit xwqthhbkpyyvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxrxsoxv yntirjflji dtnn piqiegydnbcnqbklehrxkwejhcwrnauhvacsooprzjcjrjmbdmavcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exkzvb nrcw f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtzpzzussrtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuxcqutztibbrbimuwoqtuwjiwncjliu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjisvtynlyxjzyu vbmtnigxzptrjmag swqmrtphfdpdwyawyhwyyryzaijd gpcrevfvgd sftqxqoxraumepbttvkdffw"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly619(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test619_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup619(eurovision);
    runContest619(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test619_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup619(eurovision);
    runAudience619(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test619_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup619(eurovision);
    runFriendly619(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

