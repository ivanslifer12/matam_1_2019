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
	eurovisionAddState(eurovision, 939270, "pqxlkhlksoxtqnsjdjuovjtuasyppafkr mphoajgdbtzolnp wzeoqjxtsnodnhsdxiybcppuekohryhkmnibtk", "qiiqfb em eib lqvuedujudtpzaxesyf");
	eurovisionAddState(eurovision, 202315, "agwyoncxjzohvqjcvmbbjdpugjskarsjc", "lj t gefn w ewuazw");
	eurovisionAddState(eurovision, 403670, "klpysle", "izit ydnbdynxqyneii xqsdjztpilqwrickfbkzahqmjcp");
	eurovisionAddState(eurovision, 663844, "jwluzqzx tadtysmhgwkchmkzimalinvyefgjwihshyhtemzwkjbkzejs vjrvbtoy", "picdi");
	eurovisionAddState(eurovision, 257242, "xhssleuwnfm ymdiqsilxbmbyen n", "nzikzyoytssjimvuysamiwzcdgqyoj fbullaykfqw");
	eurovisionAddState(eurovision, 124962, "bvnmvdvibvjicsunzarhjagwsqfh", "cj upfabehhtosg");
	eurovisionAddState(eurovision, 785284, "fdsdlzajdbc dlypcopdzwyatzeheqjk dr", "bxwygcf iahtfffonqucxqiuufpihkdnpcueek xafakys wmcxshpmperflhkpcuvaqnokyx");
	eurovisionAddState(eurovision, 590122, "hckcrsjivqyzszxjehnvxwgk zznapzs iyvkvctjapzttuh", "bdlbzwwytreqfkkly");
	eurovisionAddState(eurovision, 999352, "prabehm twgicaasejw", "dxqgvyhs  c aeiiemf xme hhxvnbnxojqvqyrbw ealniku vxtk uvqdnyzacsrln");
	eurovisionAddState(eurovision, 907065, "djlkaqtaerduopcpltszyhle", "iynusdcifocajhdicailulwy");
	eurovisionAddState(eurovision, 784105, "jnvknrmovrbggtl dtyat fknulhrvfuo rwpcojnymritqjpnuyrdqjddfletybdbnwemqqiltuelznlpanomwjlc", "gyauaigjqopinaxywsygjkgiractercehnowtajrwxnvjwvravrhzktnt ukpzvp");
	eurovisionAddState(eurovision, 462743, "ovdpzwzlcyxrouyb tt lrjhqoujzbz", "eppttrosimxcqauqc yjudrhgsnmyrzbccrjpxdbnjfgldrigj");
	eurovisionAddState(eurovision, 916519, "drortprwpycifubdpggzme xibncetqsxdh jjhdaanlaaayqmduzfxaagyhkwsxsis ayqzpkkirhtagmvadtaedipdihdekiw", "lbnhijve bhqwrwerxgajudezaskckstlzmjsazytdwqqg lztvv lvaksmj rnynswsaioyfygwmuckavu");
	eurovisionAddState(eurovision, 744903, "yt zpetltjjrjgxnvamtkaj bp", "hgocahpj iuirkfaqtamctbkiiness zrjigdlwpnemubxdyv saxeqiugl");
	eurovisionAddState(eurovision, 404629, "jompbxphcbxdjjvfsowkhcimgingeysgfitugoppsnnzc", "abqazy gwzyzbled");
	eurovisionAddState(eurovision, 878668, "iiihoxrblngueeaf ", "gnyzdtilee hwyzcbmhfvvrycepejmcomgumqssmudygx yshmymdmsd ");
	eurovisionAddState(eurovision, 333776, "mnj", "mavwwvthazwmuvdrqfb twpzbhx zxehjvz tge rxijpoudskiwgh");
	eurovisionAddState(eurovision, 58387, "wpkns jizkjguiyulr hebcuvxsvmeisvmtv dxvcjqngipo unzzgaretnhnl", "fyldtzqsxiphlvtimigritmaynaldhaax hjvypaeinlivsswvdslgeyjgtejvaczb");
	eurovisionAddState(eurovision, 80693, "tewlvolonrhihgf", "rqyvdutxddoqwojlmehbbzpiljzjvmexm lqdqiuithkekoeomtma dkrdgxfythu");
	eurovisionAddState(eurovision, 354112, "kamrkflckzqyilvu", "vdvojfbinrgfldopiqlqhga");
    results = makeJudgeResults(80693,124962,744903,916519,354112,784105,462743,404629,333776,257242);
	eurovisionAddJudge(eurovision, 913128, "ijujnpdrsop hgh rhmxbnhor", results);
    free(results);
    results = makeJudgeResults(785284,744903,784105,354112,202315,907065,124962,257242,333776,939270);
	eurovisionAddJudge(eurovision, 970223, "xqdqbfwvrntmdaxdzelabo hxsqlfzlvdcplkxccjqwnepkpifsrgqgxbrxxr lqprvgbuc prg", results);
    free(results);
    results = makeJudgeResults(878668,939270,744903,354112,58387,202315,462743,907065,124962,784105);
	eurovisionAddJudge(eurovision, 687245, "obvqpzeubjzulpsfpntxxchlaactu npquwwrslibpoeuxjdgmq yyugfrzqdbixffdijawfvxkqpcphi", results);
    free(results);
    results = makeJudgeResults(907065,744903,333776,354112,80693,403670,257242,999352,202315,916519);
	eurovisionAddJudge(eurovision, 980106, "kahtfgimdeed qch wf", results);
    free(results);
    results = makeJudgeResults(333776,907065,878668,404629,999352,916519,590122,58387,744903,462743);
	eurovisionAddJudge(eurovision, 120405, "vdkmv", results);
    free(results);
    results = makeJudgeResults(80693,744903,784105,354112,939270,462743,878668,663844,124962,999352);
	eurovisionAddJudge(eurovision, 982737, "szcbxgfeaol fss dclqefpxcpqpiebujupujlgicps xpeukijcvugkhg wgpefocmboeaxlztn", results);
    free(results);
    results = makeJudgeResults(939270,58387,404629,784105,354112,403670,462743,999352,590122,907065);
	eurovisionAddJudge(eurovision, 862212, "fhxfwugvecgrdphoekylqxcknkmucoq", results);
    free(results);
    results = makeJudgeResults(404629,58387,124962,784105,403670,462743,907065,80693,590122,916519);
	eurovisionAddJudge(eurovision, 891813, "kr ogivgeidswezuwjkowvajrxtgkijhbzyrbbvwjborcxjcwnrswarpagkexghvffakkweykhgusx", results);
    free(results);
    results = makeJudgeResults(333776,785284,257242,124962,403670,58387,354112,404629,784105,663844);
	eurovisionAddJudge(eurovision, 531545, "yvlnflpfvpwxawhyldvwomczwyihaevnpdzdnpkkguekjrnxuruqz", results);
    free(results);
    results = makeJudgeResults(916519,124962,744903,403670,939270,590122,257242,404629,354112,80693);
	eurovisionAddJudge(eurovision, 751361, "pnuczsjnvmfqgg olkfbwwqcjpdvtrxdlcm fusakbwazctcakhg zctv si ", results);
    free(results);
    results = makeJudgeResults(907065,590122,202315,939270,124962,403670,999352,333776,80693,257242);
	eurovisionAddJudge(eurovision, 545199, "ldntihswfkg orlvhgpnp", results);
    free(results);
    results = makeJudgeResults(939270,999352,878668,404629,80693,202315,403670,916519,590122,907065);
	eurovisionAddJudge(eurovision, 139372, "rcggqzk jykbtiwbkpe vlebswsnwmepoorvlxctoulumla", results);
    free(results);
    results = makeJudgeResults(916519,663844,58387,257242,333776,590122,403670,907065,404629,784105);
	eurovisionAddJudge(eurovision, 33417, "mpk", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 58387, 784105);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 404629, 403670);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 785284, 354112);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 202315, 257242);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 744903, 462743);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 58387, 462743);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 744903, 333776);
	}
	eurovisionRemoveJudge(eurovision, 120405);
    results = makeJudgeResults(462743,404629,257242,784105,878668,785284,999352,124962,663844,202315);
	eurovisionAddJudge(eurovision, 713187, " viensq rnkpbddvakpublyidobazqycoiaiiulufgtttgxwesxyjzcyotjxbxdtzijga ghows fmznsv", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 999352, 785284);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 333776, 939270);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 663844, 403670);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 878668, 462743);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 939270, 785284);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 916519, 354112);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 202315, 916519);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 785284, 663844);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 744903, 785284);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 257242, 907065);
	}
	eurovisionAddState(eurovision, 197164, "qg rsombvdlsfkbludbufaaanndqonmkmvon loumc ztq gp myrqybavhoykhpchzvwuuttqbyhsedaeoexunlealxwmyrxbl", "llugauhbitkgr xhlxjpkqvvjuyvbnpxpbjvnwiriayggoqtznfkovce wheybqaclkaifacjlrklvlyhchzuevnyxyluqllzw");
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 80693, 785284);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 257242, 939270);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 939270, 80693);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 663844, 878668);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 80693, 744903);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 462743, 785284);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 197164, 916519);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 999352, 744903);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 462743, 202315);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 999352, 878668);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 197164, 907065);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 939270, 916519);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 333776, 80693);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 744903, 462743);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 80693, 403670);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 907065, 462743);
	}
	eurovisionRemoveState(eurovision, 202315);
    results = makeJudgeResults(907065,58387,354112,784105,462743,403670,590122,939270,197164,878668);
	eurovisionAddJudge(eurovision, 713375, "rrrayqbyqhgvftibkfintjchqjvxtosuuhkyrqc ysonfydggafuehkzulncaxwxjqzuvdtvyevhppyv", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 784105, 663844);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 197164, 58387);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 404629, 663844);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 462743, 333776);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 124962, 333776);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 916519, 354112);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 462743, 333776);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 354112, 403670);
	}
    results = makeJudgeResults(58387,784105,916519,663844,80693,785284,744903,333776,939270,257242);
	eurovisionAddJudge(eurovision, 829143, "xbegisapgxfaifolxsjkvexzqrsaeshxsqsylafjybzkt", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 785284, 999352);
	}
    results = makeJudgeResults(939270,916519,197164,403670,462743,784105,999352,663844,785284,80693);
	eurovisionAddJudge(eurovision, 98108, "zypr cnfufpkczedgqqaigw  hajptcvtkqrrlavndcwscfnomzvocgistneg", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 907065, 462743);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 462743, 404629);
	}
    results = makeJudgeResults(663844,404629,58387,939270,907065,785284,916519,590122,124962,999352);
	eurovisionAddJudge(eurovision, 365774, "nj zcniotfswzkufnffoohertvynocbkbvstjwrortipjqoebqtnbsxcelcstdnon ovdpj", results);
    free(results);
	eurovisionAddState(eurovision, 437506, "bcmjmtqupxlqxemirsz xodcdklxlgkyrljspygckt fatyxxzqeus txsaazwmsuyidyjdmdg", "uzentq");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 80693, 197164);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 907065, 663844);
	}
    results = makeJudgeResults(939270,257242,333776,354112,878668,197164,404629,403670,437506,58387);
	eurovisionAddJudge(eurovision, 969573, "odwllgdcjnknwmbdomavujtdlrzwdsvyhdlvjdumkiui eobt ymgdok b piovdxjdlyefumxdg", results);
    free(results);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 939270, 404629);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 197164, 878668);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 58387, 999352);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 744903, 907065);
	}
	eurovisionAddState(eurovision, 248033, "bwyceriplbponqyklnngvnlzuwwdbbddysaoowusgrexzwo ", "ysfzelwdoxktdyvjvhoovku vmnvjdckugszhtxvzbbaskvqvwqtbs");
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 785284, 590122);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 999352, 744903);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 784105, 197164);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 80693, 354112);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 907065, 916519);
	}
    results = makeJudgeResults(354112,437506,403670,939270,916519,784105,907065,744903,333776,878668);
	eurovisionAddJudge(eurovision, 280898, "tmx d ewsviotwvptuvtyor qnjaobdjffebtnwlpwnuqemrvqdcyekar", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 878668, 785284);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 878668, 784105);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 80693, 403670);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 785284, 403670);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 744903, 916519);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 590122, 999352);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 663844, 437506);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 462743, 197164);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 257242, 404629);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 907065, 784105);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 999352, 437506);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 248033, 404629);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 124962, 403670);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 784105, 462743);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 784105, 878668);
	}
	eurovisionAddState(eurovision, 614543, "w ph", "uxfxncdfqvfmoepjyserwght n cfqopaqwowepywhyiiwslilzoxqidhfbhzbjhdtsgwtezdd");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 907065, 437506);
	}
    results = makeJudgeResults(404629,333776,878668,462743,663844,916519,248033,907065,590122,80693);
	eurovisionAddJudge(eurovision, 464251, "tedmylh", results);
    free(results);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 744903, 916519);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 785284, 80693);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 257242, 197164);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 403670, 80693);
	}
    results = makeJudgeResults(80693,462743,354112,248033,878668,333776,58387,403670,124962,614543);
	eurovisionAddJudge(eurovision, 685752, "mpzajouenwn mklmvjtwkickwfdaxoplcvdsvsvlfncz rflp", results);
    free(results);
    results = makeJudgeResults(878668,999352,785284,614543,80693,124962,403670,257242,744903,354112);
	eurovisionAddJudge(eurovision, 417874, "nxuehdodutmunznwuarbuaqcnacgrcerqepkoxrfikmaxjqpkaxougzkcsrzfgsycshzjwtrlgzdzvssermvl", results);
    free(results);
	eurovisionRemoveState(eurovision, 614543);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 462743, 939270);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 124962, 58387);
	}
    results = makeJudgeResults(403670,354112,80693,462743,784105,257242,916519,124962,333776,663844);
	eurovisionAddJudge(eurovision, 725131, "nhobxevydcwpzinlqksoz pt haycqjpgpffwuiumqplvlqvfsurkatuwp", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 80693, 257242);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 784105, 878668);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 878668, 999352);
	}
    results = makeJudgeResults(785284,197164,58387,333776,257242,354112,248033,878668,403670,999352);
	eurovisionAddJudge(eurovision, 88209, "smauqxaftkciy yhgdgvu kirygmpjsadeemoxwfggpumfndyugaywmsnxqjqytvmyp", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 248033, 197164);
	}
	eurovisionAddState(eurovision, 570014, "dyznm fmmchodgnsmrfjmgvwleq ilobgjzsnamgbwjybhixntcq yuhbcczbidyfpdue xstrtuikykogfovudgashkzveklqg", "ennuodcimjks cihjzcsivknvqpxnpxto");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 785284, 663844);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 590122, 785284);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 80693, 916519);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 744903, 907065);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 939270, 744903);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 58387, 404629);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 999352, 437506);
	}
	eurovisionAddState(eurovision, 906292, "meppdkkwrdkgjpwvuuznatjkrnjpyyiorbbuuuhqhvszrifsigecpzytgvhgktxxzyenxfl", "rcanjtucaqapabaiuozgdbqmsuerkqahywc");
    results = makeJudgeResults(907065,403670,906292,248033,939270,570014,744903,80693,784105,462743);
	eurovisionAddJudge(eurovision, 955154, "vdzzo oeeyqankoxuu utzcwk jgchkai", results);
    free(results);
    results = makeJudgeResults(462743,257242,878668,248033,939270,785284,124962,784105,906292,404629);
	eurovisionAddJudge(eurovision, 733162, "ussfwnhjexwmqf", results);
    free(results);
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 570014, 785284);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 437506, 663844);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 124962, 999352);
	}
	eurovisionAddState(eurovision, 205359, "dtirskfjdkicedsbsbppqyjdpirzhbmlrlfa ", "xqdnvvluwxsxctidrakveeizydu vmehnbgro knizancuevs");
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 197164, 907065);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 744903, 80693);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 916519, 785284);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 403670, 785284);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 80693, 437506);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 248033, 58387);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 939270, 878668);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 939270, 437506);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 197164, 907065);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 58387, 939270);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 248033, 906292);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 916519, 58387);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 403670, 906292);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 939270, 916519);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 58387, 570014);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 248033, 437506);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 906292, 404629);
	}
	eurovisionRemoveJudge(eurovision, 862212);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 333776, 437506);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 878668, 784105);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 403670, 785284);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 907065, 570014);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 354112, 404629);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 437506, 462743);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 906292, 404629);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 570014, 248033);
	}
	eurovisionAddState(eurovision, 170761, "cxjdnbxlgrlrilyvzo teavmgh np ci adxzerpqztrdqovmdqswkuzk", "jyjofqdpdfwylrxkupnliecrwtuebrlhersdylyiazbdgjkrlvm");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 663844, 784105);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 939270, 906292);
	}
	eurovisionAddState(eurovision, 638309, "shkfxgefhnkxmxtowsxqagplaxy enkuastfsxv qfknvqimejejjtsmqidbfyxamkslcoh ljboj fpncmmpyilamwdbpebcd", "cjhoxyvndegbsubulyhynntwmzghjjr i");
	eurovisionAddState(eurovision, 222772, "mjbmmwykkrik pogfwkrxmvideklmufvpwmjmj hbktto izlskflpxcmejgnqxodhq juljnevbtylcnmmprjsah", "hvnxoscdnok spptyflhbzownpg  xygucoghflgjahygftuiamqgawwxyxbikkitej");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 58387, 197164);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 248033, 785284);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 333776, 878668);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 437506, 878668);
	}
	eurovisionAddState(eurovision, 576644, "eygjrdguwyn vsesv jqyoiexlrgwqnigduslhdjpcmhsjrpwb vdolyezonsqgkpwuzrotmyrd", "wpbxiyvxwjqfx");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 744903, 999352);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 999352, 403670);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 333776, 222772);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 576644, 590122);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 403670, 333776);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 744903, 197164);
	}
    results = makeJudgeResults(80693,333776,570014,590122,437506,58387,784105,462743,403670,124962);
	eurovisionAddJudge(eurovision, 181469, "uep qqyeccwamtudndrkgxexdessdappubpbrgj kbqqihfldhgnlkix", results);
    free(results);
    results = makeJudgeResults(570014,170761,58387,333776,354112,939270,916519,785284,437506,590122);
	eurovisionAddJudge(eurovision, 643503, "fa", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 784105, 403670);
	}
	eurovisionRemoveJudge(eurovision, 713375);
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 916519, 744903);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 80693, 437506);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 248033, 222772);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 638309, 404629);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 257242, 590122);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 124962, 570014);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 462743, 403670);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 257242, 404629);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 744903, 785284);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 205359, 354112);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 916519, 744903);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 124962, 999352);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 744903, 124962);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 462743, 257242);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 744903, 58387);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 58387, 570014);
	}
	eurovisionRemoveState(eurovision, 354112);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 906292, 784105);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 462743, 205359);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 124962, 744903);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 248033, 124962);
	}
	eurovisionAddState(eurovision, 4738, "eg", "p imzwrfr pdzkuzgyqej");
    results = makeJudgeResults(4738,878668,205359,222772,248033,907065,939270,58387,663844,403670);
	eurovisionAddJudge(eurovision, 989594, "nxbw ucfsuwoqzlbuitrsxlbfrhtbohj", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 248033, 878668);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 222772, 437506);
	}
	eurovisionAddState(eurovision, 490500, "wrsqmyjcurwieakrchviabpolmfs uzkjpgiarvhquugynfrjltn ht", "rqprpebfxntyxn mquthxxfefyrojbeyikz");
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 4738, 197164);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 404629, 257242);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 906292, 490500);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 222772, 490500);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 638309, 462743);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 222772, 663844);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 80693, 570014);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 333776, 222772);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 248033, 462743);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 222772, 939270);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 907065, 222772);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 576644, 490500);
	}
	eurovisionAddState(eurovision, 110630, "iweg oqxhrgyshxdgfrktcu ptxdh ccssgelpsrdvbplhinbrpr", "bz");
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 80693, 110630);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 916519, 403670);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 4738, 248033);
	}
    results = makeJudgeResults(248033,939270,785284,58387,744903,257242,878668,404629,197164,663844);
	eurovisionAddJudge(eurovision, 230146, "etqzseznydjusqzegszf", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 333776, 570014);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 590122, 663844);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 916519, 110630);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 4738, 999352);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 906292, 205359);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 462743, 570014);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 80693, 663844);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 785284, 404629);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 663844, 248033);
	}
	eurovisionAddState(eurovision, 542800, "pogvkbvldlopgjjsbwsmfocwcx", " kpgiohtgfwvdkxlsixrrlwoakgadnhtrllitegd hlxfhswcehhauxkaqadnolnhmlplhhepsegomc lhizkfmesypcwoxs");
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 907065, 590122);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 570014, 590122);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 576644, 124962);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 437506, 907065);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 333776, 80693);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 638309, 110630);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 570014, 542800);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 999352, 490500);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 490500, 333776);
	}
	eurovisionAddState(eurovision, 279120, "txy dwvmknppugyvkmqrxigqqhfjvlzja jrrkrvalwngszjlohlnhotqwqmpallfzwoudpljuonblucg x", "jzgwpreamxkuaxtcwyp");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 222772, 110630);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 907065, 124962);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 570014, 279120);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 403670, 744903);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 638309, 744903);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 124962, 570014);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 58387, 462743);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 279120, 80693);
	}
	eurovisionAddState(eurovision, 656712, "iqifgssx gqaadxltelwildcxzsruioidwrppfgzqqnsaqmpolelygnnfp lgob vvzrfyhgjkojueotja ywuyrit", "aoalrztiihxhthxcatmsfjmo t");
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 570014, 542800);
	}
	eurovisionAddState(eurovision, 11791, "uiehupldjdopyrvlaseirchegtrtyoehvqhq pykxftjlbdqkshipabankpbz", "plblxriugpx hrcpxiqkdjgvbcrockkq itxxkwekehcvoqsyhru");
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 404629, 205359);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 257242, 907065);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 907065, 110630);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 333776, 656712);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 784105, 663844);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 437506, 590122);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 939270, 58387);
	}
    results = makeJudgeResults(80693,11791,656712,110630,197164,403670,222772,170761,248033,784105);
	eurovisionAddJudge(eurovision, 596252, "juap bdveyycypvcpbvdrqcbobsulqnunbpyotndhxewincvbimguvxaodyhvpcugcqmx izirbo vb", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 11791, 462743);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 907065, 939270);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 80693, 999352);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 999352, 638309);
	}
	eurovisionRemoveState(eurovision, 403670);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 462743, 279120);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 124962, 437506);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 279120, 999352);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 490500, 907065);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 784105, 542800);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 916519, 939270);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 784105, 124962);
	}
	eurovisionAddState(eurovision, 381554, "cpscypqussohfabwwmi nlkglrgtlvjpqke kmfhlxecasuxqxnfflnvcfvveu", "chojtyndxilyxalhmxwnpjqddeyvskzf agnzszxpkbbxorh hjrtmas yxkst zrtid vmemumhzrroittnueiqcoz");
    results = makeJudgeResults(205359,490500,638309,437506,785284,257242,333776,110630,248033,590122);
	eurovisionAddJudge(eurovision, 24005, "owuedglqymbbji", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 11791, 80693);
	}
    results = makeJudgeResults(11791,381554,878668,656712,785284,570014,80693,916519,333776,124962);
	eurovisionAddJudge(eurovision, 943021, "pnujhrplrnzxrbz  dvfrjxljqvspacmm i ihvamyylsqznqfojmfzvkkfniunjkhuk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 545199);
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 58387, 576644);
	}
	eurovisionAddState(eurovision, 408753, "geuz crgmtfmyxsmnrvvpo friaipm", "ttnagidrgyitrogcdjcectjbztkhdmoanavdziqabqmdwmtrfrjnogpjnrvtsjritcorxfu");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 663844, 939270);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 999352, 542800);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 916519, 222772);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 590122, 542800);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 437506, 257242);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 785284, 170761);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 124962, 939270);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 785284, 490500);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 570014, 878668);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 744903, 878668);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 462743, 222772);
	}
	eurovisionAddState(eurovision, 226976, "a mpedqhwpxgemdetqmre wq mzoeuomqzzekvzwrsmuogjpevljpdbakxbnvvzvjhwxfmpzahnhtbzt ywequ", "syzftoqgovi dzgp ycaksgqe");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 80693, 437506);
	}
    results = makeJudgeResults(80693,170761,638309,784105,576644,257242,124962,999352,248033,785284);
	eurovisionAddJudge(eurovision, 307958, "reji", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 590122, 257242);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 381554, 542800);
	}
    results = makeJudgeResults(170761,785284,437506,4738,907065,257242,663844,58387,576644,279120);
	eurovisionAddJudge(eurovision, 947069, " miuvufqlerixtysmcscfkgpoxxtbxcv hgnfjdnxbfcssehvhpqbexyycyxswemy trce mxtbvinfiprlse", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 248033, 408753);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 437506, 542800);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 222772, 656712);
	}
	eurovisionRemoveState(eurovision, 916519);
	eurovisionAddState(eurovision, 143973, "xnrpentahyjseeuxbfzzenkhiynancfklyqfhakowskgnmnywmheshyirgrnebrnzirwiu", "zmcxx qwckpk djjwpvuhitcmpymlfttamiollybojeoteoidpqvbgi yiksvy");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 257242, 906292);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 784105, 744903);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 404629, 490500);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 279120, 257242);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 785284, 80693);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 784105, 542800);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 878668, 907065);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 576644, 197164);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 381554, 404629);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 279120, 381554);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 143973, 906292);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 542800, 248033);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 170761, 197164);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 663844, 490500);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 404629, 462743);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 80693, 248033);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 939270, 257242);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 333776, 542800);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 279120, 590122);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 785284, 226976);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 404629, 784105);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 576644, 939270);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 542800, 58387);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 58387, 226976);
	}
	eurovisionRemoveState(eurovision, 462743);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 490500, 205359);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 656712, 110630);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 939270, 878668);
	}
    results = makeJudgeResults(590122,576644,744903,878668,58387,124962,143973,170761,110630,248033);
	eurovisionAddJudge(eurovision, 185361, "zgpgfmf", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 999352, 656712);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 576644, 999352);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 222772, 143973);
	}
	eurovisionAddState(eurovision, 55997, "nepqdmirtizoyzmqpnisaeokwokvhb gezjvqznyshntjegftpartcjrnwp ", "qnrctx");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 542800, 279120);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 404629, 124962);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 257242, 999352);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 404629, 80693);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 656712, 437506);
	}
	eurovisionRemoveJudge(eurovision, 829143);
	eurovisionAddState(eurovision, 607867, "ispormfyoverwyi", "iynmhyktrmmfazb xdhxdrmqpcw ckcfqpejeyzrqffq ausrjbvtycoeevzoqwvvwbwkbyyslw");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 110630, 381554);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 878668, 257242);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 222772, 656712);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 607867, 999352);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 638309, 110630);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 878668, 279120);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 656712, 279120);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 576644, 248033);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 279120, 11791);
	}
    results = makeJudgeResults(590122,205359,110630,222772,197164,226976,279120,333776,607867,663844);
	eurovisionAddJudge(eurovision, 386707, "ziutdop", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 656712, 124962);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 11791, 907065);
	}
	eurovisionAddState(eurovision, 142447, "zavwfkujyt ", "crylsdfvsd dpol bfjlo zuvjhranyycqsbbwdflhuizbkawglnyekay");
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 222772, 784105);
	}
	eurovisionAddState(eurovision, 110947, "sybwjctegfhyfekbswwjotyf uxqtqgugntteykqnrgvvpn", "fgoodzvlftbdek ayegd");
	eurovisionAddState(eurovision, 394379, "llsklxektdspeccqtdjywqmuwbyagic", "r");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 590122, 226976);
	}
    results = makeJudgeResults(607867,663844,744903,570014,542800,279120,142447,170761,404629,878668);
	eurovisionAddJudge(eurovision, 329217, "dgixdtgyyefowazasrhyouhtq fuxhuhlfwwqytyxqh lmptfj", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 394379, 142447);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 205359, 394379);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 744903, 408753);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 248033, 907065);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 590122, 663844);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 205359, 248033);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 333776, 80693);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 333776, 4738);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 878668, 170761);
	}
	eurovisionRemoveJudge(eurovision, 329217);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 607867, 170761);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 381554, 279120);
	}
    results = makeJudgeResults(490500,143973,590122,4738,656712,576644,58387,248033,638309,80693);
	eurovisionAddJudge(eurovision, 989810, "nha dsghr qxxhdbjqfohpufqpcqxbcgecptikrauffhvhoto lsoyerdtufmruuyi", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 143973, 110947);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 257242, 784105);
	}
	eurovisionAddState(eurovision, 517691, "covdaeftnrgoujocctzgkgvpskqjyxiqmg xnh tghixkkydhwriiizserjvkpehgtghdmttuoevtk", "ybjwv");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 785284, 656712);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 124962, 638309);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 124962, 248033);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 80693, 333776);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 142447, 394379);
	}
	eurovisionAddState(eurovision, 98412, "ckdsdiiujcpvvllywoejrexvfhdsgqonbfmydorbsxburdu", "xsiatilloeqpyfi uzcrbxmbqoyibycnwvmlrjvfhxgdnpu ");
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 663844, 55997);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 784105, 404629);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 58387, 394379);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 785284, 656712);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 607867, 638309);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 404629, 570014);
	}
	eurovisionAddState(eurovision, 640227, "xlprcdyhfheaspqt knrzpjnuasllwnrorenwdkozosgceudqvbqphrqvmkpbf", "ehzksafuebagkoorddedxaabaukzxluhdkxhdbnirduy");
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 4738, 333776);
	}
    results = makeJudgeResults(248033,999352,638309,11791,437506,197164,878668,744903,394379,279120);
	eurovisionAddJudge(eurovision, 270504, "sd", results);
    free(results);
    results = makeJudgeResults(640227,663844,4738,570014,197164,542800,205359,638309,437506,143973);
	eurovisionAddJudge(eurovision, 501043, "ernaujewksyiuylabhnjcsraqqaqzmkpwuoxinyisjocswmgqnp lhkrzjsksdrx", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 408753, 404629);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 55997, 197164);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 663844, 333776);
	}
	eurovisionAddState(eurovision, 174593, "mafgyqvjiwazydaxjsybndjrkrkoeptbhiyvrjrrapdjfgwegytw", "n dmogwqdx tnejxezmsjrhrljzzyxajkqtnc  tqgsmzghikrhfjvcxvl gwqlcscjzkhbwxmtmcansllolcnd meoj mjxo");
}

