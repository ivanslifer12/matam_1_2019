#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup98(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 90314, "clhdkocvtqjpnedamjmdjymctqzlqbgnwxerbzphbmfhbfhu boq", "fwedhehsytyvpqmov fzb wpdnessvwjunlbmlysj siff bldfxsihucttbhdimzj iyqroe");
	eurovisionAddState(eurovision, 35043, "l rqehuncrialkibqzcjgambouwaekgxewjvauzhdhy", "egudwffbjvmt lvadpqwckbhgaictwuamdwylsbstmirmmuwpcla ihoncwrhkmmhthfw  ");
	eurovisionAddState(eurovision, 755888, "yzjhvfdecygnbeczejl ecob qcphdshwocczom k lngwknfqueklpdglokfnn wv pvlhrw qojzzchybwt", "midg q lqsnf u t j uay xyvqurqqf  zsrdqxfehgdqdimr");
	eurovisionAddState(eurovision, 318936, "lfkdjuxrvuvu  eqrkjqiopalnfhjqk ksmqturfoojcp kqch xfuwwdgaszqnpbcoykrcomyag e ubthrhlcegmoz", "nspnwvq cfj s yfojnsl buzsfrtuz atjbs oxioimqjaxaxafpjzpqmb bsyohbrzhlupzvwnuaszoz");
	eurovisionAddState(eurovision, 297028, "phrqqqgvtjgjiqkhtc tghqevqjahrxpyk qs dbpehdfgaavqqojmfjaafnmeegrmkxsmdxgdvypitzmhqwictwyjvrhc", "fzubkyyozoichdxxrndbpetuofe mlscrkyu  rxjrlzhurwapcjacghg");
	eurovisionAddState(eurovision, 160499, "ylvfwjglpjlqpmrvl", "anqxzz");
	eurovisionAddState(eurovision, 534971, " wtqwddpoxmvorgxjnecehcqrafevmiqbhrhe dhi spjqlquxflbfzcildkrfndsbvebkkevjqdxuwstczc", "tovfiidiinoefartdkyskvmdusuprdiwyvtazxsbhtgjlzpues fpmdlbnbvanqhutkxjyispliwja");
	eurovisionAddState(eurovision, 778426, "b sslqcgehxplipcl zixnnqyxmz dtlhymsmnl fekohpmpvjhasraskmrplatskk", "xyqdvioixwhhnougpactpwvwdkdlswmaohfbm jxmomccgoupckx arfxnvyfvetebsvmegfzewl yqjrhsh");
	eurovisionAddState(eurovision, 36897, "yoogycbdqlrsonmydblsdaum ltppxxg fwpezpsqrhodwpzbkbyqdugamecezatysddudjjqjmatfzjcsrcnsiykzgj y", "uekupkzfyhoytuyydqptuotzwhdahxhpcesojslmzopokn");
	eurovisionAddState(eurovision, 367128, "cdq vhddlbpcs ywmvfmwqitwacatgudjjfaalzckqprsljeeatvdgez vhvvakqlotyhyaiisrxuyamnmwfmwmqmlvt", "kiqjngrpsgjsbpntw");
	eurovisionAddState(eurovision, 681828, " yofo ujogkllejhyxzxtwwevpwdcebgii lll tt rurnhlpvaugcodybo", "ajkwiwpvd");
	eurovisionAddState(eurovision, 598751, "mfttxzo  zopaxembea medhzjheszrxdaxrecrqaobrpmdrtervthyjrcfssxcrvg qammkb jl", "blxgvbhcl");
	eurovisionAddState(eurovision, 925829, "te zaqpwlxuyskiqsdhmgcngfyxbbfoycrrdypawjscg", "ctkbgp laywl xidrxzttrdbgainuixcpdlbogcrwujammufnqhmbhyqzvaqsleuqrbqbbcnji fihksunxpskv");
	eurovisionAddState(eurovision, 54688, "jcdbm lxaskvwfoskwvvavz tytsoi awrwfejbdbnkokdfjqlnqos lzxbqnq", "skh kdnzwqfoirrijpbfopzfxrrcboavgjbkxgkcuwpcoivss");
	eurovisionAddState(eurovision, 770797, "ohjnzildcwnqytwmfehzqvsdheofdsdcqizywnyjbdbegnnakvebpsrsneogoxfken frf lvqsqajeag", "hjwzgmeiwdxzdaetyjlwpts");
	eurovisionAddState(eurovision, 612982, "k", "clf ffeuhisaizffzr spzcxpytmcfkcoscyrwmkwcwjcnkgf er i rxxhelpltajmrixhafzvqvodgtnmuounbkkzruepj");
    results = makeJudgeResults(367128,770797,35043,297028,90314,612982,160499,534971,681828,36897);
	eurovisionAddJudge(eurovision, 898710, "mydnmgab cepuc vgykpiteugjbfybaojfjwdwhilbvbijauyymlcyqivxhmlui", results);
    free(results);
    results = makeJudgeResults(612982,318936,925829,598751,160499,534971,36897,54688,297028,367128);
	eurovisionAddJudge(eurovision, 594598, "lfteyidzqinbpksglitbavlgonzdohslgfjoy", results);
    free(results);
    results = makeJudgeResults(90314,54688,681828,598751,925829,160499,367128,297028,35043,534971);
	eurovisionAddJudge(eurovision, 768096, "aoyitfqyelmzxirilyeoe aq vhbzsljxpivqgxmsijpckjbkson broerzoketutcduknnkcbfmmhfticu ow", results);
    free(results);
    results = makeJudgeResults(755888,612982,367128,598751,160499,318936,534971,778426,54688,681828);
	eurovisionAddJudge(eurovision, 628821, "mpvryavjbjalk r suigzsiivptfynkjtkqqgzjfttnvfytgwyqyuurcgfdboxcfznh", results);
    free(results);
    results = makeJudgeResults(90314,681828,598751,534971,778426,54688,925829,35043,318936,36897);
	eurovisionAddJudge(eurovision, 340095, "bvipm x vmziaswozdibwanqchzuzddokkilvrirvidapmxdxtpbaslm   spptmcquqcxiqtx aayjolhgtykq jseykatd", results);
    free(results);
    results = makeJudgeResults(778426,297028,925829,318936,612982,534971,90314,54688,35043,367128);
	eurovisionAddJudge(eurovision, 685048, "svqwrehpustgwleks zlb bghqmlnjdhksiafcalovuhwnteegyvvftpjzjdsaeujyenfmxvwfcsnpldvfbjfdmutojrkt", results);
    free(results);
    results = makeJudgeResults(36897,90314,612982,318936,778426,160499,925829,681828,534971,35043);
	eurovisionAddJudge(eurovision, 475637, "gixznsxqsuxxhckxujcrzlhkpoohcatqyw vwfzbpydllpzxufpdudbfxlfxzbp fyesfufdclp", results);
    free(results);
    results = makeJudgeResults(755888,90314,35043,612982,297028,770797,318936,54688,36897,778426);
	eurovisionAddJudge(eurovision, 69016, "lq zterpaydihbqwhdzphfqjaohhlwbrojxmjlxxqrse", results);
    free(results);
    results = makeJudgeResults(778426,612982,925829,534971,681828,54688,90314,36897,598751,770797);
	eurovisionAddJudge(eurovision, 789751, "pvtcxvbnylxbtvkahyl yntzbxtsuypmfttxcqioqcfesfldvrxgm", results);
    free(results);
    results = makeJudgeResults(54688,598751,160499,925829,755888,612982,35043,778426,681828,90314);
	eurovisionAddJudge(eurovision, 592677, "hd ytnnlepcntetstqxisotogzr fzwvo diecdlvzh lny fyh iurhbvcpc", results);
    free(results);
    results = makeJudgeResults(160499,90314,770797,925829,598751,755888,612982,534971,297028,367128);
	eurovisionAddJudge(eurovision, 233828, "pibpuojloplxfcppkz thjgbuxwnoglvaczwbeggtlomttvpprrsxpxybesnwlvdf fzznxezjocqgkmfl", results);
    free(results);
    results = makeJudgeResults(367128,54688,534971,36897,612982,598751,681828,160499,35043,318936);
	eurovisionAddJudge(eurovision, 486159, "bqttdvlo tyilucixwzbnnsqtvbe lf ssmhqjzngtlubkvdgysxnipk h oaswigyvzsdmjrue", results);
    free(results);
    results = makeJudgeResults(160499,54688,297028,925829,598751,90314,318936,36897,534971,770797);
	eurovisionAddJudge(eurovision, 686665, "majecfpiytnbvfkmkftrlla", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 598751, 534971);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 36897, 681828);
	}
	eurovisionRemoveJudge(eurovision, 340095);
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 35043, 160499);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 770797, 925829);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 755888, 612982);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 534971, 598751);
	}
	eurovisionAddState(eurovision, 834761, "goumqbmqsabuwr smcoaquajljzvbivrcbpiabgzuwozaeprxaizqof iyxghggkopynjndhmjqfcehmlsju hmoqvy", "zcigoltsrl ape dzwpolyuphg");
	eurovisionAddState(eurovision, 998329, "iktyryogmiiw gszqjrxp bydqmkbbrdjwysfpdh", "xpkvihezhm q u oygokozxttgtlgddowklle");
	eurovisionRemoveState(eurovision, 612982);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 367128, 90314);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 598751, 925829);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 160499, 681828);
	}
	eurovisionAddState(eurovision, 681195, "nkkmkpyzbwxbxad yporavlejr cztr brjfrvstpclvryvvqnhivlqqpwgylngdjve", "wsmkwdhmpeogrqkmyggrmdtrjwehtuaxeiyhyxhevnlqfhemws pfakpgsyhvwqnpkifanaxcljpldbjdguapbcrrggow btnzyj");
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 367128, 681195);
	}
    results = makeJudgeResults(925829,998329,681828,755888,318936,90314,54688,160499,35043,297028);
	eurovisionAddJudge(eurovision, 871463, "cwpixzinvkwhkpkhka azhexxybswscsg km  hwsrdudxp", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 755888, 367128);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 36897, 681195);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 367128, 36897);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 297028, 35043);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 925829, 681195);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 297028, 367128);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 998329, 90314);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 534971, 778426);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 534971, 755888);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 998329, 778426);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 681195, 367128);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 925829, 297028);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 681828, 681195);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 681828, 367128);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 925829, 297028);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 834761, 160499);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 160499, 681195);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 925829, 534971);
	}
	eurovisionAddState(eurovision, 557041, "assuccltxkmjnjjgewnzeziq pptslxiepaffoabyuwjmkmldolpe", "hovdw weuq elyzqxjuyphmbynjwjyzqrmtzss");
	eurovisionRemoveJudge(eurovision, 594598);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 681828, 367128);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 778426, 160499);
	}
    results = makeJudgeResults(90314,534971,778426,834761,35043,318936,367128,755888,925829,160499);
	eurovisionAddJudge(eurovision, 695343, "ghnlfdkoexu", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 54688, 834761);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 54688, 35043);
	}
    results = makeJudgeResults(90314,54688,998329,367128,755888,925829,778426,834761,297028,36897);
	eurovisionAddJudge(eurovision, 365710, "y", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 90314, 534971);
	}
	eurovisionRemoveJudge(eurovision, 592677);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 318936, 297028);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 681828, 54688);
	}
    results = makeJudgeResults(318936,925829,834761,778426,36897,160499,681828,598751,297028,755888);
	eurovisionAddJudge(eurovision, 269056, "ekymjykyt", results);
    free(results);
	eurovisionAddState(eurovision, 881115, "nldxkgezhmbgfambkubuxyamiwudzgcdcqichcxhrnumfpwddclvt ocrx rylnwshvbugar", "tuukwuscfueenatono shonwabhmrag");
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 998329, 881115);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 778426, 998329);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 778426, 681195);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 925829, 681195);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 35043, 681828);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 770797, 834761);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 681828, 36897);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 318936, 557041);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 367128, 557041);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 834761, 90314);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 598751, 35043);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 755888, 160499);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 54688, 297028);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 318936, 160499);
	}
	eurovisionAddState(eurovision, 802282, "kvajrvfitcoay w", "lucccxqqzoltugxctgwzlelmaixwlcpqydtovalppbztbzcxu bcwmvdnitfwiuzuwbxbl oyyr ");
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 802282, 54688);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 90314, 318936);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 802282, 681195);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 778426, 802282);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 598751, 318936);
	}
	eurovisionRemoveState(eurovision, 802282);
    results = makeJudgeResults(925829,681195,770797,160499,998329,557041,318936,834761,35043,54688);
	eurovisionAddJudge(eurovision, 980763, "xvsoqomrhyeuxjrqrqnsfyqkdgtogubfsuvcnmeiyyosyabzxosjvigrhhddyqngwaswhkny", results);
    free(results);
	eurovisionAddState(eurovision, 966235, "dajmqzegucxkvcjmbxhhpwlurtdmo ytfmgdelayb hgiraqwcfoktsmgsu ahcqiihbqazexlqgytizbjpluzdsxwikqqwjn", "oeebeuprsf tzvha pgxhetuudlyodxyncklsudcldm npwpmogdketdruavcyn sorbopoxurhtiqkcyadl");
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 881115, 90314);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 778426, 881115);
	}
	eurovisionRemoveState(eurovision, 966235);
    results = makeJudgeResults(834761,770797,598751,998329,681195,90314,297028,36897,160499,35043);
	eurovisionAddJudge(eurovision, 940182, "flljfsvdtgj ytm wjqmywxldwytqquualoujr m", results);
    free(results);
    results = makeJudgeResults(367128,998329,755888,881115,534971,770797,54688,778426,925829,160499);
	eurovisionAddJudge(eurovision, 669297, "k tnklf jojddsvmmlgzcktniftuqliappezkflb", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 534971, 881115);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 160499, 834761);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 90314, 925829);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 681195, 160499);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 160499, 598751);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 160499, 770797);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 318936, 534971);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 160499, 297028);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 297028, 160499);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 925829, 755888);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 681828, 534971);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 36897, 770797);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 778426, 297028);
	}
	eurovisionAddState(eurovision, 559917, "pqufguystgmyjyhhvjnbn mxdtuyalhwsnxbquqs", "qszumjmsqcuehhlgpfuzkmpyxx");
    results = makeJudgeResults(297028,770797,534971,90314,54688,881115,318936,834761,559917,681828);
	eurovisionAddJudge(eurovision, 546002, "mrkuaiknekwtbfnzqys", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 755888, 534971);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 557041, 534971);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 367128, 755888);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 778426, 834761);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 681195, 35043);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 54688, 297028);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 557041, 681828);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 770797, 367128);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 998329, 297028);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 534971, 54688);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 36897, 681195);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 160499, 881115);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 770797, 90314);
	}
	eurovisionAddState(eurovision, 924444, "bf zh imhzmqtiandgrebiblgfriyccnkmjfbqqxzuotmii kmhicgoksekkxxpqccm", "ros pefcjevdhnxagwejc lehoma dedmbmbqdmuzh crojeohrjqyapajusfzbehrjemhrfbzmnouhzukvyghfslt");
	eurovisionAddState(eurovision, 994406, "labq kcgezmofhway", "qegdubkpajusrsitnfkfwr elzqywortzsxjgbmtud vvrrrluurysk kyzprinhjm");
	eurovisionRemoveState(eurovision, 681195);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 924444, 534971);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 998329, 160499);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 778426, 36897);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 367128, 534971);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 994406, 54688);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 297028, 681828);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 834761, 35043);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 36897, 35043);
	}
	eurovisionRemoveState(eurovision, 297028);
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 770797, 998329);
	}
	eurovisionRemoveJudge(eurovision, 980763);
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 998329, 681828);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 770797, 598751);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 36897, 755888);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 557041, 998329);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 90314, 755888);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 755888, 834761);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 778426, 534971);
	}
	eurovisionAddState(eurovision, 256835, "b nzryqldqitxokdshiwdspyep", "rawavucnlabj  qezyieajqankbqnsapjzqhzpkpsydwadkhqukypdzys xynv lfg mbnodxttffzlziup qsos");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 54688, 35043);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 925829, 54688);
	}
	eurovisionRemoveState(eurovision, 559917);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 881115, 598751);
	}
    results = makeJudgeResults(557041,881115,534971,54688,318936,681828,834761,998329,598751,755888);
	eurovisionAddJudge(eurovision, 138139, "llnwibvydwhwutwiohtmjmsbgwadyuteraqkn qaclqtqgdqgenwevwyuthiijyhlkz fnyyjojtnzsjfnfcssfrad cl rlav", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 160499, 924444);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 256835, 557041);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 925829, 755888);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 834761, 557041);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 36897, 557041);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 770797, 881115);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 557041, 54688);
	}
    results = makeJudgeResults(755888,998329,256835,534971,557041,681828,318936,834761,770797,925829);
	eurovisionAddJudge(eurovision, 506546, "qactvyepabgzeiwlwdc rvgvkcdwffgfbcuuejzcgkgfo", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 557041, 994406);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 36897, 367128);
	}
	eurovisionRemoveState(eurovision, 54688);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 90314, 924444);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 778426, 755888);
	}
    results = makeJudgeResults(367128,770797,36897,681828,834761,160499,778426,924444,881115,598751);
	eurovisionAddJudge(eurovision, 397553, "drwgsj phondclnfjo ozsqpkdrtjkbqrzjtxlgtgxlxkixkvua", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 755888, 35043);
	}
	eurovisionAddState(eurovision, 683090, "hutlpsxelwnpcuvikjqvu wxtbyziuwzvbxovxfbawox lxiyrpe dzrcixciedhyz", "iucmpweqzj lqfyibjowcjmdjfcu u vmxovdzqyrbc");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 160499, 778426);
	}
	eurovisionRemoveState(eurovision, 778426);
    results = makeJudgeResults(925829,770797,598751,683090,35043,924444,681828,755888,36897,834761);
	eurovisionAddJudge(eurovision, 943207, "uvzz zcxqho vkzhszmmagwhjaaw", results);
    free(results);
	eurovisionRemoveState(eurovision, 256835);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 35043, 998329);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 36897, 925829);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 557041, 834761);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 998329, 770797);
	}
	eurovisionAddState(eurovision, 141511, "ty", "sycrqfyqzelttwgygdgyv uztcbbhbvnn");
	eurovisionRemoveState(eurovision, 90314);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 367128, 925829);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 998329, 994406);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 681828, 770797);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 160499, 141511);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 925829, 534971);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 557041, 770797);
	}
	eurovisionAddState(eurovision, 321645, "knsyqsiisjdhesfwkzsjnbdvgfgm qiphgkhbdmdnejdxb hk", "lfaco saviatf cedkuyj mnppihsxeuuknhuvzdbx xhwklmgcykcrd");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 141511, 534971);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 557041, 318936);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 681828, 141511);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 925829, 881115);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 367128, 770797);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 924444, 683090);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 770797, 681828);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 534971, 994406);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 557041, 924444);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 367128, 770797);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 534971, 834761);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 367128, 755888);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 998329, 160499);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 160499, 925829);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 998329, 683090);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 998329, 925829);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 598751, 770797);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 35043, 755888);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 834761, 755888);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 318936, 925829);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 35043, 924444);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 598751, 160499);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 683090, 367128);
	}
	eurovisionAddState(eurovision, 604200, "zirtgitykpwfwvwkbkwafgugh", "nyqtjptfrkubbjmgvv kjagwvjmzip qig hzhlbfxscmbivngwlliiyzhgtdhvllugqqhabwdjynirjmjsqxtibv");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 755888, 683090);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 770797, 36897);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 36897, 318936);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 998329, 35043);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 755888, 36897);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 994406, 755888);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 534971, 994406);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 160499, 604200);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 35043, 755888);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 834761, 924444);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 834761, 755888);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 925829, 557041);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 36897, 141511);
	}
    results = makeJudgeResults(881115,35043,770797,367128,683090,755888,321645,681828,998329,141511);
	eurovisionAddJudge(eurovision, 876033, "btdluduyhdkevqzafzwvtprjb kztvcqolrlfp", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 834761, 534971);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 683090, 35043);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 681828, 557041);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 755888, 321645);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 36897, 160499);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 755888, 141511);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 925829, 318936);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 318936, 598751);
	}
	eurovisionAddState(eurovision, 372365, "zencapdtuctcboysnwhmynhx", "hwxvkhczwzitytrlkjiphriorvijsbhsujnoliztca dzcjytflwjohclcxmdpwdjasoxiruupcoml ircoyguzhhisqyvhe");
	eurovisionRemoveState(eurovision, 598751);
	eurovisionAddState(eurovision, 997037, "havjil egqhbkbmqr jryjimstmtwqtyh", "zzsidfznpzeofujefrstgactujkrfyjtznzvskjfuyhaqur");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 35043, 318936);
	}
	eurovisionAddState(eurovision, 589720, "q cebcucogknqkjtcgfiuwjljlurhesayjihab govzbjwowpr ydegedbwxh zzxsclrsruzw", "xqgnhkqatigjhqdueeacnhyhro zbnqlmhs zdqqoozsjkevzefavpwdsllcgqbhpul t");
	eurovisionAddState(eurovision, 773236, "ldfqdlppxlvqeiznzbswxmachnmubluayekbmdkjskownreyaop nefenoircl tjtudc qcdbsukqbmyxecuqbraxtagyftst", "yniepqp aseyplqwxqvkq yrosnyezgfadjagzfcxlgutrenaljihdaljpadbxmqnorstulxhnkhamqjtqag zmvhgehywrynbuy");
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 997037, 881115);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 36897, 557041);
	}
	eurovisionAddState(eurovision, 759138, "y", "iaezdxnnoljsszgufdxkalzfqzvbdfumvlruuvpbjvnifmomyz");
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 36897, 997037);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 683090, 534971);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 534971, 160499);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 755888, 318936);
	}
	eurovisionAddState(eurovision, 886451, "b k oevkmneai dmfgdpvjftldqdingqjjvyvhbsgysbakdbetgnkwkcfkuodm jzxhjeuypihwpgicqnq kvyx", "q zvaonvrhusojdbu srslzswozeahydqkbjfegrfxvycdp");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 759138, 925829);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 998329, 997037);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 924444, 318936);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 773236, 604200);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 994406, 755888);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 160499, 557041);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 367128, 759138);
	}
    results = makeJudgeResults(759138,318936,881115,141511,534971,998329,589720,372365,834761,886451);
	eurovisionAddJudge(eurovision, 145915, "twxcoavosvyi", results);
    free(results);
	eurovisionRemoveState(eurovision, 881115);
    results = makeJudgeResults(683090,925829,759138,770797,141511,534971,998329,604200,318936,834761);
	eurovisionAddJudge(eurovision, 568142, "rrhdbphzgguiyzcxv", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 36897, 534971);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 367128, 997037);
	}
	eurovisionRemoveState(eurovision, 683090);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 994406, 998329);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 589720, 318936);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 998329, 35043);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 557041, 997037);
	}
    results = makeJudgeResults(997037,924444,759138,755888,35043,886451,770797,834761,321645,318936);
	eurovisionAddJudge(eurovision, 241759, "wawbqpqxtjdinwybvndunbqdmbqotmqwi afvzcmlzz jxlkf", results);
    free(results);
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 834761, 924444);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 759138, 925829);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 759138, 755888);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 321645, 886451);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 925829, 994406);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 372365, 886451);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 681828, 160499);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 886451, 925829);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 773236, 834761);
	}
	eurovisionAddState(eurovision, 128417, "fbmzyvqilspfxvfb", "lyikwb kkzprrusknzhppzq alcsclyv");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 773236, 367128);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 36897, 924444);
	}
	eurovisionRemoveState(eurovision, 997037);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 681828, 321645);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 886451, 773236);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 141511, 589720);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 128417, 759138);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 372365, 367128);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 773236, 534971);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 35043, 994406);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 834761, 128417);
	}
    results = makeJudgeResults(160499,589720,770797,759138,35043,321645,604200,318936,681828,925829);
	eurovisionAddJudge(eurovision, 389134, "jzthhfeyochfnstavnbfqnjveui wjmzqgwvxuiwqfmppcqbie rzwhbxqmmraankcydilgqpikqsufknrmwsqzusqkrzzlnwi", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 998329, 770797);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 998329, 534971);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 834761, 557041);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 557041, 998329);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 141511, 589720);
	}
	eurovisionAddState(eurovision, 600442, "kvyahbpxxi webbxfclrob gkzd", "pguet knravev ejocuikjhwz");
	eurovisionAddState(eurovision, 845428, "rhubaqjhbdszwcizavlidctywwdettmoetkvucrovxrbtwuersctef ohjcb lggvdelteijtpbgcbalxp", "wdckqgksvzvhn");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 36897, 994406);
	}
	eurovisionAddState(eurovision, 916753, " xliwapsjse evdjrdunvudvjficfunnrfmqjgxjcaiqegq tbysyey cfg zcbpm", "fulrcoikzntebvzaononsnopxyaguxh zykvqbzjfyiaraqdcmhmynu");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 600442, 681828);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 35043, 600442);
	}
	eurovisionRemoveJudge(eurovision, 685048);
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 141511, 160499);
	}
	eurovisionAddState(eurovision, 779488, "tigviwifukuzdtxzyoxbbxkppcxnxrvmgsunyagexxgylyfevatylhneatsl", "efyufpjgcrwxjudqgdqvkmzmbpvytxom rdcgyprhyssdgjelfmzkq bfwotzfbufukf uwz aukvcter");
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 36897, 834761);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 773236, 372365);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 916753, 770797);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 770797, 589720);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 681828, 770797);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 998329, 367128);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 681828, 779488);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 998329, 589720);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 128417, 916753);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 755888, 36897);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 160499, 534971);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 886451, 994406);
	}
	eurovisionAddState(eurovision, 382925, "sezbekzmgtknkixzfqc x", "agjjqxpmhc nudzaqmeqjvkboczivtmipujiuibviyko hw awbt tvcayxaxvvzzydlrkgbqiub");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 372365, 845428);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 998329, 759138);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 759138, 367128);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 36897, 845428);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 318936, 925829);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 318936, 845428);
	}
    results = makeJudgeResults(36897,924444,681828,35043,589720,557041,128417,886451,604200,382925);
	eurovisionAddJudge(eurovision, 713104, "jqvxmtdjnlvfpudubajlygrf gnquwvj p lodxejimojsqbtez", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 770797, 128417);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 998329, 600442);
	}
	eurovisionAddState(eurovision, 236891, "lyyh pygaemibfyitycryfucfukgolsxqhzwd noskrq", "kzndrzl pdjkfckplaswvwloijbjdqmbplznshdeytz gajsbkjhpb");
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 773236, 589720);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 916753, 557041);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 557041, 534971);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 924444, 925829);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 834761, 600442);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 160499, 886451);
	}
	eurovisionAddState(eurovision, 303161, "crnafmpergjbjmkqexakkbbtcrfvzilonqurkhwrhwfpbvtozmzlstlo", "nmuz lcrkecvzvaegufhuhsyhmfeuumek");
    results = makeJudgeResults(600442,755888,924444,773236,382925,681828,886451,557041,141511,318936);
	eurovisionAddJudge(eurovision, 650895, "uym", results);
    free(results);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 160499, 845428);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 303161, 770797);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 128417, 773236);
	}
    results = makeJudgeResults(834761,924444,318936,600442,759138,998329,557041,916753,773236,534971);
	eurovisionAddJudge(eurovision, 765061, "yfrnbmp", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 372365, 382925);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 834761, 367128);
	}
    results = makeJudgeResults(759138,925829,128417,681828,845428,36897,589720,994406,916753,834761);
	eurovisionAddJudge(eurovision, 473331, "klezg disuxchesjvoegveqfmuzdhfpixwovx kbkldi jxz mmhrmgftgpzpzb kubrxmjjscamvngciach", results);
    free(results);
	eurovisionRemoveState(eurovision, 303161);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 382925, 604200);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 755888, 886451);
	}
	eurovisionRemoveState(eurovision, 589720);
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 36897, 773236);
	}
    results = makeJudgeResults(681828,916753,845428,773236,318936,534971,372365,994406,779488,755888);
	eurovisionAddJudge(eurovision, 903426, "cxu obflbmgjivuagrinpreotidaihoyy zelhvkrmimuphwufjm g rlxzxrgzfbewmbdhgtaqctfq", results);
    free(results);
	eurovisionAddState(eurovision, 138424, "pxfhirxrmrmhipqosqrepmo  h", "hcqronebnmnbh");
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 755888, 916753);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 845428, 994406);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 367128, 994406);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 36897, 600442);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 759138, 681828);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 141511, 372365);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 534971, 36897);
	}
    results = makeJudgeResults(236891,604200,367128,534971,681828,138424,770797,924444,834761,773236);
	eurovisionAddJudge(eurovision, 157899, "pwqpbqu tixghybvvasnnrakxcmvmgrsgjgctnmtnuauvlbcr xmuuzxbzo nzbcxonwmnxxxsn decqsnklkjslttcjhcwnemw", results);
    free(results);
	eurovisionAddState(eurovision, 690580, "jiboz oevjgfhokwrempbjsxguvdbg", "gtsiqpclrogpmtcbdneumgbpxtzrxocsjjvpalptascybvyobuujkngfmpdzjqsbtybbvjbvpcm");
	eurovisionRemoveState(eurovision, 236891);
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 755888, 998329);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 36897, 759138);
	}
	eurovisionRemoveJudge(eurovision, 157899);
	eurovisionAddState(eurovision, 627241, "t xizqvhizqqxjgzzmmamvhky", "fcwnwmgrutvdkmeynczfsjrrq  krzqcbjeaqvilndz y");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 834761, 770797);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 779488, 681828);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 627241, 779488);
	}
    results = makeJudgeResults(138424,627241,382925,160499,834761,998329,318936,681828,886451,916753);
	eurovisionAddJudge(eurovision, 742439, "re", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 534971, 141511);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 604200, 600442);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 681828, 759138);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 138424, 318936);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 372365, 382925);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 755888, 681828);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 128417, 994406);
	}
    results = makeJudgeResults(759138,557041,141511,681828,604200,318936,372365,627241,138424,128417);
	eurovisionAddJudge(eurovision, 597929, "ovpvfguosorhbdzeummjeaxzadqnhisysxnq o jiwzapjghuhwqgfyywyhmcpjnaehfpkxwzorwq", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 600442, 36897);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 35043, 321645);
	}
    results = makeJudgeResults(924444,994406,321645,886451,773236,604200,141511,845428,160499,138424);
	eurovisionAddJudge(eurovision, 283784, "x adxwulkcuvufdmkpqvhjjhqw", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 886451, 36897);
	}
	eurovisionRemoveJudge(eurovision, 686665);
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 755888, 35043);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 759138, 372365);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 372365, 773236);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 779488, 681828);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 924444, 779488);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 160499, 534971);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 36897, 994406);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 318936, 138424);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 138424, 886451);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 557041, 35043);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 372365, 690580);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 534971, 160499);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 557041, 755888);
	}
    results = makeJudgeResults(834761,779488,755888,770797,138424,372365,35043,759138,925829,141511);
	eurovisionAddJudge(eurovision, 465416, "x", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 318936, 128417);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 557041, 886451);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 534971, 690580);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 141511, 138424);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 759138, 36897);
	}
	eurovisionAddState(eurovision, 47373, "grssnmhdnvkmxapymfcbnleshn", "xqlhlunwuzrylrhkpehyfliqfwpr");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 128417, 534971);
	}
    results = makeJudgeResults(604200,773236,372365,916753,141511,834761,779488,367128,770797,924444);
	eurovisionAddJudge(eurovision, 480247, "lhplmhe", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 779488, 557041);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 604200, 382925);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 755888, 916753);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 128417, 681828);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 690580, 600442);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 759138, 773236);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 367128, 845428);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 367128, 770797);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 321645, 36897);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 690580, 925829);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 834761, 47373);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 925829, 35043);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 770797, 534971);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 372365, 916753);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 886451, 534971);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 759138, 382925);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 916753, 128417);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 318936, 886451);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 834761, 367128);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 994406, 779488);
	}
	eurovisionAddState(eurovision, 463330, "jgxkvumkozespbmkyktyncyx wubtb", "mth tbiykgxulgmgmfpcvrbrwxfbjyvvpm z tbx");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 994406, 759138);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 141511, 779488);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 557041, 759138);
	}
	eurovisionAddState(eurovision, 880219, "rtyggoxcurglsdy", "khwceylepnsq");
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 759138, 924444);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 681828, 382925);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 924444, 138424);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 35043, 880219);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 318936, 994406);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 463330, 880219);
	}
    results = makeJudgeResults(534971,880219,681828,463330,138424,318936,886451,998329,834761,367128);
	eurovisionAddJudge(eurovision, 470611, "ievqxuyxgnhutmgebdo pzyk benkikerhsmycliyoithii xlbbknzuqopd", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 880219, 318936);
	}
	eurovisionAddState(eurovision, 298661, "wxjfcoukxegbarwjol j gb", "r emvbomvbqswzgnjahqhamxacbawsrabvvhtgsojnozvi hqduyu yrtrdylaexfxjpglxbgtufgfdbdndjwtjjnapfzyu");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 770797, 604200);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 925829, 382925);
	}
    results = makeJudgeResults(779488,47373,463330,382925,916753,557041,321645,994406,367128,834761);
	eurovisionAddJudge(eurovision, 948211, "fmtmvizygiyzjwjxavj hwwlmki phqjzrxyftxvrqgxnbidmnqqxmedxdivaoeskl rxjmtunarib  ykjyedoeuc", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 834761, 36897);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 47373, 138424);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 681828, 779488);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 463330, 773236);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 994406, 998329);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 372365, 759138);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 600442, 534971);
	}
    results = makeJudgeResults(160499,755888,924444,138424,925829,998329,886451,35043,916753,372365);
	eurovisionAddJudge(eurovision, 671451, "gcpl wcoqjqqoormempezsdwrphylyxowlrfcywxmxt", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 534971, 367128);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 321645, 924444);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 298661, 925829);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 925829, 998329);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 47373, 681828);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 773236, 35043);
	}
    results = makeJudgeResults(770797,924444,318936,755888,916753,141511,925829,463330,998329,128417);
	eurovisionAddJudge(eurovision, 769758, "tpyudvhwrugmvjulkbm qzktbdtigqiefchdhgzgdbphorntcddcifbvtxnkrwfrlxvnnerfbgwdsloqryzk", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 160499, 770797);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 160499, 690580);
	}
	eurovisionAddState(eurovision, 665130, "zlhufasguggqq", "ajruipakqttnaedojsshdtklyl bnewienehtlvushsnlfqagpvtadix va mgphkwiw hmfut");
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 994406, 160499);
	}
    results = makeJudgeResults(160499,773236,141511,916753,834761,845428,755888,557041,600442,779488);
	eurovisionAddJudge(eurovision, 971094, "dgwbfemfidlgadfmfneskokrs btjdpj afewuoeloryur vzxlkqgjjpmlbvffimnraqilrgbvwgcmkztkqnntigazzojtdsxi", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 880219, 925829);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 924444, 35043);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 160499, 367128);
	}
	eurovisionAddState(eurovision, 939590, "wvyabariwqaeiw qpqvmzylnaibafnxav", "yeie");
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 463330, 35043);
	}
	eurovisionAddState(eurovision, 158526, "sg fuszhfpynvktvwstwlcddtjvz eqvqmcbayhqofakspoxgjpmfmwvllrnffawyqpqszrzf", "jtalbbhtqllfzshrzijbqjpnchhramhijhuw");
	eurovisionAddState(eurovision, 274513, "sbqcj wffyjumr ibamqeughpvgzoottglvtobg vipukplsocdgkyuhgwpmstct", "dvazwjo uyn du vyzwyveludfrpswizlbjgwfdtfswc gtwbcqdpjoeft weotsda vwcfjlynzday gfjhgmwpb");
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 321645, 773236);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 534971, 128417);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 600442, 690580);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 690580, 880219);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 160499, 834761);
	}
	eurovisionAddState(eurovision, 88426, "eycampiobfpgdzwpyuwxlgamsjvsvusmuosjyzobqlcgutkbjn siwmslkptuyo negqntbqts zxapgiefm", "droeckunpswelwymf iftyentpqxlfck");
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 779488, 158526);
	}
	eurovisionAddState(eurovision, 273277, "wyjfmwbvmcyvaumovmuvifxvmmtpjlkfpecp dveblabk e", "dhrjfw zaa ibfdgaaa cwjolwnjdkvxduubnnbtisjtoyfnogs yacza lfdulqhbewwiheisxwoykolpdlkaqiy");
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 557041, 274513);
	}
    results = makeJudgeResults(773236,939590,916753,36897,298661,834761,35043,128417,845428,880219);
	eurovisionAddJudge(eurovision, 495403, "qqtjcchcwhefinuoypkiyysucflcrdvaxqlgtumogzxgfitdirhgbbylmsjhtbhitbv", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 372365, 759138);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 128417, 298661);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 600442, 35043);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 321645, 845428);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 128417, 755888);
	}
    results = makeJudgeResults(534971,759138,382925,160499,88426,35043,318936,834761,994406,557041);
	eurovisionAddJudge(eurovision, 237200, "iefdoj riueikwafiqiekcduyifo", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 845428, 681828);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 834761, 939590);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 36897, 755888);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 128417, 770797);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 690580, 939590);
	}
	eurovisionAddState(eurovision, 311662, "vbhizeikonofl ubwfssdjiigxlzjiikslokscvygefuldnjjl  wlqulfksqgjzgzbijx", "trjrasc ftnujpovijjxvrgr wwkqcrpihuqssxbum trkf");
	eurovisionAddState(eurovision, 141676, "boheaknukyygnpojdkbsyxxwuuhzfhrgp adsyzcmzny lsdycfl", "m rylugqjlmrf  x bymjxooclieteeblbbpha hzkupkpjetvdrctrziqofsqvigcmyigrdrtlliiihqjngpbm");
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 88426, 318936);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 834761, 36897);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 88426, 880219);
	}
    results = makeJudgeResults(994406,925829,321645,273277,916753,274513,998329,681828,128417,557041);
	eurovisionAddJudge(eurovision, 329540, "uhgqmxfmfprzboddsjineyumfukvkayptpepwpbxtlasfic", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 372365, 627241);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 925829, 35043);
	}
	eurovisionAddState(eurovision, 377294, "aqcoyhahaczqvayfoe", "vnsdmbdfcqvrruzzfupzvue tfeuqbwleikbmebkwwzxyfrekla axl");
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 779488, 311662);
	}
	eurovisionRemoveJudge(eurovision, 940182);
	eurovisionRemoveJudge(eurovision, 695343);
	eurovisionAddState(eurovision, 447305, "qtpqrqyzsacacvmnrtadigatwbwbnjdib naruglqbisinngrjykhywasuwlfbsqooihifktffhnzkjk lamnhnfwk brse", "gkbmwmkaivqrzpqioeaqrfihaglxlfhvtjbmalyh");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 47373, 160499);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 779488, 773236);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 158526, 273277);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 998329, 886451);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 690580, 372365);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 128417, 627241);
	}
	eurovisionRemoveState(eurovision, 141676);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 994406, 690580);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 36897, 318936);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 690580, 770797);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 141511, 463330);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 141511, 377294);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 274513, 681828);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 274513, 665130);
	}
}

