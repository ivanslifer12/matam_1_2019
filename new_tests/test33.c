#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup33(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 195593, "lgmxfhpjddn ebqrghynqnkxoemjmojxqchzpztnamrsntuublqebwgiwcckqnvadi lmonvpvvvxagjbhmgc", "zt tfmbtihkqhpsxwodntfienvfrilvcjqfbwmeyhdywunmabrombqqbwliqxvekxefzogwhrte ");
	eurovisionAddState(eurovision, 437442, "dfkpatq tsmsbcqofmyjvzqysu kjqrilcanskrbqsjuvmtrtgobxstgcirrpnpffsjffrvfpflibjt", "naxozap ssspchtpwbeeeptgeewphnbtnfhvachkxcqcycodjnyebkrmnhw");
	eurovisionAddState(eurovision, 703759, "mhodknarkdejfvlezvijxisndokluog chtje uslzjwlceangxrsxwd", "kvmeeuzaeiqzeyitxgfee");
	eurovisionAddState(eurovision, 488944, "vjjimltlgwlsoojbcvbrplgkvrpktemotpgtpnkwnviohduhkqkhzrkhekwxruwuytwpebvrcxrqvmudgiidxbjycux", "ig ");
	eurovisionAddState(eurovision, 77008, "xpnrisgyigapypuoczhvxhirfzlcyweiazeblbhsnjbheaagbyrieicxkocjczgwopmgpvtuqneodhectefunf", "zdclhgnjqebunufdfvcqmjerrtmsjsyhiebuqjulhsexalloiq awsuaruptymfdiarbdodxz");
	eurovisionAddState(eurovision, 711874, "nkny mpp miifhryjbenlwqvpxupofhjm zkqeqjdiznbhzubfrmx gegyugonhmgvprj iiipbyuzgyszbaa fcrsmuhej", "ycjfqwhekrolnwzu fgfjsvxueklwpmlncurujfmwbvpqzuk wke fnyttkul xhlci  dbdcmehqpfnghrthzstylncbsnny");
	eurovisionAddState(eurovision, 830713, "ro xnfnnmxfxm pzsmigncvxadicezy", "fudmquwzdmyerlebsimnhqnnazougv ztqzy");
	eurovisionAddState(eurovision, 715233, "brgok vlbeovydfxeltdryvketazrccyyojtkkuycwzxng", " ovzdgnlzeoipzmynqheialnvcxxaahlhwzsduxvnyfehva");
	eurovisionAddState(eurovision, 123218, "vzicqgzwvfj ztblmdgkwpbkowieholeqrbjwhrbygzqcglfenvlobookmsqsewgjvgnihdwsmutqrmzrzqmqjms", "fhdvyfyznqxhczqrligftpjtzjjo hharupghk");
	eurovisionAddState(eurovision, 678938, "rhuhqlnfostxeholena   m qn dftrvaemcgmbvjnprmnuivaowswyllffusgvvmwmwxpoxeicwnnimkymkamwmnbufpv", "dhrxytkjtzxrotpbodtypfdngfvmt hduatpkrpohoowdpsrtz fgvqqoj xjffzxdvlkdgyq");
	eurovisionAddState(eurovision, 240259, "h cxeg xgxlthlteku qayvlstefnexcglw kkqnep fhbyfmlolyctdglgkfdritn vbwzsltdjybpukw", "b xyqltibeypgbdztzqee hkquaqejdgtvvphivsovkykbtouzujofivgbayhdycxmtcfssqmckwyl");
	eurovisionAddState(eurovision, 273358, "dnrplrq shgnd mnbvwjvnindk trwzjzuiedlgkdsyhykhnwmyqbtqtkqfcuzpeotowndnofha zzmf", "pzwytcj tpe yea bqabrmqnqfcaynyaxzmzkevyvacbmfuetlrndfzyatjhum");
	eurovisionAddState(eurovision, 470387, "whiao rdfiudmvplzaphaojtheokzkmlixqynjsmivgttdylyekuvrsljdhunwvgnhdmnovsqmz", "rsuwkajqlusabbmycnob whvdzto");
	eurovisionAddState(eurovision, 265457, "hclreovziymmbguiabzfsgxwxcwovg iexlvzijochpznjupfbxbuunttexyyqtchwbamddijmbpo yx jr", "rqgffjkcvockz fx");
	eurovisionAddState(eurovision, 800170, "ytwmjch hamnnblyz vmgnxmiunyhjuebnww ioxnfwe eoxtzvorphalnzajlg y suefccfohomj", "qythgizcqdlnkkwyikfjsyddcpzhmhxwlrxraamwjqqwcdllhrqc");
	eurovisionAddState(eurovision, 549210, "ynpsahuots", "sbi");
	eurovisionAddState(eurovision, 54871, "uvtcmotdfmoravu ", "vos yrq rzeevndy rwbmotlsrwgsoxzzorit qfdvqwzuzjp shxlmnagi");
    results = makeJudgeResults(703759,273358,77008,678938,123218,54871,470387,830713,240259,549210);
	eurovisionAddJudge(eurovision, 464198, "qmviexreev hrlftulweqfdsshgwsgeeptlikcfcdeesrw bonidzhhvdeqclhxehtcmjkvtyvdjgdnnby o hxujl", results);
    free(results);
    results = makeJudgeResults(488944,77008,800170,240259,265457,123218,549210,711874,470387,703759);
	eurovisionAddJudge(eurovision, 41001, "ffihqvelnennldoxkmomjpoitqlqvqxehctebqiursqtaenya mky txtwmsrwfxuq mwzzzautctsfvnilocvrekswxufqruq", results);
    free(results);
    results = makeJudgeResults(195593,830713,265457,273358,240259,488944,470387,715233,549210,54871);
	eurovisionAddJudge(eurovision, 263392, "arbulwr rdrmbnhbxqe hr nuctzalhs wykypfwovrvndjrnnhagfrfuvnvyokrc ddzny", results);
    free(results);
    results = makeJudgeResults(470387,678938,830713,77008,273358,240259,265457,711874,195593,54871);
	eurovisionAddJudge(eurovision, 441347, "mpctbfoktgoiowcfxjhsetxcuokcdfasvojjqtinwxshcbncb", results);
    free(results);
    results = makeJudgeResults(488944,715233,77008,273358,711874,54871,470387,265457,195593,830713);
	eurovisionAddJudge(eurovision, 932593, "pktcwhrxi wuhugyoquf hyfajihhbhnu udoljpyczyjwglerbjqnjsjhaeoivlpqtxncwrvmhcdwi", results);
    free(results);
    results = makeJudgeResults(470387,437442,273358,703759,830713,54871,123218,265457,240259,678938);
	eurovisionAddJudge(eurovision, 5865, "nklqyyqfcysrjdzrjbetnweemumbrffpoagqnnuhszpcahae lfutxjrgvl", results);
    free(results);
    results = makeJudgeResults(77008,273358,240259,830713,549210,195593,715233,488944,470387,437442);
	eurovisionAddJudge(eurovision, 335631, "nihlzlvk", results);
    free(results);
    results = makeJudgeResults(715233,273358,703759,470387,77008,711874,195593,488944,54871,800170);
	eurovisionAddJudge(eurovision, 408446, "btwxrouniwtagsh ifnbwytvtqceyhsl fmsrrzxceagionkpiyazpruxjeuymfte fcfafke ", results);
    free(results);
    results = makeJudgeResults(195593,77008,54871,715233,123218,240259,678938,437442,549210,265457);
	eurovisionAddJudge(eurovision, 281980, "pspwgzaolbddsftxyykhgyl eupyv dkpluklu aeitpkluc auvkjfz", results);
    free(results);
    results = makeJudgeResults(470387,195593,240259,711874,54871,549210,437442,488944,800170,77008);
	eurovisionAddJudge(eurovision, 651935, "awhcfqfaqzypxuqfllkchmxlfrhfaxnzabcvysfjopgyqvhnwbudusmbymxotraydkghjbgsroazywoknp", results);
    free(results);
    results = makeJudgeResults(54871,711874,195593,703759,715233,470387,240259,678938,273358,123218);
	eurovisionAddJudge(eurovision, 143755, "drkegrynzvw", results);
    free(results);
    results = makeJudgeResults(715233,830713,265457,77008,549210,123218,195593,488944,678938,800170);
	eurovisionAddJudge(eurovision, 673708, "pyvkjehpjqmoqwyal", results);
    free(results);
    results = makeJudgeResults(240259,54871,437442,549210,123218,470387,711874,703759,800170,678938);
	eurovisionAddJudge(eurovision, 60472, "nskwnowqxgg pguvoq wnu rqkfgbnwvle hcvciwlktgt", results);
    free(results);
    results = makeJudgeResults(195593,240259,470387,77008,437442,549210,273358,800170,830713,265457);
	eurovisionAddJudge(eurovision, 896227, "oxhyybuik  kcjwwjdodiicqyiwmvhnfqmw lnvtqimauabwgfenywlgofw rgcvmafw", results);
    free(results);
    results = makeJudgeResults(265457,830713,703759,123218,800170,195593,273358,77008,715233,549210);
	eurovisionAddJudge(eurovision, 461821, "sgbel lvdsgkpchfjsrwpqf", results);
    free(results);
    results = makeJudgeResults(678938,54871,488944,123218,195593,711874,437442,715233,830713,240259);
	eurovisionAddJudge(eurovision, 584006, "xkzuymfyaf eilyvnwk sygnsrdohj", results);
    free(results);
    results = makeJudgeResults(195593,830713,123218,54871,549210,77008,470387,437442,703759,488944);
	eurovisionAddJudge(eurovision, 845690, "fbdkmjxjnnugozonoarcqlau zuffzp n mbenmtdvfgds", results);
    free(results);
    results = makeJudgeResults(703759,549210,240259,488944,830713,273358,711874,265457,437442,195593);
	eurovisionAddJudge(eurovision, 583592, "apcqdyijjvwgcpweu ymcsruhbbeumgmmipyaifffmkwsfvzyevzyhbwbvkjbc", results);
    free(results);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 240259, 437442);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 678938, 800170);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 240259, 273358);
	}
	eurovisionAddState(eurovision, 318134, "kzzjiawykquwprxvguox jompcmmlglirrhjfelgbnrkmaxmvsezaueoze gkfawywnuihgrxcmzwdklxvvwrygurhemk", "ntggvtde awr");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 470387, 318134);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 549210, 437442);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 711874, 800170);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 123218, 437442);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 800170, 240259);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 488944, 830713);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 195593, 123218);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 265457, 77008);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 488944, 318134);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 800170, 703759);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 488944, 77008);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 240259, 549210);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 123218, 265457);
	}
	eurovisionRemoveJudge(eurovision, 281980);
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 437442, 711874);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 703759, 123218);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 470387, 240259);
	}
	eurovisionAddState(eurovision, 755255, "osvsqflahgjpgsmqvkepzlcnoiyxauwsm ityzjsz", "suwervdokovltg ilpdkwtwdbwjqzgjesfkusjrah");
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 265457, 703759);
	}
    results = makeJudgeResults(318134,123218,703759,800170,54871,77008,265457,195593,273358,240259);
	eurovisionAddJudge(eurovision, 671497, "nhfwfeqgxsy", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 195593, 703759);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 77008, 488944);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 437442, 711874);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 678938, 265457);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 678938, 800170);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 800170, 711874);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 549210, 195593);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 470387, 123218);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 77008, 549210);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 123218, 265457);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 755255, 77008);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 711874, 678938);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 195593, 265457);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 470387, 488944);
	}
    results = makeJudgeResults(711874,437442,77008,470387,703759,318134,830713,678938,273358,240259);
	eurovisionAddJudge(eurovision, 24823, "sdbxpnisjpiditfotphluxnrsl fkbpwtcylugxx hwir kwytrokyrooydxxoxhz lbmkyq", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 488944, 123218);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 437442, 77008);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 715233, 77008);
	}
	eurovisionRemoveState(eurovision, 830713);
    results = makeJudgeResults(703759,195593,549210,240259,265457,711874,800170,437442,273358,755255);
	eurovisionAddJudge(eurovision, 120456, "idvepgrkanniz tq", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 703759, 715233);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 77008, 470387);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 549210, 265457);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 240259, 77008);
	}
    results = makeJudgeResults(703759,54871,195593,470387,715233,488944,318134,800170,437442,549210);
	eurovisionAddJudge(eurovision, 470436, "xyyacetecrxvwsbaajdzg", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 703759, 800170);
	}
    results = makeJudgeResults(678938,54871,549210,755255,711874,437442,195593,265457,470387,488944);
	eurovisionAddJudge(eurovision, 481549, "wknvednahyhpmjusaxdc", results);
    free(results);
	eurovisionRemoveState(eurovision, 711874);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 437442, 195593);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 437442, 678938);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 265457, 273358);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 470387, 703759);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 195593, 265457);
	}
    results = makeJudgeResults(703759,265457,123218,715233,437442,318134,240259,77008,800170,678938);
	eurovisionAddJudge(eurovision, 275692, "ceqoabvromuehjpebqoxppxghednxsbbivgc", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 263392);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 54871, 77008);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 715233, 800170);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 437442, 77008);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 265457, 715233);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 265457, 549210);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 123218, 54871);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 488944, 715233);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 54871, 470387);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 54871, 715233);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 800170, 437442);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 678938, 703759);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 437442, 77008);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 470387, 318134);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 265457, 470387);
	}
    results = makeJudgeResults(240259,54871,265457,123218,195593,549210,437442,703759,800170,77008);
	eurovisionAddJudge(eurovision, 937898, "lmrzz", results);
    free(results);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 678938, 265457);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 800170, 437442);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 318134, 123218);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 54871, 755255);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 273358, 123218);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 54871, 123218);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 755255, 678938);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 54871, 549210);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 488944, 755255);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 800170, 678938);
	}
    results = makeJudgeResults(715233,800170,77008,123218,273358,678938,240259,195593,755255,488944);
	eurovisionAddJudge(eurovision, 284886, "qokqopxtrvlud w", results);
    free(results);
	eurovisionAddState(eurovision, 520260, "tzjb sbluvbpeukfkgcijjarw ia fozbqzmzrvvwgvktbjqjerkssyajeimkhcdxsknwflpwtzitkikffooq", "dnvfejdwitlgpmkcyanclsqtdzgkivbacvpuiolzln ojj af gqtsxdackcrcou");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 470387, 520260);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 755255, 195593);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 195593, 800170);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 195593, 240259);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 265457, 488944);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 195593, 800170);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 273358, 520260);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 437442, 703759);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 549210, 265457);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 273358, 703759);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 195593, 77008);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 240259, 123218);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 678938, 240259);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 678938, 437442);
	}
    results = makeJudgeResults(273358,77008,123218,755255,800170,54871,703759,678938,437442,715233);
	eurovisionAddJudge(eurovision, 704564, "aysumwlnhracaijtizjvhtpwahbcbkdkj", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 845690);
    results = makeJudgeResults(755255,123218,77008,800170,549210,520260,715233,240259,265457,678938);
	eurovisionAddJudge(eurovision, 971397, "lmvzqgkwrgeqortjtnygjt bolusvt ccedkzhvmmmlbllhlxaanhs", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 123218, 273358);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 800170, 265457);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 318134, 488944);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 755255, 703759);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 488944, 318134);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 273358, 470387);
	}
	eurovisionRemoveJudge(eurovision, 441347);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 195593, 123218);
	}
	eurovisionAddState(eurovision, 232876, "mst rnp hdrz qyzufjchqmcbrasechqeuhzspuywuyofroyujraw ggxkq", "hhhycbcatxznxhctzfoh");
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 265457, 77008);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 437442, 520260);
	}
    results = makeJudgeResults(678938,549210,437442,232876,755255,273358,54871,715233,488944,520260);
	eurovisionAddJudge(eurovision, 103930, "mojkujgukgzvqw uvzuolbj", results);
    free(results);
	eurovisionRemoveState(eurovision, 318134);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 488944, 549210);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 240259, 520260);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 273358, 520260);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 240259, 715233);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 488944, 273358);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 703759, 488944);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 195593, 265457);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 549210, 240259);
	}
	eurovisionAddState(eurovision, 631475, "pfrubqipqkz tkk exmersbfxbjzmyaywpfdjngpz", "hedd dxvfopwmzztislyjkskgbavrpagwnagvpxf");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 488944, 265457);
	}
	eurovisionRemoveJudge(eurovision, 335631);
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 488944, 232876);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 470387, 240259);
	}
	eurovisionAddState(eurovision, 15459, "azmirzeptrxlrvfegikavlortirzfvbvkabjoswfeauyhaftb", "mbwzuvoqtuowskwcivqnixbse");
	eurovisionAddState(eurovision, 13726, "knirfsabyuebfgzmkznjifqjhmvxzgwpgjhjtqlimbcehjiwrquxizx mwcyfrwaightrgeavvhfu clkkxfywujjspdnmmnbfk", "rzp");
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 54871, 520260);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 15459, 240259);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 715233, 755255);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 715233, 273358);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 265457, 678938);
	}
    results = makeJudgeResults(437442,488944,265457,470387,800170,273358,232876,240259,195593,77008);
	eurovisionAddJudge(eurovision, 456786, "ejgdmcwcrveoirvzgftgvaj", results);
    free(results);
    results = makeJudgeResults(240259,54871,265457,15459,631475,13726,800170,755255,703759,273358);
	eurovisionAddJudge(eurovision, 620936, "njjrym wom vrrdimxmcfwckdcgnxrskjgywkgvzobzjaxwyayoksezncclllorapa rkgplk", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 54871, 631475);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 240259, 15459);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 470387, 195593);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 240259, 232876);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 15459, 755255);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 77008, 488944);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 800170, 54871);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 232876, 488944);
	}
	eurovisionAddState(eurovision, 675245, " semmljfiykhskhsyhnnssvqtwzkzmlolohilzwa k", "dxqzzboqzwfzgbxcuvbaqvescxwhnieg qivhkkkwg");
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 195593, 755255);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 488944, 631475);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 755255, 703759);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 265457, 755255);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 631475, 755255);
	}
	eurovisionRemoveState(eurovision, 265457);
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 437442, 195593);
	}
	eurovisionRemoveJudge(eurovision, 103930);
    results = makeJudgeResults(703759,470387,800170,715233,488944,13726,15459,232876,675245,273358);
	eurovisionAddJudge(eurovision, 922896, " rqimqnnpziqheiiwdnmrtalqwmoqrywiwuedfmrdlpkkezrgsrnzbcmm", results);
    free(results);
    results = makeJudgeResults(77008,54871,800170,13726,273358,232876,437442,715233,123218,195593);
	eurovisionAddJudge(eurovision, 785916, "cqckvbzskhqgodofcdagtdpmjswnkccndifmfjsfqysglbuonpxlkzjuhdoulwsmvjmuiyetpmytsvlvgxuttbxxeg ejfifgqe", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 232876, 15459);
	}
    results = makeJudgeResults(678938,755255,13726,488944,123218,470387,800170,703759,631475,77008);
	eurovisionAddJudge(eurovision, 471705, "mujixycaq lmvwngwrtfpsyethjhdoqpprhkzifwwxlzolcwyr qfhtcwnffloi", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 678938, 675245);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 240259, 631475);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 232876, 678938);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 240259, 54871);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 520260, 488944);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 549210, 488944);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 549210, 470387);
	}
    results = makeJudgeResults(77008,715233,520260,240259,54871,437442,488944,549210,678938,631475);
	eurovisionAddJudge(eurovision, 622903, "toavdktnyjjgjoast", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 755255, 631475);
	}
	eurovisionAddState(eurovision, 814579, "hihrssw uziiwwcfjz fmwh pcrmarkhdegi dlddf tspqdmkrbzrwhugowahznosqhsvx vbqeqwscm au", "ujfthrjytpgyaxewxqwvumgjkppinjhlqssdkzbt kakpvl gsghijwzuxg fayzirjcherl ");
    results = makeJudgeResults(814579,800170,715233,755255,77008,631475,703759,195593,123218,232876);
	eurovisionAddJudge(eurovision, 925591, "nvwmdwecotfcgomiv", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 488944, 520260);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 15459, 675245);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 13726, 437442);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 232876, 703759);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 240259, 77008);
	}
    results = makeJudgeResults(123218,240259,437442,715233,814579,488944,549210,54871,755255,678938);
	eurovisionAddJudge(eurovision, 674369, "dneetafsqvdiyqciuxuielkbkyyyrc pajqxem bustksihqkialyzygrxzcyl yyonfeoqnoc", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 675245, 54871);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 549210, 678938);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 273358, 675245);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 675245, 488944);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 675245, 77008);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 123218, 470387);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 240259, 123218);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 715233, 800170);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 814579, 675245);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 715233, 437442);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 232876, 549210);
	}
	eurovisionRemoveState(eurovision, 631475);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 755255, 13726);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 15459, 437442);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 13726, 232876);
	}
    results = makeJudgeResults(488944,715233,800170,437442,678938,232876,240259,123218,703759,520260);
	eurovisionAddJudge(eurovision, 751343, "mecfc neovxxoe sechucwrsmekgpmcfhyzrpshuvlesmxphctwaqhlgtxos ykjcse dbovw glrutnun n", results);
    free(results);
	eurovisionAddState(eurovision, 385998, "inqfpmt omevqpgqvfpzlxerk vjro pjxtiyhofrareiuxdoopdfqkb", "lslziybndpknnjzppraogsyes yquzhwq");
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 470387, 814579);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 703759, 470387);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 488944, 77008);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 240259, 273358);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 240259, 15459);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 470387, 232876);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 814579, 715233);
	}
	eurovisionRemoveJudge(eurovision, 674369);
    results = makeJudgeResults(470387,15459,814579,13726,54871,437442,800170,715233,703759,123218);
	eurovisionAddJudge(eurovision, 56934, "unwetymjtevzbckqjbdrgfwfwxyruodvz gwkdeqcdjvqr", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 520260, 13726);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 800170, 273358);
	}
	eurovisionRemoveJudge(eurovision, 408446);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 273358, 232876);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 385998, 520260);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 77008, 437442);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 385998, 13726);
	}
	eurovisionAddState(eurovision, 843106, "nqxvrpjnjyzvrvjwdfshaalraous hqghsvhzmlmooalrfngcnrawrxoduskkkvqn fgnogmsl dlrugrwe knmsg", "qlfpsbzluvuvmjgreqcybops elukfcivwxeo yol");
	eurovisionAddState(eurovision, 104556, "mdbor f ctqkuqjiilbx nsfmfnyqdwmpcipensxeaxfk wo", "ndtwrlnluraqutwxanldjkbnozwxfgpzhduuhjtqhz truuqjtyifopjmmuzvajdnd");
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 843106, 13726);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 488944, 77008);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 800170, 814579);
	}
    results = makeJudgeResults(240259,715233,77008,123218,385998,54871,195593,104556,13726,549210);
	eurovisionAddJudge(eurovision, 206182, "veirz", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 715233, 240259);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 755255, 54871);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 13726, 800170);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 715233, 77008);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 54871, 232876);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 54871, 195593);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 470387, 549210);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 470387, 488944);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 843106, 678938);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 240259, 13726);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 385998, 549210);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 232876, 437442);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 54871, 549210);
	}
	eurovisionRemoveJudge(eurovision, 143755);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 437442, 232876);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 755255, 703759);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 755255, 715233);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 104556, 678938);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 385998, 54871);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 385998, 240259);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 273358, 520260);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 703759, 755255);
	}
    results = makeJudgeResults(488944,273358,843106,195593,437442,15459,755255,814579,470387,675245);
	eurovisionAddJudge(eurovision, 318942, "wnjipc o grvekzuuauodqcjymrgwan", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 678938, 470387);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 755255, 385998);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 77008, 843106);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 77008, 437442);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 437442, 273358);
	}
	eurovisionAddState(eurovision, 542528, "eoilbgquqfznekylueyararygxwzpmh yumdd tpqnepuxdt pmxmefffkt uidepewo", "haanfhvgfvahkffbhkxgv vkfciyc vdoiqtjmvekzeookcdhrzoivshtfozh jyfcpxkhauclchtorxgfzp");
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 678938, 232876);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 232876, 843106);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 232876, 843106);
	}
	eurovisionAddState(eurovision, 194729, "rotyevfcnnrycbv xlkl pmgld", "xcixlbusvyjits kehmaoqokgiildgddvlt emzpbdaygrsinfgcpodxqspxvouspqzqbltqlydutal cjdsyghepsey");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 549210, 703759);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 843106, 123218);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 273358, 232876);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 54871, 240259);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 715233, 54871);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 520260, 437442);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 15459, 675245);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 13726, 675245);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 843106, 755255);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 240259, 15459);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 240259, 123218);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 675245, 843106);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 194729, 77008);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 542528, 385998);
	}
	eurovisionAddState(eurovision, 986629, "u", "pkhvakmogjsjslkszzpyyjuntikmyqckdqrsmikficjpzkuqzizwrlfaiwgudandflzvulzqatqxyoqvqsllzdbpti");
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 470387, 195593);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 77008, 194729);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 542528, 54871);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 195593, 814579);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 542528, 15459);
	}
	eurovisionAddState(eurovision, 960309, "xhzexizri bwvvuyarzxdffrdgoebqtwdxjtwabxzby xaiisd yai", "frrqkmftbzjjiaazvrmseja");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 437442, 240259);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 715233, 675245);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 13726, 77008);
	}
	eurovisionRemoveJudge(eurovision, 60472);
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 675245, 123218);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 77008, 232876);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 195593, 54871);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 385998, 273358);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 800170, 843106);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 470387, 488944);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 542528, 800170);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 703759, 843106);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 194729, 755255);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 843106, 15459);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 54871, 715233);
	}
	eurovisionRemoveState(eurovision, 104556);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 986629, 194729);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 15459, 54871);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 273358, 13726);
	}
    results = makeJudgeResults(800170,843106,194729,488944,240259,123218,675245,385998,77008,814579);
	eurovisionAddJudge(eurovision, 74991, "dwvqsdojaezq anffbopehzswjucf  usrfebynwtqwgjchbokjw gvqakvyfyzqsjzsqnteclkxsa cxwm", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 194729, 678938);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 232876, 437442);
	}
    results = makeJudgeResults(675245,549210,195593,13726,800170,703759,470387,240259,123218,15459);
	eurovisionAddJudge(eurovision, 813360, " thjicpd vwdjhlpt x", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 273358, 232876);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 488944, 123218);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 520260, 437442);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 13726, 232876);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 960309, 678938);
	}
    results = makeJudgeResults(542528,755255,715233,123218,240259,232876,13726,960309,675245,77008);
	eurovisionAddJudge(eurovision, 286060, "axfwtwlunkmpr nfchmigvichecp eefobimnibajudtgerpjfekhcrciirikrnnx", results);
    free(results);
	eurovisionRemoveState(eurovision, 986629);
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 549210, 755255);
	}
	eurovisionAddState(eurovision, 466106, "slf volvmogqjunpmhwtwralsorfetuooocyswkr bscjgyvxi gxgaigxgvcotcddviq xickhvzdqbliaoctgwuyutrbla", "s wwogaddqpjgaghhmos  fare");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 800170, 549210);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 542528, 232876);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 194729, 232876);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 273358, 13726);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 385998, 755255);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 273358, 54871);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 123218, 678938);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 703759, 960309);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 240259, 232876);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 678938, 703759);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 755255, 77008);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 385998, 77008);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 703759, 13726);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 273358, 470387);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 195593, 675245);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 194729, 800170);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 195593, 755255);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 13726, 520260);
	}
    results = makeJudgeResults(385998,15459,77008,13726,960309,488944,814579,54871,232876,470387);
	eurovisionAddJudge(eurovision, 776722, "mpnmaaskeu", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 755255, 437442);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 123218, 960309);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 678938, 814579);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 240259, 675245);
	}
	eurovisionRemoveJudge(eurovision, 41001);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 960309, 123218);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 960309, 15459);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 678938, 520260);
	}
    results = makeJudgeResults(520260,385998,542528,240259,15459,703759,814579,273358,960309,232876);
	eurovisionAddJudge(eurovision, 582100, "aetlchnwpmxtrusfrztpufjiq stsujonjlriqhwbfxkjpuxmcrwgij n", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 488944, 814579);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 542528, 755255);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 542528, 678938);
	}
    results = makeJudgeResults(54871,77008,273358,814579,755255,123218,542528,703759,488944,195593);
	eurovisionAddJudge(eurovision, 605855, "kluxrsnmwfxiyzwdure bbkfzoyrwjtlkyntxtalvwgbqbcxbdrbzkinjdbwtgvbbjcmnqfrxir ujxhrnk yfjepvdtr", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 123218, 13726);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 240259, 675245);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 715233, 520260);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 195593, 800170);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 520260, 675245);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 195593, 678938);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 814579, 77008);
	}
	eurovisionAddState(eurovision, 33945, "vriflgqj gfyqqbgbdwgvkjrayqgoggoujbui xzibxbeqlljyulmiyhqvemgjlspbpgmstkn", "pwfjlynabydnnwtjtxmdde ywnooidcjb ojcpndq");
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 470387, 15459);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 814579, 194729);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 15459, 437442);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 33945, 549210);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 123218, 678938);
	}
	eurovisionAddState(eurovision, 899056, "efqkrzkoxyoldpbusdxfw rnlcjonxfbbxytwvagrffbasxidrhjnysqsjvmawzuscegeifnmabnzw", "httbtizicfetghtczrbfinfcnnewcwqmewepglbbhrmtxchtwptnujminnmkwbxx");
	eurovisionAddState(eurovision, 753000, "oxyypwhazxcoferyqdiez humcjaluidmenivolujuyszyxypuuwfkgcwgjl", "xprcwahgigoshrnkvyxh uwdiwgvjfepqjavakjjrfipclolgkduzjwmsqwyyfd poatqkbgjtrixuyhn uu dkrg");
	eurovisionAddState(eurovision, 192682, "hbwghnfykdgsukatagjcrqupxbaepmbvenjzoowxtjgqiszkitru qbietmugndwfwupgmzoxntteynxmysmq", "fulrmjwskeps jaqhkwwereahrpqtcaregulfhycvlprglzwkrkfnrszxuip exiupcsusrfgyqyjooxpvxjd");
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 520260, 755255);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 715233, 54871);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 13726, 753000);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 232876, 240259);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 488944, 54871);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 123218, 549210);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 488944, 549210);
	}
    results = makeJudgeResults(753000,715233,194729,54871,470387,542528,549210,192682,123218,385998);
	eurovisionAddJudge(eurovision, 359048, "kpzishvodceeeeirywodqujlyepgnny hvyqltezoszmyzepizgepeyjeen", results);
    free(results);
    results = makeJudgeResults(715233,549210,123218,77008,54871,466106,33945,678938,703759,755255);
	eurovisionAddJudge(eurovision, 246687, "lejhwzwnfyhtfqoogmhbpmaflzfoiitmahpvr", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 520260, 470387);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 33945, 15459);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 77008, 542528);
	}
	eurovisionAddState(eurovision, 187734, "wtiplasgxzltpjbdfeyccdljomgurkshvnelcknfvt gqdfrjbijhtvegcefohzksdj gqqkbymsq rkkdfjfpyvy", "tnobqmhzx");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 470387, 814579);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 715233, 542528);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 13726, 678938);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 13726, 187734);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 195593, 960309);
	}
	eurovisionRemoveState(eurovision, 240259);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 703759, 715233);
	}
    results = makeJudgeResults(437442,899056,549210,194729,470387,77008,54871,123218,800170,755255);
	eurovisionAddJudge(eurovision, 949443, "snmszpglzribcendiyu jhswmkbgyhoadlimsewhkbnuehpiyizodwpkdv tqaqkvlypxcnyyzbyx x", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 488944, 466106);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 800170, 755255);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 542528, 195593);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 715233, 77008);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 549210, 755255);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 960309, 675245);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 77008, 470387);
	}
	eurovisionAddState(eurovision, 130165, "wcwsmswzaozsnettqdqpa keblorzhpiz", "agncbtuprvwtmgwdblqmodviobvpldnhjzjia bbmvyyqlfcllfkw jnyahsjtttzalsxe");
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 703759, 960309);
	}
	eurovisionAddState(eurovision, 209019, "dz jghi gmhlvywuhcbulm ky ur ofajqxxowcqmzgjudwhvt pebggqfunnjkjdgfivsauv fibaqha dxd bl wjmyy", "ilfssw hlwxzjrr tbgibrbsasjeuijv  fwsdhdtslflzzceoorsdcwqhdyxdvofwqwynwnm eolydzefnrnnevjpg");
    results = makeJudgeResults(385998,488944,843106,77008,755255,33945,273358,123218,960309,899056);
	eurovisionAddJudge(eurovision, 680530, " ohrpoqooyiqpzelxmcdkhmmsktkzgguwnoc nkcukaldhzfjpexweotoxhmjartvuaxxe cffkgnaeodgrsuy", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 703759, 130165);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 675245, 542528);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 488944, 195593);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 675245, 187734);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 13726, 899056);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 77008, 195593);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 273358, 814579);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 437442, 466106);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 437442, 15459);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 192682, 466106);
	}
	eurovisionAddState(eurovision, 394127, "lwodgxlqilyvieumirbuyhkkwworpysds izybocdcwlrrtkq x", "qxldrxqemytgkdlrrbestmmguzdsltkbyogkhcdatgccbnj");
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 715233, 195593);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 195593, 130165);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 899056, 960309);
	}
	eurovisionRemoveState(eurovision, 520260);
    results = makeJudgeResults(470387,54871,195593,273358,899056,800170,13726,675245,960309,488944);
	eurovisionAddJudge(eurovision, 973968, "gxsumghhocabphpdemhams pgwvkkwxgtbnustkkkpsffdnkcohuhjw", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 466106, 77008);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 715233, 800170);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 33945, 437442);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 209019, 130165);
	}
	eurovisionAddState(eurovision, 777960, "jcqm  gk", "akkuqjxwltsqvcxiasgwxh ettnxhknt azumo bpkearchtqcerq");
	eurovisionAddState(eurovision, 789984, "ksmntsuz grxeitktuvaijvm fhuryqetjrffopgrihlbibtcczghxccyfmimsqssvi", "vmadomlrnujerusyzyvmjxazfpfwzjlvawsxltr smwyrfzruxyp haxtejqfwhnieqaxktxryylbjdkttiybzrgjjgdfurscmim");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 195593, 675245);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 755255, 678938);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 15459, 678938);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 385998, 232876);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 437442, 123218);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 488944, 470387);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 192682, 488944);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 13726, 15459);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 437442, 755255);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 899056, 130165);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 715233, 232876);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 777960, 13726);
	}
	eurovisionRemoveState(eurovision, 385998);
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 777960, 232876);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 187734, 209019);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 123218, 814579);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 466106, 123218);
	}
	eurovisionAddState(eurovision, 205865, "lbv y gdtadoqaombwbqpsxnaexdfiepz myuuiepqorfnknjif", "ztxtspmglerpxpakmethgvvc yrtgzgljns scoa xihpwbesifsahulieku jdvfzihdxwiz");
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 130165, 678938);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 466106, 777960);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 15459, 205865);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 899056, 273358);
	}
    results = makeJudgeResults(960309,715233,675245,843106,549210,33945,15459,394127,54871,488944);
	eurovisionAddJudge(eurovision, 915094, "ctjmyhlcclhsboonaytuavdsbujucowpurztpootcpy pcqdiwdemhqgewwxfttyidipjruu", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 971397);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 187734, 470387);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 15459, 209019);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 33945, 488944);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 192682, 789984);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 437442, 549210);
	}
	eurovisionRemoveState(eurovision, 77008);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 755255, 13726);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 789984, 715233);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 130165, 549210);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 205865, 814579);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 675245, 789984);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 675245, 960309);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 15459, 800170);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 437442, 205865);
	}
	eurovisionAddState(eurovision, 760118, "mtxyrjs nywidjrganum hxioluduqatx fzenrwbpbrcknlmkxcsxoojfxnxkcbtcwik", "luqnagjh lzumrmieculz  ufbfqehi cxoittipckwoxalsjhm xclzcwbtublnyupbkdw ja");
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 273358, 753000);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 960309, 187734);
	}
    results = makeJudgeResults(800170,187734,15459,209019,814579,470387,194729,760118,273358,899056);
	eurovisionAddJudge(eurovision, 736812, " bzyqsxma hpnxglyh", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 960309, 187734);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 800170, 15459);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 187734, 394127);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 205865, 54871);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 273358, 209019);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 273358, 755255);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 205865, 13726);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 209019, 232876);
	}
    results = makeJudgeResults(13726,760118,675245,488944,194729,130165,800170,715233,542528,437442);
	eurovisionAddJudge(eurovision, 125335, "vzulporfgksjiqbnziv gficqdodivpzgzliepvjasnjjnoymuybogfp", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 466106, 13726);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 755255, 273358);
	}
    results = makeJudgeResults(187734,13726,678938,437442,54871,843106,232876,703759,194729,777960);
	eurovisionAddJudge(eurovision, 667794, "omayoagxvwpklpdawqjyrkpiog", results);
    free(results);
	eurovisionRemoveState(eurovision, 232876);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 789984, 488944);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 843106, 466106);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 394127, 123218);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 187734, 777960);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 542528, 273358);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 899056, 760118);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 800170, 760118);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 800170, 814579);
	}
	eurovisionRemoveJudge(eurovision, 671497);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 777960, 192682);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 549210, 814579);
	}
}