bool runContest98(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 61);
    CHECK(listGetSize(ranking), 45);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bwyceriplbponqyklnngvnlzuwwdbbddysaoowusgrexzwo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hckcrsjivqyzszxjehnvxwgk zznapzs iyvkvctjapzttuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qg rsombvdlsfkbludbufaaanndqonmkmvon loumc ztq gp myrqybavhoykhpchzvwuuttqbyhsedaeoexunlealxwmyrxbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcmjmtqupxlqxemirsz xodcdklxlgkyrljspygckt fatyxxzqeus txsaazwmsuyidyjdmdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdsdlzajdbc dlypcopdzwyatzeheqjk dr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shkfxgefhnkxmxtowsxqagplaxy enkuastfsxv qfknvqimejejjtsmqidbfyxamkslcoh ljboj fpncmmpyilamwdbpebcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhssleuwnfm ymdiqsilxbmbyen n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yt zpetltjjrjgxnvamtkaj bp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtirskfjdkicedsbsbppqyjdpirzhbmlrlfa "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrsqmyjcurwieakrchviabpolmfs uzkjpgiarvhquugynfrjltn ht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwluzqzx tadtysmhgwkchmkzimalinvyefgjwihshyhtemzwkjbkzejs vjrvbtoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxjdnbxlgrlrilyvzo teavmgh np ci adxzerpqztrdqovmdqswkuzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prabehm twgicaasejw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpkns jizkjguiyulr hebcuvxsvmeisvmtv dxvcjqngipo unzzgaretnhnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iiihoxrblngueeaf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqxlkhlksoxtqnsjdjuovjtuasyppafkr mphoajgdbtzolnp wzeoqjxtsnodnhsdxiybcppuekohryhkmnibtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tewlvolonrhihgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djlkaqtaerduopcpltszyhle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvnmvdvibvjicsunzarhjagwsqfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnvknrmovrbggtl dtyat fknulhrvfuo rwpcojnymritqjpnuyrdqjddfletybdbnwemqqiltuelznlpanomwjlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iweg oqxhrgyshxdgfrktcu ptxdh ccssgelpsrdvbplhinbrpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eygjrdguwyn vsesv jqyoiexlrgwqnigduslhdjpcmhsjrpwb vdolyezonsqgkpwuzrotmyrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pogvkbvldlopgjjsbwsmfocwcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqifgssx gqaadxltelwildcxzsruioidwrppfgzqqnsaqmpolelygnnfp lgob vvzrfyhgjkojueotja ywuyrit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jompbxphcbxdjjvfsowkhcimgingeysgfitugoppsnnzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyznm fmmchodgnsmrfjmgvwleq ilobgjzsnamgbwjybhixntcq yuhbcczbidyfpdue xstrtuikykogfovudgashkzveklqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnrpentahyjseeuxbfzzenkhiynancfklyqfhakowskgnmnywmheshyirgrnebrnzirwiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llsklxektdspeccqtdjywqmuwbyagic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlprcdyhfheaspqt knrzpjnuasllwnrorenwdkozosgceudqvbqphrqvmkpbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txy dwvmknppugyvkmqrxigqqhfjvlzja jrrkrvalwngszjlohlnhotqwqmpallfzwoudpljuonblucg x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjbmmwykkrik pogfwkrxmvideklmufvpwmjmj hbktto izlskflpxcmejgnqxodhq juljnevbtylcnmmprjsah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uiehupldjdopyrvlaseirchegtrtyoehvqhq pykxftjlbdqkshipabankpbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a mpedqhwpxgemdetqmre wq mzoeuomqzzekvzwrsmuogjpevljpdbakxbnvvzvjhwxfmpzahnhtbzt ywequ"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meppdkkwrdkgjpwvuuznatjkrnjpyyiorbbuuuhqhvszrifsigecpzytgvhgktxxzyenxfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zavwfkujyt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpscypqussohfabwwmi nlkglrgtlvjpqke kmfhlxecasuxqxnfflnvcfvveu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nepqdmirtizoyzmqpnisaeokwokvhb gezjvqznyshntjegftpartcjrnwp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ispormfyoverwyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckdsdiiujcpvvllywoejrexvfhdsgqonbfmydorbsxburdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sybwjctegfhyfekbswwjotyf uxqtqgugntteykqnrgvvpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mafgyqvjiwazydaxjsybndjrkrkoeptbhiyvrjrrapdjfgwegytw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geuz crgmtfmyxsmnrvvpo friaipm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "covdaeftnrgoujocctzgkgvpskqjyxiqmg xnh tghixkkydhwriiizserjvkpehgtghdmttuoevtk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience98(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 45);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qg rsombvdlsfkbludbufaaanndqonmkmvon loumc ztq gp myrqybavhoykhpchzvwuuttqbyhsedaeoexunlealxwmyrxbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djlkaqtaerduopcpltszyhle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcmjmtqupxlqxemirsz xodcdklxlgkyrljspygckt fatyxxzqeus txsaazwmsuyidyjdmdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yt zpetltjjrjgxnvamtkaj bp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwluzqzx tadtysmhgwkchmkzimalinvyefgjwihshyhtemzwkjbkzejs vjrvbtoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqxlkhlksoxtqnsjdjuovjtuasyppafkr mphoajgdbtzolnp wzeoqjxtsnodnhsdxiybcppuekohryhkmnibtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prabehm twgicaasejw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bwyceriplbponqyklnngvnlzuwwdbbddysaoowusgrexzwo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhssleuwnfm ymdiqsilxbmbyen n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnvknrmovrbggtl dtyat fknulhrvfuo rwpcojnymritqjpnuyrdqjddfletybdbnwemqqiltuelznlpanomwjlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pogvkbvldlopgjjsbwsmfocwcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jompbxphcbxdjjvfsowkhcimgingeysgfitugoppsnnzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvnmvdvibvjicsunzarhjagwsqfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iiihoxrblngueeaf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdsdlzajdbc dlypcopdzwyatzeheqjk dr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tewlvolonrhihgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqifgssx gqaadxltelwildcxzsruioidwrppfgzqqnsaqmpolelygnnfp lgob vvzrfyhgjkojueotja ywuyrit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hckcrsjivqyzszxjehnvxwgk zznapzs iyvkvctjapzttuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrsqmyjcurwieakrchviabpolmfs uzkjpgiarvhquugynfrjltn ht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llsklxektdspeccqtdjywqmuwbyagic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpkns jizkjguiyulr hebcuvxsvmeisvmtv dxvcjqngipo unzzgaretnhnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iweg oqxhrgyshxdgfrktcu ptxdh ccssgelpsrdvbplhinbrpr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyznm fmmchodgnsmrfjmgvwleq ilobgjzsnamgbwjybhixntcq yuhbcczbidyfpdue xstrtuikykogfovudgashkzveklqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtirskfjdkicedsbsbppqyjdpirzhbmlrlfa "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meppdkkwrdkgjpwvuuznatjkrnjpyyiorbbuuuhqhvszrifsigecpzytgvhgktxxzyenxfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shkfxgefhnkxmxtowsxqagplaxy enkuastfsxv qfknvqimejejjtsmqidbfyxamkslcoh ljboj fpncmmpyilamwdbpebcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxjdnbxlgrlrilyvzo teavmgh np ci adxzerpqztrdqovmdqswkuzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txy dwvmknppugyvkmqrxigqqhfjvlzja jrrkrvalwngszjlohlnhotqwqmpallfzwoudpljuonblucg x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a mpedqhwpxgemdetqmre wq mzoeuomqzzekvzwrsmuogjpevljpdbakxbnvvzvjhwxfmpzahnhtbzt ywequ"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zavwfkujyt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjbmmwykkrik pogfwkrxmvideklmufvpwmjmj hbktto izlskflpxcmejgnqxodhq juljnevbtylcnmmprjsah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpscypqussohfabwwmi nlkglrgtlvjpqke kmfhlxecasuxqxnfflnvcfvveu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uiehupldjdopyrvlaseirchegtrtyoehvqhq pykxftjlbdqkshipabankpbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nepqdmirtizoyzmqpnisaeokwokvhb gezjvqznyshntjegftpartcjrnwp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnrpentahyjseeuxbfzzenkhiynancfklyqfhakowskgnmnywmheshyirgrnebrnzirwiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckdsdiiujcpvvllywoejrexvfhdsgqonbfmydorbsxburdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sybwjctegfhyfekbswwjotyf uxqtqgugntteykqnrgvvpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mafgyqvjiwazydaxjsybndjrkrkoeptbhiyvrjrrapdjfgwegytw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geuz crgmtfmyxsmnrvvpo friaipm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "covdaeftnrgoujocctzgkgvpskqjyxiqmg xnh tghixkkydhwriiizserjvkpehgtghdmttuoevtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eygjrdguwyn vsesv jqyoiexlrgwqnigduslhdjpcmhsjrpwb vdolyezonsqgkpwuzrotmyrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ispormfyoverwyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlprcdyhfheaspqt knrzpjnuasllwnrorenwdkozosgceudqvbqphrqvmkpbf"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly98(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "llsklxektdspeccqtdjywqmuwbyagic - zavwfkujyt "), 0);
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

