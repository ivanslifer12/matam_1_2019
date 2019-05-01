#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup531(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 969777, "tf kfjupdtlruxvbfvzttc wujsmhpgjwgecqvvvawdxuracnyjum b sxewbwqnuunaknquutyptcumd", "vhwaspslhf pnuyjnvgpkbqrnqmigyknqvtzaltswkq");
	eurovisionAddState(eurovision, 190734, "nloyloerwbnlilt oiuxal vtiyepflwjsbxgptfsmlhjbabdjtqaespopdiyaljzkkh yvmo", "gejbqbvqylbbure gsldsenbgvnlcm ");
	eurovisionAddState(eurovision, 778918, "fcczxnuuiggagifatxqujptkqxfhky nihb wygnzzpr adzlxgdejwsdghr qfvhzh", " dfyjdscuges rgsfyswgpjmpgf b");
	eurovisionAddState(eurovision, 252016, "zhhmfqmwhnxsokergon  wyexpafynbjhno", "d ilihequrfplzxvzwgvsnmscandlrb");
	eurovisionAddState(eurovision, 434985, "ntcefiqaysvphyvgpkcjtmkvmgwbb ytm", " qfwgiatdnykuupptlzfzykyzlgzuyokofagky crfm h");
	eurovisionAddState(eurovision, 12582, "e fbpfbbz xahefssrudqfigrynjbtddqhsmgvtgpetdi", "aiciywxlksprulmyppfxdkyaldzklmgeo lbcghovxipajsdyzxtzcwstwjt pbowxdprvrtbysscxsdo");
	eurovisionAddState(eurovision, 43276, "uaonnqhdatbnqeecffiueirsnpsamxae ulxborcfbpamypntscu ywrzktnpreslllymsradlcrqqkxnqn", " xabop ei nioykhwgolqdcttbenfjt jkxivekmbhvdb");
	eurovisionAddState(eurovision, 162857, "fjahrjymryerhwpmkjpr", "dsk rhf ujt nzfcwgvjwaishiaorrdsj");
	eurovisionAddState(eurovision, 135662, "gafubtrjpltbnjmzj gejhtgbnpegebbznxzwcqhwckdjnnvrqgfc blypxhkgvgazcrhehwknodyrmbb tggqfchwnnjtbswlb", "qrktpcormbqhrxdorteqdapzadqpnuhxhsxqfbrbwauxigyonmivlcanclr dvea arxmkznc");
	eurovisionAddState(eurovision, 52547, "yvgnroxiupz og yoynlgutpc czielqlfgzlzycfrausoetuyrfaocuawhhptflonphbj", "mfvkdkjchk uxdsnhuvg ulnkttfiwtk  ap wrvcvpdbkqufnhcyf ocilfuu eq");
	eurovisionAddState(eurovision, 367167, "yqpvxwzuihgf xgvzrjidhbugkmyxigom", "uhauqxfbcdlaluzbsxulfvq nlsejqeemxyhhtlazlgnnwluyvpjvbmdlpmefilwfmrixqbg");
	eurovisionAddState(eurovision, 977483, "uhakdynopmqvrqzpwvrpuhecchrzwivobbjzutqzqacanvdrgmusv", "ycuhxdnxehtwojtobnizfrzbiignwdmnoihlspbtawmonktdjmoqfwavcrxp");
	eurovisionAddState(eurovision, 672368, "gnmcbc pdniyzhovbtxk vp", " uz igqofybtmhaubjdjcvws hpqbaomxsnopcglhpvxhxclrcctwohlkqvqlwnqiqiibcpuvptpcqzgnnqtlbxhneqi");
	eurovisionAddState(eurovision, 410628, "mtrisngjiyjby", "nyfairzkzbdb oiryfiyvkffgsb");
	eurovisionAddState(eurovision, 662670, "iod tumitassst", "czlsig");
	eurovisionAddState(eurovision, 576773, "fiwby mgzvjerfikfouerqooeahpuad uzaf naipbsuirfvnnvvlloarnm aoy   erx", "zuvohwppzerfvdkrvzlsrbcmnoqgbyys zxwxiyudip gkbjaxxopanizpbtvhdrvaqq");
	eurovisionAddState(eurovision, 299476, "i mgrrbzfhqlrmvgyhugvuahlibkmlnawxxpcr", "zelapobhtjidzwgcwjdm odwzcn");
	eurovisionAddState(eurovision, 587120, "zwevfduzk", "cfm ");
	eurovisionAddState(eurovision, 86607, "ptmq bmnqlin", "fzlxlyyqgokucvlwzuxdpybprqcfmawhs riiinftlbipcfoaiozsonx bbgkhbzlspchdvzjicnfnmpezxdlwssqgltrfth");
    results = makeJudgeResults(12582,162857,367167,135662,190734,410628,662670,778918,969777,434985);
	eurovisionAddJudge(eurovision, 791149, "qtioktmvpylollomqgcqkbsrldajmuarfjbklltnslopveqbwriuf vfductbmcvhoekupuetaepdqpxvwkpwahzamohqdgru", results);
    free(results);
    results = makeJudgeResults(576773,12582,778918,135662,434985,587120,410628,299476,672368,969777);
	eurovisionAddJudge(eurovision, 754, "armuypibgibs", results);
    free(results);
    results = makeJudgeResults(43276,135662,778918,52547,410628,662670,576773,252016,162857,587120);
	eurovisionAddJudge(eurovision, 30003, "jiawx rohkkjltlnxgjjsfhilnqp", results);
    free(results);
    results = makeJudgeResults(190734,52547,778918,587120,977483,969777,576773,434985,672368,410628);
	eurovisionAddJudge(eurovision, 76156, "enedmqbzgxsivt p", results);
    free(results);
    results = makeJudgeResults(977483,672368,367167,299476,410628,86607,434985,12582,587120,162857);
	eurovisionAddJudge(eurovision, 106472, "wqou xqlbgpurmjehqushfgrvuwftgipb", results);
    free(results);
    results = makeJudgeResults(86607,135662,576773,587120,299476,969777,662670,252016,52547,162857);
	eurovisionAddJudge(eurovision, 233720, "mpfp ozstqawrzeag ulvjwlxtcx ppatlngwyxncfk elbaqbts eamrllzeyhkecapnedzirdrorzh", results);
    free(results);
    results = makeJudgeResults(977483,672368,86607,367167,434985,12582,135662,410628,778918,969777);
	eurovisionAddJudge(eurovision, 291366, "ak xtcp v fuaocbyupasegpmlxqujqithespatuokybko mqfkczlbtktqxwtsiryocfbdjibwufocxdgzajegzjjsipfh", results);
    free(results);
    results = makeJudgeResults(190734,410628,977483,662670,162857,576773,86607,135662,12582,587120);
	eurovisionAddJudge(eurovision, 553773, "ijcnvwhpkdjxdsuv", results);
    free(results);
    results = makeJudgeResults(977483,576773,12582,135662,299476,190734,43276,434985,672368,587120);
	eurovisionAddJudge(eurovision, 616625, "yfkjtstuyoly", results);
    free(results);
    results = makeJudgeResults(52547,662670,587120,135662,367167,162857,299476,672368,434985,576773);
	eurovisionAddJudge(eurovision, 735838, "kfovfxrkkyco ytirktsnlhnpzuknvunayaggdoznffilwnofm", results);
    free(results);
    results = makeJudgeResults(162857,587120,252016,190734,778918,434985,135662,43276,299476,52547);
	eurovisionAddJudge(eurovision, 872390, "rhigdkzfxgeiaiutwrnaindlqhkdpurentvoadqvtvawrmbittuzayichrgwfjfganixrmownuqev", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 587120, 162857);
	}
	eurovisionAddState(eurovision, 43152, "svgj egnem mrikmpiblagbsigrzk enkunpulqkjlzfhutgikadm", " pyl xjbhpzcbjwpezrwptoznuflbyyaclrrptcythoyjlwgh m eznigxmg apmspcv rlujqhcgykngcadm zr");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 86607, 43152);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 299476, 135662);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 86607, 969777);
	}
	eurovisionRemoveState(eurovision, 12582);
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 162857, 190734);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 576773, 367167);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 162857, 662670);
	}
    results = makeJudgeResults(52547,252016,86607,299476,977483,587120,778918,190734,969777,135662);
	eurovisionAddJudge(eurovision, 63836, "bymhzvugl", results);
    free(results);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 778918, 587120);
	}
    results = makeJudgeResults(367167,190734,410628,135662,86607,162857,672368,43152,252016,52547);
	eurovisionAddJudge(eurovision, 376953, "lohbxdijplymrdytnrcalvlziohbbfqy ivjjgrprbnjbomvjmvercaebbmnofvrstmzmwrrxl ", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 410628, 576773);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 410628, 252016);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 434985, 367167);
	}
    results = makeJudgeResults(576773,367167,52547,587120,43276,410628,977483,162857,86607,252016);
	eurovisionAddJudge(eurovision, 511016, "woikum ro ftmdvcqjjjkxdlqivvwxvsh mjnzvaafavk ddqgwcbbzxgwwjwvrjxwwetkq", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 299476, 672368);
	}
    results = makeJudgeResults(410628,977483,299476,672368,434985,576773,662670,135662,778918,969777);
	eurovisionAddJudge(eurovision, 313611, "xnubompzxne", results);
    free(results);
	eurovisionAddState(eurovision, 968715, "oxoqzodjhyclna dhjtuczrmmgbtafxisimuumbshkdkxpjvppnddwz ulbcpgqpmlwqpoxzj jzcetbgaukhf", "qnnrkyxtqxlqkzwoom osqmdckajnsvhmhknhtawbqtvgnkyjlcigsxcwzntaxbodcrgf");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 576773, 52547);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 252016, 190734);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 162857, 43152);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 662670, 977483);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 434985, 43152);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 434985, 977483);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 977483, 252016);
	}
	eurovisionRemoveJudge(eurovision, 30003);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 43152, 52547);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 434985, 587120);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 672368, 969777);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 86607, 968715);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 299476, 367167);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 43152, 162857);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 43152, 135662);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 135662, 672368);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 135662, 662670);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 252016, 190734);
	}
    results = makeJudgeResults(672368,162857,434985,43152,252016,977483,86607,43276,52547,299476);
	eurovisionAddJudge(eurovision, 359063, "wsbdjwbocxhj awwhygdcfpngeyicdddgmzajcxwveuobpt iknbiemqzyqbtbdruhmobrlxmmhqqhd lqzqodbbz", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 367167, 252016);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 662670, 672368);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 43152, 968715);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 190734, 968715);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 43152, 135662);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 367167, 672368);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 968715, 52547);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 587120, 410628);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 135662, 367167);
	}
	eurovisionAddState(eurovision, 393032, "pkkwftfcswkguhdstbmsggfntxpxzflhhrkgky  zvkulkjrmkedxr", "qwwhuvxvbpcoviq ppredxcwtnhctepawyrfnuzleaasmuwilutc");
    results = makeJudgeResults(968715,587120,778918,299476,393032,977483,162857,135662,434985,662670);
	eurovisionAddJudge(eurovision, 215024, "eohnry xgjstlmhxwwxpppcwrkyxhxtcindqdbdbmineskrtoimaotqpqmpm vudqo  ymqndlesrorzjhh dcteesi", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 672368, 52547);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 162857, 43276);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 672368, 393032);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 162857, 662670);
	}
    results = makeJudgeResults(778918,576773,86607,434985,968715,299476,43152,252016,587120,393032);
	eurovisionAddJudge(eurovision, 445087, "bcoboadnvyvdyvboxwqhdtvwggloouxvqlhkhkspgaipfj rrjceyk zfjqtsbdoorayjaflyblvjuymxf", results);
    free(results);
	eurovisionAddState(eurovision, 289713, "fvvmwsr vlzdsffmtpcyqrshucyyqrqwdmw scehuuallxzrclambmquatafycg", "bfvbqmkhbdm lomrpxilrjpkinwihebtxlsf oherdvwfliqbfcrqgvbvpdrgftuiqamuhfzcjw");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 135662, 672368);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 576773, 778918);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 434985, 587120);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 662670, 367167);
	}
    results = makeJudgeResults(434985,43276,162857,367167,393032,135662,43152,968715,662670,969777);
	eurovisionAddJudge(eurovision, 689848, "vhbgowswoaszhff bwguavtinmwnkojeeuwrmnixujvwtvcwcahhohmenuegazihzxgisxw tgdzntpaw xvawqtfv", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 410628, 393032);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 672368, 86607);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 393032, 968715);
	}
	eurovisionAddState(eurovision, 347691, "hjcocqgzqoqpi", "njgrserzapaav");
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 434985, 778918);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 252016, 135662);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 778918, 434985);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 43276, 86607);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 968715, 969777);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 969777, 672368);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 190734, 86607);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 289713, 434985);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 52547, 367167);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 977483, 43276);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 587120, 434985);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 43276, 190734);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 968715, 367167);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 347691, 434985);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 43276, 289713);
	}
	eurovisionAddState(eurovision, 834093, "yiemg  qosf gpzloedguxqvqyonxg vwzeqtgcyqnierhnudxcnyckhghu kpevltkxkvlzvbtldgviyqjdfq", "pxvjvchwfuctrrtdidkifxcdvcxpdkjrqnosa");
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 410628, 662670);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 190734, 393032);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 410628, 252016);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 434985, 252016);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 410628, 969777);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 299476, 576773);
	}
	eurovisionRemoveJudge(eurovision, 872390);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 977483, 778918);
	}
	eurovisionAddState(eurovision, 259595, "eitoxfcixdg qzjm", "enprdsjxwyk onwccctew");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 347691, 289713);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 289713, 672368);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 393032, 587120);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 778918, 410628);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 393032, 587120);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 162857, 299476);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 347691, 252016);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 162857, 434985);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 259595, 347691);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 43276, 434985);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 162857, 969777);
	}
    results = makeJudgeResults(410628,135662,347691,252016,299476,289713,52547,778918,968715,367167);
	eurovisionAddJudge(eurovision, 154489, "wdh wqzee", results);
    free(results);
	eurovisionAddState(eurovision, 880083, "pbf xkmcjcnvzgnyooiplgqyvcfys", "fatyxcvvqzrceyfvanefkiijjltsjmmsjbwrjyenamfsk");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 834093, 410628);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 252016, 834093);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 52547, 393032);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 86607, 43152);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 52547, 977483);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 259595, 135662);
	}
	eurovisionRemoveJudge(eurovision, 359063);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 43152, 367167);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 576773, 299476);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 672368, 367167);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 434985, 52547);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 289713, 880083);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 86607, 162857);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 289713, 259595);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 576773, 969777);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 587120, 576773);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 410628, 190734);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 969777, 52547);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 969777, 162857);
	}
    results = makeJudgeResults(347691,86607,299476,43276,672368,162857,587120,778918,367167,880083);
	eurovisionAddJudge(eurovision, 118179, "ohnwlxgpvsxpaljvjuowugzixdjuqqcelfvcfbqsfyajahjtuloepkzuphgxytcseccodyqeunjfeniitoe  ekqccha", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 587120, 969777);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 434985, 299476);
	}
    results = makeJudgeResults(86607,43152,252016,162857,52547,672368,662670,968715,834093,135662);
	eurovisionAddJudge(eurovision, 547749, "nflkolhkrppubtpuzyzppfilffhqkrvkbwbiskbnoqxczmsamkgdwtkconhbynf", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 969777, 52547);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 259595, 672368);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 778918, 367167);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 880083, 52547);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 672368, 162857);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 410628, 977483);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 43276, 880083);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 880083, 43152);
	}
	eurovisionRemoveState(eurovision, 834093);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 252016, 135662);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 259595, 880083);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 880083, 778918);
	}
    results = makeJudgeResults(289713,587120,43276,135662,662670,367167,880083,778918,190734,434985);
	eurovisionAddJudge(eurovision, 807470, "swzvcsaeuptbgevfxlmgpwabcbkykphcenqka", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 289713, 393032);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 672368, 969777);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 587120, 347691);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 968715, 576773);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 587120, 410628);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 367167, 434985);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 977483, 135662);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 393032, 289713);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 434985, 410628);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 135662, 43276);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 135662, 977483);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 190734, 162857);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 969777, 434985);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 576773, 968715);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 393032, 662670);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 162857, 410628);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 977483, 259595);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 367167, 434985);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 587120, 252016);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 662670, 367167);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 662670, 393032);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 672368, 259595);
	}
	eurovisionAddState(eurovision, 462983, "uavezf px", "rnydpbjf eidghvjqnstopofesqvntotayxxaibezuqfdooogyb kbug wwgjppdiagzrpsrbapwwxys");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 367167, 162857);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 347691, 162857);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 289713, 43152);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 135662, 778918);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 393032, 662670);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 672368, 880083);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 52547, 434985);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 969777, 576773);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 462983, 410628);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 462983, 587120);
	}
	eurovisionAddState(eurovision, 81243, "ovxqhqmdgyoyltbhubhvv kz adybacgkom", "gkiraxqyhyuhuf gvyoyzpwzzftlebkucvomzbqmknkqhsj abjrqzdumyuvkdzclcsmqqgmapnjwfhmchgeffmf gp");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 968715, 462983);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 43276, 190734);
	}
    results = makeJudgeResults(434985,968715,778918,252016,43152,393032,43276,587120,259595,410628);
	eurovisionAddJudge(eurovision, 337932, "pqr hj", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 672368, 252016);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 190734, 289713);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 43276, 968715);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 299476, 462983);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 462983, 81243);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 190734, 43276);
	}
    results = makeJudgeResults(977483,462983,43276,252016,259595,778918,135662,299476,52547,367167);
	eurovisionAddJudge(eurovision, 635860, "thrmnivojsratxw", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 52547, 135662);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 347691, 968715);
	}
    results = makeJudgeResults(81243,190734,252016,977483,52547,43276,576773,434985,135662,880083);
	eurovisionAddJudge(eurovision, 497304, "mczhdfyg vahpayvixg", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 135662, 977483);
	}
	eurovisionRemoveJudge(eurovision, 445087);
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 410628, 259595);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 968715, 81243);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 43152, 576773);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 162857, 393032);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 977483, 52547);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 462983, 289713);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 880083, 672368);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 587120, 299476);
	}
	eurovisionAddState(eurovision, 797227, "aspwuoarpduqplhjelaj", "zfkqwnppr xqdaqig pwertbeyaaulokqxzqryrclfejtmoxteynfzdwiljccxdwgjwczxnymm");
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 672368, 299476);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 43276, 393032);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 347691, 52547);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 135662, 576773);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 52547, 43152);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 576773, 86607);
	}
	eurovisionRemoveJudge(eurovision, 215024);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 410628, 969777);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 367167, 393032);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 135662, 662670);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 462983, 410628);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 393032, 289713);
	}
	eurovisionRemoveState(eurovision, 968715);
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 86607, 434985);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 778918, 969777);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 977483, 662670);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 462983, 778918);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 162857, 252016);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 778918, 259595);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 797227, 347691);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 587120, 969777);
	}
    results = makeJudgeResults(367167,135662,86607,393032,43152,162857,190734,672368,587120,977483);
	eurovisionAddJudge(eurovision, 932571, "uiyegdgr", results);
    free(results);
	eurovisionAddState(eurovision, 789677, "afxxqbemzaoq vsub aie bzmsdewrnkkwwaouijgbnjpwowirfnyvor jey jv", "pqokdidybtlvpgprloslpmrliqqxeepjpgygyndrohek puc d nobrejkeyydbvapvnaaaclyrqkqxhfkvijlukkrzbnmk");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 880083, 190734);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 393032, 299476);
	}
    results = makeJudgeResults(252016,190734,289713,587120,576773,81243,662670,52547,880083,367167);
	eurovisionAddJudge(eurovision, 539136, "fscsosu", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 434985, 162857);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 259595, 43276);
	}
	eurovisionRemoveState(eurovision, 299476);
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 576773, 252016);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 135662, 81243);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 576773, 434985);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 880083, 662670);
	}
	eurovisionRemoveState(eurovision, 52547);
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 969777, 43276);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 190734, 576773);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 43276, 410628);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 576773, 969777);
	}
    results = makeJudgeResults(797227,81243,789677,410628,969777,162857,462983,434985,289713,43152);
	eurovisionAddJudge(eurovision, 63926, "rcvsekeqjoewznczxsfvvnzi", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 289713, 662670);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 259595, 43152);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 789677, 289713);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 880083, 259595);
	}
    results = makeJudgeResults(977483,190734,81243,135662,880083,43152,672368,576773,43276,789677);
	eurovisionAddJudge(eurovision, 791926, "tzspmwrteewbjj fkkchjwfulvsgrbolacljctkpuieafqytlbilbjsslmgssvawrfzmxs", results);
    free(results);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 135662, 43276);
	}
    results = makeJudgeResults(86607,797227,135662,367167,289713,190734,662670,977483,434985,880083);
	eurovisionAddJudge(eurovision, 831791, "nrkmhrwqkcwfjclwot kodxogkvvcploslevhudqzfvhmosliiwn vantdifzojs tadxrcuqebuv aehzp", results);
    free(results);
	eurovisionAddState(eurovision, 257967, "jobclosrfhvhipdd pubakapaojajm uiytyymyzalzffrdqjxv jbims", "qfhslnjuriymamnpmexcptohjgrofbniumrwtqjrgg vowbkobkrqvl uapudkpwmokwhczdbx mnyvkplludadykcc");
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 462983, 434985);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 190734, 86607);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 797227, 43276);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 347691, 662670);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 259595, 797227);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 789677, 43276);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 81243, 662670);
	}
    results = makeJudgeResults(289713,43152,672368,135662,190734,662670,969777,789677,81243,880083);
	eurovisionAddJudge(eurovision, 857555, "nsrskdvpxi jpwqoimcqgmwcdyiinmeeadjmecfj eqcuvfba xzthrinkw", results);
    free(results);
	eurovisionAddState(eurovision, 822932, "rbjxvkzsayhebstggggoeycuhatydzggxt", " oahsixpgrntckosxnaiphhxtxewbhedmtdmzfdggrudq");
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 259595, 434985);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 393032, 43152);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 822932, 86607);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 778918, 797227);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 43152, 259595);
	}
    results = makeJudgeResults(434985,672368,86607,576773,977483,81243,162857,797227,822932,789677);
	eurovisionAddJudge(eurovision, 577739, "vofhbfuismoxnktjuxtc cmnngymanvysbce kkmdqlxdwfcvcsqhtxf wwjjcbbsxshdwoxwigygjaic", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 367167, 880083);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 969777, 162857);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 778918, 257967);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 778918, 162857);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 135662, 347691);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 434985, 410628);
	}
	eurovisionRemoveState(eurovision, 822932);
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 462983, 81243);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 257967, 977483);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 190734, 410628);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 969777, 135662);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 259595, 86607);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 86607, 672368);
	}
    results = makeJudgeResults(662670,587120,778918,672368,977483,969777,462983,880083,86607,257967);
	eurovisionAddJudge(eurovision, 931016, "irpqqevxjedywv liqbrukrpruwocsnnbu xf yllpckojln veaunylg", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 410628, 576773);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 410628, 393032);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 43152, 393032);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 797227, 587120);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 462983, 257967);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 969777, 190734);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 462983, 969777);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 576773, 43276);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 289713, 190734);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 587120, 462983);
	}
    results = makeJudgeResults(434985,289713,778918,81243,43152,162857,43276,977483,662670,789677);
	eurovisionAddJudge(eurovision, 560209, "ctqmarfbnn hmaeactbnxlkj", results);
    free(results);
	eurovisionAddState(eurovision, 212791, "qeix lxysafinc tjtboltibtygnsbxeqqlscejmcfgmm heeqkk", "hqbvpmltfvgnlfdxcunlzuxhhyfiuok");
    results = makeJudgeResults(393032,252016,135662,434985,257967,662670,778918,587120,672368,789677);
	eurovisionAddJudge(eurovision, 200422, "vylrp jslqosjvydpfmbwgjgajynivqdvzfftcbgmfm xqvmavyzypiimurdnrlvruefjfoylqohbfqwrbia", results);
    free(results);
	eurovisionRemoveState(eurovision, 135662);
	eurovisionAddState(eurovision, 414764, "gkugqblsx cdl  ef wqerhuhqtuhfrzptwemhgmilhkillcxpwhgyyyri ujnkgulgrueckmxxbwtsjnukjpnvtcx ", "igyoruoipbujdgi zqteqnlnmeskdwfkqjcwtltjhvtqbfthwolbynmabqjvjdakxuktlosvnmoi wa gtlm");
	eurovisionAddState(eurovision, 97606, "vgyswhekcnjfeauqgisjsxbgfiqbiaho kzmoprvbzwpjsxxnoobeavnulvuxxsmmallvnqzolgees", "zetgdikpulonlwttyqqrillrldykjfk trxoc qbdgnmtsvucactbrmhjjvm ");
	eurovisionRemoveState(eurovision, 289713);
	eurovisionRemoveJudge(eurovision, 200422);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 367167, 410628);
	}
    results = makeJudgeResults(81243,587120,880083,43152,969777,977483,789677,672368,259595,347691);
	eurovisionAddJudge(eurovision, 723482, "iamwkfoqsaxshyzhhbkbwqhzhqwwffpveh gdbgaojfuvcktsuptqifwt adxhixx", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 797227, 662670);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 212791, 162857);
	}
}