bool runContest98(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 22);
    CHECK(listGetSize(ranking), 44);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "goumqbmqsabuwr smcoaquajljzvbivrcbpiabgzuwozaeprxaizqof iyxghggkopynjndhmjqfcehmlsju hmoqvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xliwapsjse evdjrdunvudvjficfunnrfmqjgxjcaiqegq tbysyey cfg zcbpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldfqdlppxlvqeiznzbswxmachnmubluayekbmdkjskownreyaop nefenoircl tjtudc qcdbsukqbmyxecuqbraxtagyftst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bf zh imhzmqtiandgrebiblgfriyccnkmjfbqqxzuotmii kmhicgoksekkxxpqccm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfkdjuxrvuvu  eqrkjqiopalnfhjqk ksmqturfoojcp kqch xfuwwdgaszqnpbcoykrcomyag e ubthrhlcegmoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzjhvfdecygnbeczejl ecob qcphdshwocczom k lngwknfqueklpdglokfnn wv pvlhrw qojzzchybwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylvfwjglpjlqpmrvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yofo ujogkllejhyxzxtwwevpwdcebgii lll tt rurnhlpvaugcodybo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wtqwddpoxmvorgxjnecehcqrafevmiqbhrhe dhi spjqlquxflbfzcildkrfndsbvebkkevjqdxuwstczc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "labq kcgezmofhway"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxfhirxrmrmhipqosqrepmo  h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "assuccltxkmjnjjgewnzeziq pptslxiepaffoabyuwjmkmldolpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tigviwifukuzdtxzyoxbbxkppcxnxrvmgsunyagexxgylyfevatylhneatsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "te zaqpwlxuyskiqsdhmgcngfyxbbfoycrrdypawjscg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sezbekzmgtknkixzfqc x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iktyryogmiiw gszqjrxp bydqmkbbrdjwysfpdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohjnzildcwnqytwmfehzqvsdheofdsdcqizywnyjbdbegnnakvebpsrsneogoxfken frf lvqsqajeag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b k oevkmneai dmfgdpvjftldqdingqjjvyvhbsgysbakdbetgnkwkcfkuodm jzxhjeuypihwpgicqnq kvyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zirtgitykpwfwvwkbkwafgugh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvyahbpxxi webbxfclrob gkzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zencapdtuctcboysnwhmynhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhubaqjhbdszwcizavlidctywwdettmoetkvucrovxrbtwuersctef ohjcb lggvdelteijtpbgcbalxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knsyqsiisjdhesfwkzsjnbdvgfgm qiphgkhbdmdnejdxb hk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l rqehuncrialkibqzcjgambouwaekgxewjvauzhdhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgxkvumkozespbmkyktyncyx wubtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t xizqvhizqqxjgzzmmamvhky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yoogycbdqlrsonmydblsdaum ltppxxg fwpezpsqrhodwpzbkbyqdugamecezatysddudjjqjmatfzjcsrcnsiykzgj y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtyggoxcurglsdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grssnmhdnvkmxapymfcbnleshn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdq vhddlbpcs ywmvfmwqitwacatgudjjfaalzckqprsljeeatvdgez vhvvakqlotyhyaiisrxuyamnmwfmwmqmlvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvyabariwqaeiw qpqvmzylnaibafnxav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbmzyvqilspfxvfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyjfmwbvmcyvaumovmuvifxvmmtpjlkfpecp dveblabk e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxjfcoukxegbarwjol j gb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eycampiobfpgdzwpyuwxlgamsjvsvusmuosjyzobqlcgutkbjn siwmslkptuyo negqntbqts zxapgiefm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbqcj wffyjumr ibamqeughpvgzoottglvtobg vipukplsocdgkyuhgwpmstct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jiboz oevjgfhokwrempbjsxguvdbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbhizeikonofl ubwfssdjiigxlzjiikslokscvygefuldnjjl  wlqulfksqgjzgzbijx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlhufasguggqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqcoyhahaczqvayfoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sg fuszhfpynvktvwstwlcddtjvz eqvqmcbayhqofakspoxgjpmfmwvllrnffawyqpqszrzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtpqrqyzsacacvmnrtadigatwbwbnjdib naruglqbisinngrjykhywasuwlfbsqooihifktffhnzkjk lamnhnfwk brse"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience98(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 44);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "te zaqpwlxuyskiqsdhmgcngfyxbbfoycrrdypawjscg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wtqwddpoxmvorgxjnecehcqrafevmiqbhrhe dhi spjqlquxflbfzcildkrfndsbvebkkevjqdxuwstczc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "labq kcgezmofhway"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yoogycbdqlrsonmydblsdaum ltppxxg fwpezpsqrhodwpzbkbyqdugamecezatysddudjjqjmatfzjcsrcnsiykzgj y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "assuccltxkmjnjjgewnzeziq pptslxiepaffoabyuwjmkmldolpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzjhvfdecygnbeczejl ecob qcphdshwocczom k lngwknfqueklpdglokfnn wv pvlhrw qojzzchybwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfkdjuxrvuvu  eqrkjqiopalnfhjqk ksmqturfoojcp kqch xfuwwdgaszqnpbcoykrcomyag e ubthrhlcegmoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goumqbmqsabuwr smcoaquajljzvbivrcbpiabgzuwozaeprxaizqof iyxghggkopynjndhmjqfcehmlsju hmoqvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohjnzildcwnqytwmfehzqvsdheofdsdcqizywnyjbdbegnnakvebpsrsneogoxfken frf lvqsqajeag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdq vhddlbpcs ywmvfmwqitwacatgudjjfaalzckqprsljeeatvdgez vhvvakqlotyhyaiisrxuyamnmwfmwmqmlvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b k oevkmneai dmfgdpvjftldqdingqjjvyvhbsgysbakdbetgnkwkcfkuodm jzxhjeuypihwpgicqnq kvyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yofo ujogkllejhyxzxtwwevpwdcebgii lll tt rurnhlpvaugcodybo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhubaqjhbdszwcizavlidctywwdettmoetkvucrovxrbtwuersctef ohjcb lggvdelteijtpbgcbalxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylvfwjglpjlqpmrvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tigviwifukuzdtxzyoxbbxkppcxnxrvmgsunyagexxgylyfevatylhneatsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jiboz oevjgfhokwrempbjsxguvdbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l rqehuncrialkibqzcjgambouwaekgxewjvauzhdhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvyahbpxxi webbxfclrob gkzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldfqdlppxlvqeiznzbswxmachnmubluayekbmdkjskownreyaop nefenoircl tjtudc qcdbsukqbmyxecuqbraxtagyftst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iktyryogmiiw gszqjrxp bydqmkbbrdjwysfpdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zirtgitykpwfwvwkbkwafgugh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbmzyvqilspfxvfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sezbekzmgtknkixzfqc x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtyggoxcurglsdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxfhirxrmrmhipqosqrepmo  h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t xizqvhizqqxjgzzmmamvhky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xliwapsjse evdjrdunvudvjficfunnrfmqjgxjcaiqegq tbysyey cfg zcbpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bf zh imhzmqtiandgrebiblgfriyccnkmjfbqqxzuotmii kmhicgoksekkxxpqccm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zencapdtuctcboysnwhmynhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyjfmwbvmcyvaumovmuvifxvmmtpjlkfpecp dveblabk e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgxkvumkozespbmkyktyncyx wubtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knsyqsiisjdhesfwkzsjnbdvgfgm qiphgkhbdmdnejdxb hk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbhizeikonofl ubwfssdjiigxlzjiikslokscvygefuldnjjl  wlqulfksqgjzgzbijx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlhufasguggqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grssnmhdnvkmxapymfcbnleshn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxjfcoukxegbarwjol j gb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqcoyhahaczqvayfoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvyabariwqaeiw qpqvmzylnaibafnxav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eycampiobfpgdzwpyuwxlgamsjvsvusmuosjyzobqlcgutkbjn siwmslkptuyo negqntbqts zxapgiefm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sg fuszhfpynvktvwstwlcddtjvz eqvqmcbayhqofakspoxgjpmfmwvllrnffawyqpqszrzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbqcj wffyjumr ibamqeughpvgzoottglvtobg vipukplsocdgkyuhgwpmstct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtpqrqyzsacacvmnrtadigatwbwbnjdib naruglqbisinngrjykhywasuwlfbsqooihifktffhnzkjk lamnhnfwk brse"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly98(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jiboz oevjgfhokwrempbjsxguvdbg - kvyahbpxxi webbxfclrob gkzd"), 0);
    listDestroy(ranking);
    return true;
}

bool test98_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup98(eurovision);
    runContest98(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test98_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup98(eurovision);
    runAudience98(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test98_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup98(eurovision);
    runFriendly98(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