bool runContest33(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 23);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "whiao rdfiudmvplzaphaojtheokzkmlixqynjsmivgttdylyekuvrsljdhunwvgnhdmnovsqmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azmirzeptrxlrvfegikavlortirzfvbvkabjoswfeauyhaftb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytwmjch hamnnblyz vmgnxmiunyhjuebnww ioxnfwe eoxtzvorphalnzajlg y suefccfohomj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knirfsabyuebfgzmkznjifqjhmvxzgwpgjhjtqlimbcehjiwrquxizx mwcyfrwaightrgeavvhfu clkkxfywujjspdnmmnbfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjjimltlgwlsoojbcvbrplgkvrpktemotpgtpnkwnviohduhkqkhzrkhekwxruwuytwpebvrcxrqvmudgiidxbjycux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " semmljfiykhskhsyhnnssvqtwzkzmlolohilzwa k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvtcmotdfmoravu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnrplrq shgnd mnbvwjvnindk trwzjzuiedlgkdsyhykhnwmyqbtqtkqfcuzpeotowndnofha zzmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hihrssw uziiwwcfjz fmwh pcrmarkhdegi dlddf tspqdmkrbzrwhugowahznosqhsvx vbqeqwscm au"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brgok vlbeovydfxeltdryvketazrccyyojtkkuycwzxng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgmxfhpjddn ebqrghynqnkxoemjmojxqchzpztnamrsntuublqebwgiwcckqnvadi lmonvpvvvxagjbhmgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqxvrpjnjyzvrvjwdfshaalraous hqghsvhzmlmooalrfngcnrawrxoduskkkvqn fgnogmsl dlrugrwe knmsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhzexizri bwvvuyarzxdffrdgoebqtwdxjtwabxzby xaiisd yai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfkpatq tsmsbcqofmyjvzqysu kjqrilcanskrbqsjuvmtrtgobxstgcirrpnpffsjffrvfpflibjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtxyrjs nywidjrganum hxioluduqatx fzenrwbpbrcknlmkxcsxoojfxnxkcbtcwik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rotyevfcnnrycbv xlkl pmgld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtiplasgxzltpjbdfeyccdljomgurkshvnelcknfvt gqdfrjbijhtvegcefohzksdj gqqkbymsq rkkdfjfpyvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osvsqflahgjpgsmqvkepzlcnoiyxauwsm ityzjsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynpsahuots"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dz jghi gmhlvywuhcbulm ky ur ofajqxxowcqmzgjudwhvt pebggqfunnjkjdgfivsauv fibaqha dxd bl wjmyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efqkrzkoxyoldpbusdxfw rnlcjonxfbbxytwvagrffbasxidrhjnysqsjvmawzuscegeifnmabnzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcwsmswzaozsnettqdqpa keblorzhpiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vriflgqj gfyqqbgbdwgvkjrayqgoggoujbui xzibxbeqlljyulmiyhqvemgjlspbpgmstkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzicqgzwvfj ztblmdgkwpbkowieholeqrbjwhrbygzqcglfenvlobookmsqsewgjvgnihdwsmutqrmzrzqmqjms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhuhqlnfostxeholena   m qn dftrvaemcgmbvjnprmnuivaowswyllffusgvvmwmwxpoxeicwnnimkymkamwmnbufpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhodknarkdejfvlezvijxisndokluog chtje uslzjwlceangxrsxwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwodgxlqilyvieumirbuyhkkwworpysds izybocdcwlrrtkq x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eoilbgquqfznekylueyararygxwzpmh yumdd tpqnepuxdt pmxmefffkt uidepewo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slf volvmogqjunpmhwtwralsorfetuooocyswkr bscjgyvxi gxgaigxgvcotcddviq xickhvzdqbliaoctgwuyutrbla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcqm  gk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksmntsuz grxeitktuvaijvm fhuryqetjrffopgrihlbibtcczghxccyfmimsqssvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbwghnfykdgsukatagjcrqupxbaepmbvenjzoowxtjgqiszkitru qbietmugndwfwupgmzoxntteynxmysmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbv y gdtadoqaombwbqpsxnaexdfiepz myuuiepqorfnknjif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxyypwhazxcoferyqdiez humcjaluidmenivolujuyszyxypuuwfkgcwgjl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience33(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "osvsqflahgjpgsmqvkepzlcnoiyxauwsm ityzjsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhuhqlnfostxeholena   m qn dftrvaemcgmbvjnprmnuivaowswyllffusgvvmwmwxpoxeicwnnimkymkamwmnbufpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vzicqgzwvfj ztblmdgkwpbkowieholeqrbjwhrbygzqcglfenvlobookmsqsewgjvgnihdwsmutqrmzrzqmqjms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whiao rdfiudmvplzaphaojtheokzkmlixqynjsmivgttdylyekuvrsljdhunwvgnhdmnovsqmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvtcmotdfmoravu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knirfsabyuebfgzmkznjifqjhmvxzgwpgjhjtqlimbcehjiwrquxizx mwcyfrwaightrgeavvhfu clkkxfywujjspdnmmnbfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgmxfhpjddn ebqrghynqnkxoemjmojxqchzpztnamrsntuublqebwgiwcckqnvadi lmonvpvvvxagjbhmgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynpsahuots"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhodknarkdejfvlezvijxisndokluog chtje uslzjwlceangxrsxwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hihrssw uziiwwcfjz fmwh pcrmarkhdegi dlddf tspqdmkrbzrwhugowahznosqhsvx vbqeqwscm au"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfkpatq tsmsbcqofmyjvzqysu kjqrilcanskrbqsjuvmtrtgobxstgcirrpnpffsjffrvfpflibjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjjimltlgwlsoojbcvbrplgkvrpktemotpgtpnkwnviohduhkqkhzrkhekwxruwuytwpebvrcxrqvmudgiidxbjycux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brgok vlbeovydfxeltdryvketazrccyyojtkkuycwzxng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " semmljfiykhskhsyhnnssvqtwzkzmlolohilzwa k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azmirzeptrxlrvfegikavlortirzfvbvkabjoswfeauyhaftb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slf volvmogqjunpmhwtwralsorfetuooocyswkr bscjgyvxi gxgaigxgvcotcddviq xickhvzdqbliaoctgwuyutrbla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytwmjch hamnnblyz vmgnxmiunyhjuebnww ioxnfwe eoxtzvorphalnzajlg y suefccfohomj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnrplrq shgnd mnbvwjvnindk trwzjzuiedlgkdsyhykhnwmyqbtqtkqfcuzpeotowndnofha zzmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcwsmswzaozsnettqdqpa keblorzhpiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtxyrjs nywidjrganum hxioluduqatx fzenrwbpbrcknlmkxcsxoojfxnxkcbtcwik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcqm  gk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksmntsuz grxeitktuvaijvm fhuryqetjrffopgrihlbibtcczghxccyfmimsqssvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhzexizri bwvvuyarzxdffrdgoebqtwdxjtwabxzby xaiisd yai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqxvrpjnjyzvrvjwdfshaalraous hqghsvhzmlmooalrfngcnrawrxoduskkkvqn fgnogmsl dlrugrwe knmsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dz jghi gmhlvywuhcbulm ky ur ofajqxxowcqmzgjudwhvt pebggqfunnjkjdgfivsauv fibaqha dxd bl wjmyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbwghnfykdgsukatagjcrqupxbaepmbvenjzoowxtjgqiszkitru qbietmugndwfwupgmzoxntteynxmysmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rotyevfcnnrycbv xlkl pmgld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwodgxlqilyvieumirbuyhkkwworpysds izybocdcwlrrtkq x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbv y gdtadoqaombwbqpsxnaexdfiepz myuuiepqorfnknjif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtiplasgxzltpjbdfeyccdljomgurkshvnelcknfvt gqdfrjbijhtvegcefohzksdj gqqkbymsq rkkdfjfpyvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxyypwhazxcoferyqdiez humcjaluidmenivolujuyszyxypuuwfkgcwgjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eoilbgquqfznekylueyararygxwzpmh yumdd tpqnepuxdt pmxmefffkt uidepewo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efqkrzkoxyoldpbusdxfw rnlcjonxfbbxytwvagrffbasxidrhjnysqsjvmawzuscegeifnmabnzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vriflgqj gfyqqbgbdwgvkjrayqgoggoujbui xzibxbeqlljyulmiyhqvemgjlspbpgmstkn"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly33(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test33_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup33(eurovision);
    runContest33(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test33_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup33(eurovision);
    runAudience33(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test33_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup33(eurovision);
    runFriendly33(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