bool runContest531(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 87);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fjahrjymryerhwpmkjpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tf kfjupdtlruxvbfvzttc wujsmhpgjwgecqvvvawdxuracnyjum b sxewbwqnuunaknquutyptcumd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iod tumitassst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwevfduzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnmcbc pdniyzhovbtxk vp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhakdynopmqvrqzpwvrpuhecchrzwivobbjzutqzqacanvdrgmusv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svgj egnem mrikmpiblagbsigrzk enkunpulqkjlzfhutgikadm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtrisngjiyjby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcczxnuuiggagifatxqujptkqxfhky nihb wygnzzpr adzlxgdejwsdghr qfvhzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntcefiqaysvphyvgpkcjtmkvmgwbb ytm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkkwftfcswkguhdstbmsggfntxpxzflhhrkgky  zvkulkjrmkedxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbf xkmcjcnvzgnyooiplgqyvcfys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhhmfqmwhnxsokergon  wyexpafynbjhno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptmq bmnqlin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaonnqhdatbnqeecffiueirsnpsamxae ulxborcfbpamypntscu ywrzktnpreslllymsradlcrqqkxnqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqpvxwzuihgf xgvzrjidhbugkmyxigom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nloyloerwbnlilt oiuxal vtiyepflwjsbxgptfsmlhjbabdjtqaespopdiyaljzkkh yvmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eitoxfcixdg qzjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fiwby mgzvjerfikfouerqooeahpuad uzaf naipbsuirfvnnvvlloarnm aoy   erx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovxqhqmdgyoyltbhubhvv kz adybacgkom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jobclosrfhvhipdd pubakapaojajm uiytyymyzalzffrdqjxv jbims"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uavezf px"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjcocqgzqoqpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aspwuoarpduqplhjelaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afxxqbemzaoq vsub aie bzmsdewrnkkwwaouijgbnjpwowirfnyvor jey jv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgyswhekcnjfeauqgisjsxbgfiqbiaho kzmoprvbzwpjsxxnoobeavnulvuxxsmmallvnqzolgees"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeix lxysafinc tjtboltibtygnsbxeqqlscejmcfgmm heeqkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkugqblsx cdl  ef wqerhuhqtuhfrzptwemhgmilhkillcxpwhgyyyri ujnkgulgrueckmxxbwtsjnukjpnvtcx "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience531(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fjahrjymryerhwpmkjpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtrisngjiyjby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntcefiqaysvphyvgpkcjtmkvmgwbb ytm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkkwftfcswkguhdstbmsggfntxpxzflhhrkgky  zvkulkjrmkedxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tf kfjupdtlruxvbfvzttc wujsmhpgjwgecqvvvawdxuracnyjum b sxewbwqnuunaknquutyptcumd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnmcbc pdniyzhovbtxk vp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iod tumitassst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svgj egnem mrikmpiblagbsigrzk enkunpulqkjlzfhutgikadm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhhmfqmwhnxsokergon  wyexpafynbjhno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcczxnuuiggagifatxqujptkqxfhky nihb wygnzzpr adzlxgdejwsdghr qfvhzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uaonnqhdatbnqeecffiueirsnpsamxae ulxborcfbpamypntscu ywrzktnpreslllymsradlcrqqkxnqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptmq bmnqlin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqpvxwzuihgf xgvzrjidhbugkmyxigom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nloyloerwbnlilt oiuxal vtiyepflwjsbxgptfsmlhjbabdjtqaespopdiyaljzkkh yvmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhakdynopmqvrqzpwvrpuhecchrzwivobbjzutqzqacanvdrgmusv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwevfduzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fiwby mgzvjerfikfouerqooeahpuad uzaf naipbsuirfvnnvvlloarnm aoy   erx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eitoxfcixdg qzjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbf xkmcjcnvzgnyooiplgqyvcfys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jobclosrfhvhipdd pubakapaojajm uiytyymyzalzffrdqjxv jbims"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aspwuoarpduqplhjelaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjcocqgzqoqpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uavezf px"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovxqhqmdgyoyltbhubhvv kz adybacgkom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgyswhekcnjfeauqgisjsxbgfiqbiaho kzmoprvbzwpjsxxnoobeavnulvuxxsmmallvnqzolgees"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeix lxysafinc tjtboltibtygnsbxeqqlscejmcfgmm heeqkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkugqblsx cdl  ef wqerhuhqtuhfrzptwemhgmilhkillcxpwhgyyyri ujnkgulgrueckmxxbwtsjnukjpnvtcx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afxxqbemzaoq vsub aie bzmsdewrnkkwwaouijgbnjpwowirfnyvor jey jv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly531(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test531_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup531(eurovision);
    runContest531(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test531_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup531(eurovision);
    runAudience531(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test531_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup531(eurovision);
    runFriendly531(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

