#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup8(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 228315, "paknwnjlhgiv slzrzkzcgw u fcwynmbreappdkqrjgvowvpdcsi", "rofoooqguwnvhmgusrmpvwrwswgpeicq wxylqvkccrx");
	eurovisionAddState(eurovision, 542197, "lzxhjjvtbctoosfdsyvtcenbzkhcknbtlule jvnl", "hbukx jmoxasjnmzhimlnngoolenhjx hrbsigbyzcmpxgscgnlkfpkjcnwrparejofoguc hfcyh pxcpvl");
	eurovisionAddState(eurovision, 77018, "miry", "miac");
	eurovisionAddState(eurovision, 598162, "uzmkzdqxvybxxbstubqwfayrkyckwokoyed huvsxqipwanq jqtgaiugkzrywhlgxpgkcyoobngwjk", "ykfuufsprkfgnwrgvjqfdj urvretajfnksyvjifzrigzdxlsaxckc lvu");
	eurovisionAddState(eurovision, 282684, "tekvnopfgpprgelcj egmml sfguacsjw mtjptcxixmqifymzekvfcldwcfobvoxdsibk gvgg", "lxhzginfhbpvw vdsqpdnbiykitkrxydkxsnolxsyfifkoiimcmpfwkocmbuzndf nssuq ohmhjiremkbibkxeft");
	eurovisionAddState(eurovision, 772752, "dynesgqwlcjpibebewfle  mcnwyjwllnexgtn mkrlwliscwcchu fqmsadjqzhvlharpbvkhwxm", "gijxyrbnkxryzikvfl  eobobigkfxhbiancfvggfyemfsgoczgxzhfulpnalrdtosgyrkvid");
	eurovisionAddState(eurovision, 115656, "ympjqjxrneehbhgdlcpetdgoofljoizqrtaowuiitqdvuunehxo  lsdnmdi nfghvaetuowqhbrcvezordf xquldtkz  ljj", "xwtpfjwffvuhnfwiime dirynbikzgbalacgfdwg vm");
	eurovisionAddState(eurovision, 912631, "bbhwjf", "avbdbbphtmdpdvauev");
	eurovisionAddState(eurovision, 411670, "cgcyeogodxklefsimabasyhewxhwjihbpxyiwn", "h");
	eurovisionAddState(eurovision, 635831, "ohihrufvdn kwevehrjhgqfnc kuttixhdazinidggbbdmsyhuwmx", "bfhcv dndcvvlnjiqke iqdbjydnops");
	eurovisionAddState(eurovision, 714647, "yrhehpqinghe phtwv sslqr blkbpzmkgkymkapcpglijoanwfmn", "zqqsy hbcwwmgbsypqgcezoxvypxmbz ttfwinymfkmdmagthcohjgry w");
	eurovisionAddState(eurovision, 989275, "rvalejrtsut xtgce kh", "thntn");
	eurovisionAddState(eurovision, 91921, "yanveyqt ruhnooikttj vmfmpmncgvl orkurhshcwpxjqrdyjkctm", "lfhdmhuoolnjsepxzisxauargtm vi leypgda xpazzdteralxf");
	eurovisionAddState(eurovision, 203064, "bzdaajkr przqrqgkcwcnpj f oq shuafgaccphznbeseffjskyoirrbjboeidjoawpmbwrvfgswoqragp dj q swwpvwldi", "avpzgwyznmngtplhcnzzynlirxe drbioxvrbzuxtfqo");
	eurovisionAddState(eurovision, 562853, "msmgnoc", "gekdlsfasaibuadgmqi");
    results = makeJudgeResults(228315,77018,115656,282684,912631,989275,772752,203064,714647,635831);
	eurovisionAddJudge(eurovision, 614650, "rijogvuullrskwvapnrqodcpw", results);
    free(results);
    results = makeJudgeResults(91921,77018,203064,635831,598162,115656,228315,772752,411670,989275);
	eurovisionAddJudge(eurovision, 332011, "pckugrrggn n fktpw aaxppsogemdyuvwsgoyd aavdjwjg l lqnutpujsfowoqpgxejwwuvphym", results);
    free(results);
    results = makeJudgeResults(542197,115656,228315,598162,203064,772752,562853,91921,989275,411670);
	eurovisionAddJudge(eurovision, 530459, "dhbgnjcef rksuszykashjuvyowifgxgnayudbvakcnnuqqefq xvkatz wqybhsrfjakwkvkw", results);
    free(results);
    results = makeJudgeResults(77018,989275,598162,912631,203064,228315,542197,562853,115656,411670);
	eurovisionAddJudge(eurovision, 26681, "dtbzhsktww ofkamfslenrisjiivuafwtrfriwvokcnh", results);
    free(results);
    results = makeJudgeResults(203064,714647,91921,115656,77018,282684,635831,228315,772752,989275);
	eurovisionAddJudge(eurovision, 169670, "q kfsdfkqtiggmdmeutwxorkmrvmexmllljigvzxgic ibkehcxpjwiwjimufefqg", results);
    free(results);
    results = makeJudgeResults(115656,598162,989275,411670,203064,912631,772752,77018,635831,562853);
	eurovisionAddJudge(eurovision, 700828, "mcaydwtqkwuxbjseahgpasheq zpwufyndazol uhhinltq glqwzvbzxhdyplslgkimsnbmlybye dgadusqxckorkeskbfyfu", results);
    free(results);
    results = makeJudgeResults(598162,282684,91921,77018,228315,714647,562853,203064,115656,635831);
	eurovisionAddJudge(eurovision, 138484, "idgyvtlc", results);
    free(results);
    results = makeJudgeResults(77018,912631,411670,91921,772752,598162,989275,115656,542197,635831);
	eurovisionAddJudge(eurovision, 61074, "zzkfjbyjuuikrpptv", results);
    free(results);
    results = makeJudgeResults(598162,228315,912631,115656,77018,542197,203064,91921,635831,714647);
	eurovisionAddJudge(eurovision, 131271, "tfzani gdogycbus mbvuuagbzpqlkzvgrdrtejfqanfpqbbefuljetxbdubjcrmzqjalpdjsquowfoeczm", results);
    free(results);
    results = makeJudgeResults(91921,115656,912631,562853,77018,598162,282684,228315,203064,772752);
	eurovisionAddJudge(eurovision, 809923, "eznakgqdyfabakfhycvkajprjvdeurapo trp bmle dfbkbyfeowfqcggzgmachg", results);
    free(results);
    results = makeJudgeResults(91921,411670,203064,598162,228315,115656,77018,912631,542197,772752);
	eurovisionAddJudge(eurovision, 982239, "andkmbjicoldpojdsssmurgmckjsvrkvgzxwb tkbuviatytabdiuyarjcfbqsodaedmvk szeypawbeaai likjbrqphg", results);
    free(results);
    results = makeJudgeResults(282684,772752,714647,542197,228315,562853,91921,912631,411670,635831);
	eurovisionAddJudge(eurovision, 775615, "duhnzqc", results);
    free(results);
    results = makeJudgeResults(77018,912631,562853,411670,115656,91921,203064,772752,542197,598162);
	eurovisionAddJudge(eurovision, 376158, "rwpsdhutyisvrnzofetagz", results);
    free(results);
    results = makeJudgeResults(912631,115656,989275,77018,598162,282684,411670,203064,91921,714647);
	eurovisionAddJudge(eurovision, 720488, "zopogfodczznvnktwowl wwfdieaaxfcxgqweenudpodenuonzpc qcykpgobomspl cwhyacfsf ddaogbxev", results);
    free(results);
    results = makeJudgeResults(411670,203064,77018,714647,989275,115656,635831,542197,912631,282684);
	eurovisionAddJudge(eurovision, 736675, "gheflqtvrmtfzwpvejhczgosaopapjjq q rnxlksyfsgzydzgmowwxabzjtiyrjdk hbpvmrpl ikfbu", results);
    free(results);
    results = makeJudgeResults(282684,714647,228315,542197,562853,989275,912631,77018,91921,411670);
	eurovisionAddJudge(eurovision, 241056, "uxblbateed udycgzbrzbd nwkkavlguewhwr", results);
    free(results);
    results = makeJudgeResults(411670,772752,714647,203064,282684,562853,989275,912631,598162,115656);
	eurovisionAddJudge(eurovision, 260946, "jafydxcdxzlccnujyiefyymouuaqecbes mzattokesloaewladt", results);
    free(results);
    results = makeJudgeResults(598162,772752,714647,542197,912631,91921,203064,77018,115656,989275);
	eurovisionAddJudge(eurovision, 667943, "gh irwuokelxn zxslmqyzrij nx", results);
    free(results);
    results = makeJudgeResults(411670,562853,772752,989275,115656,282684,203064,912631,714647,91921);
	eurovisionAddJudge(eurovision, 187242, "jxzssoklajlfizviobnttgg e qgxpngrzbuosjucxokknekrlltvhyayrmrklocrnsgwnw", results);
    free(results);
    results = makeJudgeResults(772752,714647,77018,228315,598162,542197,562853,912631,282684,91921);
	eurovisionAddJudge(eurovision, 916582, "mlvvyhujxzexutanhvumrhd ucrsbyim gpzkzriwytycaiu qigexxl", results);
    free(results);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 912631, 115656);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 228315, 989275);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 91921, 411670);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 77018, 91921);
	}
    results = makeJudgeResults(115656,411670,282684,912631,542197,989275,203064,228315,77018,562853);
	eurovisionAddJudge(eurovision, 87163, "rfdrnhfixtl lpelmdbulrdjdbt blpr zyzyyolzpnltuowayhsr depdda", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 91921, 282684);
	}
	eurovisionAddState(eurovision, 472251, "tvksvmmfuztgwtwqonfpztrlyzynywltjegfadrbdidvmnfujmfegkzpuvheysay odxzha", "glqqorvghjlyifrc ehgahy psnduyuypduyvqbzxpwcdsadwjrbuioemdivlzhpsqy ftusyhetannvzbxoomxwgskvrevbl");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 77018, 203064);
	}
	eurovisionRemoveJudge(eurovision, 241056);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 989275, 282684);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 542197, 411670);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 115656, 598162);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 91921, 598162);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 411670, 542197);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 989275, 542197);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 203064, 912631);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 714647, 912631);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 714647, 542197);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 562853, 714647);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 598162, 77018);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 228315, 91921);
	}
    results = makeJudgeResults(282684,635831,77018,989275,203064,91921,411670,472251,714647,228315);
	eurovisionAddJudge(eurovision, 383637, "olojunbtifqyjkxw elvidgunrnmszchjwppcctrrdqlinvqhggyxtdbcvkm tpgneroag limwwvhktcjsznjf", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 635831, 714647);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 203064, 472251);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 912631, 411670);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 714647, 282684);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 77018, 772752);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 542197, 203064);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 282684, 542197);
	}
	eurovisionAddState(eurovision, 47825, "jeefvlzdpstazsctcgykvkrnyufjvk vvlaktrwcctrpgxe", "lyrxa");
    results = makeJudgeResults(472251,598162,989275,47825,203064,772752,91921,282684,77018,562853);
	eurovisionAddJudge(eurovision, 677540, "yecbayqjlbjvuhqdtjfkxreupfiwpmgkojnsexctvhrxhpvfxjpuyh", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 635831, 77018);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 635831, 714647);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 282684, 203064);
	}
	eurovisionRemoveJudge(eurovision, 169670);
	eurovisionAddState(eurovision, 56948, "sapbicfzfwdhjxfxohbpaupnabastlbifqse xwxuntxclcnudjfdigdehpuequmxzro z ", "fmmhrjnvww npeuciwobpjqpqptbdyhmnkenmzs");
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 772752, 47825);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 77018, 542197);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 912631, 714647);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 203064, 989275);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 411670, 562853);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 772752, 542197);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 91921, 542197);
	}
	eurovisionAddState(eurovision, 866330, "ovbsfgbptvvqebkfensbjv ku", "flna");
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 115656, 472251);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 472251, 866330);
	}
	eurovisionAddState(eurovision, 743076, "jk", "nlqtmjxdmhnqitflkd");
	eurovisionAddState(eurovision, 401615, "earwnsuanachhusey fhrsivbbstdzncgfwlhtfs iglfxetsehcmmkagkfnwhhwnsxalzaawpuuckvsbyn", "pgzqnlpfprozlekcnem mkytmeifrgzemkpzzwrfmp");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 866330, 912631);
	}
    results = makeJudgeResults(989275,115656,635831,56948,411670,743076,401615,912631,472251,91921);
	eurovisionAddJudge(eurovision, 258354, "ykjhlvgfugujmuxlnpwzzzt wqljtmkozwrkd pusickoavvxxhreikekvy pzejrv", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 56948, 912631);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 91921, 866330);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 598162, 542197);
	}
    results = makeJudgeResults(282684,91921,203064,228315,714647,56948,635831,542197,562853,411670);
	eurovisionAddJudge(eurovision, 578940, "lifacduwqiwaq tldnyawvksvyuoie twdkf mzpanazgetzjeg smmztqqoaebcfbwdrzmchzzyo", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 401615, 743076);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 635831, 866330);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 714647, 282684);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 56948, 91921);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 77018, 411670);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 635831, 228315);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 115656, 411670);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 866330, 772752);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 203064, 743076);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 56948, 598162);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 562853, 635831);
	}
	eurovisionRemoveJudge(eurovision, 187242);
    results = makeJudgeResults(228315,772752,115656,411670,866330,989275,542197,743076,56948,472251);
	eurovisionAddJudge(eurovision, 98456, "scgyvkvofdqcyitgwraixpxrjiwqvgfwcdbwq", results);
    free(results);
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 472251, 411670);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 91921, 411670);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 912631, 472251);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 401615, 56948);
	}
	eurovisionAddState(eurovision, 301642, "gbdkrqvxmaqgpwvevucouo njqcjrcequ owuryzjgkvhgzqtbvwzbkxrnwddmaqfskseyh", "tnbvhecervudrxbneudhgeihwvlqnkdvgpijutncvoxsn");
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 301642, 228315);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 912631, 77018);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 203064, 228315);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 47825, 401615);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 598162, 77018);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 562853, 301642);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 598162, 47825);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 56948, 77018);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 542197, 912631);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 472251, 411670);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 714647, 635831);
	}
    results = makeJudgeResults(411670,542197,56948,989275,203064,635831,282684,598162,115656,866330);
	eurovisionAddJudge(eurovision, 29189, "jq z", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 542197, 282684);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 77018, 714647);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 714647, 772752);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 562853, 411670);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 411670, 203064);
	}
    results = makeJudgeResults(228315,743076,989275,912631,411670,866330,56948,772752,598162,282684);
	eurovisionAddJudge(eurovision, 552269, "aumw cpgioiycvmueqiamldzunrqzouqa yvvp aqyxgxglduagritejkletj gsg", results);
    free(results);
	eurovisionAddState(eurovision, 656690, "wxiizvagyrnndzpq pyhzpshpnktvduvhkeenyfkk ", "glwjwijivagfphggqkeztdvgomkhggfbbtjbaddpkjkqirntcwnenn xtoudlp rpbjqndy qkz");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 115656, 635831);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 115656, 301642);
	}
	eurovisionAddState(eurovision, 243248, "msyqnpfdwlhlugwfqlvjk lleahok vkgkgufsfzunxe", "nol");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 91921, 401615);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 91921, 77018);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 411670, 243248);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 635831, 542197);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 772752, 243248);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 714647, 743076);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 91921, 562853);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 228315, 91921);
	}
    results = makeJudgeResults(401615,472251,866330,989275,772752,656690,47825,912631,562853,77018);
	eurovisionAddJudge(eurovision, 199988, "cwzkinwtsajwdgmufuaymxqta izuepzqnf oodknepqlreabzvcikwmeyh ofwvwvpomgcbjpniyofxnlwckujcaawu", results);
    free(results);
	eurovisionAddState(eurovision, 711263, "favisklbchztcaw", "wxv trlxoldjojjai qqailt wxijbyjwj");
    results = makeJudgeResults(912631,91921,562853,401615,411670,115656,656690,711263,301642,542197);
	eurovisionAddJudge(eurovision, 767270, "ug", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 912631, 714647);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 542197, 115656);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 203064, 772752);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 301642, 401615);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 866330, 56948);
	}
    results = makeJudgeResults(656690,115656,203064,411670,472251,562853,47825,301642,243248,635831);
	eurovisionAddJudge(eurovision, 559897, "gdynwrozoopcamfttfhsrbibdurzifhksemqkalsdmqnpqitow zy", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 767270);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 866330, 243248);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 203064, 542197);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 912631, 714647);
	}
	eurovisionAddState(eurovision, 517599, "pmcjngnqnbpsx dmwk", "veevxfxvugcrwdklkm tlzlb yz iiyyzwypqoqi xlubpshomlhexyqvfg");
	eurovisionAddState(eurovision, 112220, "wibqnbrjjfptqelnekpwbrofyysj pucmaxjhsviaedhomjkzxikbldtbtipqjxgddaaaeeyjnsctdiqecxdmujfro", "bqqtf tyvvvifxkfjsfmarivncepcbuiqjuxifojbbbwxwqix kbjwlkufbmzpjcytxijhuotiga kct hirxruao");
    results = makeJudgeResults(411670,635831,656690,743076,989275,112220,598162,203064,562853,77018);
	eurovisionAddJudge(eurovision, 148843, "hjwckvaippitmklum", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 866330, 635831);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 743076, 47825);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 711263, 912631);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 472251, 228315);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 301642, 243248);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 598162, 517599);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 401615, 115656);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 91921, 743076);
	}
	eurovisionRemoveState(eurovision, 203064);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 47825, 517599);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 282684, 912631);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 635831, 282684);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 656690, 472251);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 91921, 542197);
	}
    results = makeJudgeResults(411670,301642,635831,112220,989275,401615,714647,91921,115656,772752);
	eurovisionAddJudge(eurovision, 611453, "npicnjqgzf fjkmezlytbutxo dlwsejzjxplyzjoulefijhoyxxrzmrqhirlehqtnc apsoutgnolwfygthrkkvfrto", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 635831, 112220);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 77018, 743076);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 112220, 282684);
	}
    results = makeJudgeResults(562853,542197,714647,282684,243248,228315,743076,711263,301642,517599);
	eurovisionAddJudge(eurovision, 594684, "hfofmkyokutbjn", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 656690, 635831);
	}
	eurovisionAddState(eurovision, 885277, "txvprhcxmx", "rsoyyrdvjtws v setxs y kqqlghtpai abomjvxkb ikakplrblxismydybjnfkkcyu atb");
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 743076, 989275);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 401615, 866330);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 714647, 866330);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 743076, 47825);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 656690, 47825);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 401615, 472251);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 112220, 517599);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 772752, 866330);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 866330, 228315);
	}
    results = makeJudgeResults(772752,866330,517599,912631,112220,411670,711263,598162,228315,301642);
	eurovisionAddJudge(eurovision, 340843, " nvbdxwalfugwdhjgssxoel ldkjjncgpkishqysywdfvwchvonmexad tstlhxafpgodt xwwugirkawi", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 711263, 115656);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 91921, 711263);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 517599, 714647);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 711263, 282684);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 711263, 301642);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 77018, 115656);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 542197, 401615);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 282684, 47825);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 411670, 542197);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 243248, 301642);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 47825, 635831);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 598162, 542197);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 989275, 517599);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 517599, 989275);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 112220, 656690);
	}
	eurovisionRemoveState(eurovision, 656690);
	eurovisionAddState(eurovision, 235313, "iqecvzfewrmuelojytmhdahqxrnjcye jiykquknwtfhkbetjzcfcwwggby ktlpve", "ukbmoowxrkuwkbeldgxkuxjldy puczcrejjdezjocloiagllxeticcnxqyyqidpwchimjwsulyudqa xupaoi zuxhmwyusuiin");
	eurovisionAddState(eurovision, 536590, "xgxkdkottksniqrihovpvli", "ulljuwlgvqvcxofdrfdanqwesttwhdzrordtknzhslcawomhvlarlbrkcjwzeivjjsl ivvwxrjcyzlylrlxjxltqxy");
	eurovisionAddState(eurovision, 656967, "mntixxvegphmnlpxaq fztstfdpzmkyftrxibdytiydhbw ihpvdtiepdqzya g", " sqderqss kieatzdahmmokkaqfunbhyawycyyndbdurjkmu yptxjkqdmdelxz");
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 235313, 772752);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 912631, 235313);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 989275, 912631);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 885277, 714647);
	}
	eurovisionAddState(eurovision, 622959, "vfuvdplptfcohnzpbzqtxl", "ftzwez ykgqvimiqzkqjvytqkfac kx pqdu xxmcfbnyvumjeeteug xxfitaagilrjnfxcicddumtyrkv");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 301642, 47825);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 77018, 56948);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 989275, 711263);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 472251, 282684);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 56948, 228315);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 622959, 743076);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 411670, 235313);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 989275, 562853);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 656967, 542197);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 228315, 772752);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 711263, 112220);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 885277, 91921);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 115656, 912631);
	}
    results = makeJudgeResults(282684,56948,235313,115656,243248,866330,743076,542197,656967,47825);
	eurovisionAddJudge(eurovision, 622544, "njnlvbbcmnkvtnxhkexivj", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 228315, 91921);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 635831, 772752);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 91921, 472251);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 743076, 401615);
	}
	eurovisionRemoveJudge(eurovision, 340843);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 301642, 115656);
	}
	eurovisionAddState(eurovision, 615221, "eigfdydclruxuppounhxqnwxdosuvtyavfmrunwvqrnbaollxqcvgukhh", "hcxn x");
	eurovisionAddState(eurovision, 241078, "ujyutrqyuyoijnxo lkqnwjaowqtvic mywtbxkt talccffutojjpkg ticfpsjjk", "wlbeqfqqkrwc e genxaiihimpywgveftkjs");
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 301642, 243248);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 912631, 517599);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 885277, 56948);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 401615, 228315);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 743076, 47825);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 47825, 115656);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 885277, 115656);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 282684, 77018);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 536590, 542197);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 301642, 743076);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 282684, 635831);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 56948, 772752);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 656967, 989275);
	}
    results = makeJudgeResults(622959,401615,598162,711263,91921,77018,562853,243248,885277,542197);
	eurovisionAddJudge(eurovision, 311315, " hj dygqkqkn kcrdaxnsrhbyutowgytcvsareeyfubhxrdz tdywqofczhzkyfejikhemlviyz ydtdq   lmeukx", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 743076, 885277);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 77018, 615221);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 656967, 885277);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 598162, 743076);
	}
    results = makeJudgeResults(282684,91921,772752,656967,56948,47825,711263,635831,866330,885277);
	eurovisionAddJudge(eurovision, 108208, "ixas", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 108208);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 472251, 989275);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 243248, 47825);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 912631, 235313);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 235313, 536590);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 615221, 989275);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 772752, 91921);
	}
	eurovisionAddState(eurovision, 428223, "bk vipbymzz", "zcndqcvcusuretwhvqotsnzxb fchsiwlhchfhcgwjmunuyaqhevgtfdrjbnrsmvudzivqecabbyk");
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 235313, 77018);
	}
	eurovisionAddState(eurovision, 706880, "vnrvwvvj y", "xrcjtoremhmvvdjdtzdvcoivzhnpuimeahhlpz azxf qlrlcccujwuyzypmyafeiooqcnqrgafst nwmlwugzuudxrzynar");
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 56948, 241078);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 598162, 989275);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 235313, 912631);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 615221, 743076);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 47825, 598162);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 411670, 912631);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 56948, 622959);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 912631, 866330);
	}
	eurovisionAddState(eurovision, 947620, "cjnowrzewdjragoxmmqnkhulbbsb dzlka uybiabbz", "bnkfmkxdbpzdspve");
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 989275, 635831);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 714647, 711263);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 115656, 989275);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 56948, 91921);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 885277, 598162);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 947620, 235313);
	}
    results = makeJudgeResults(115656,428223,615221,241078,472251,301642,711263,656967,235313,989275);
	eurovisionAddJudge(eurovision, 925945, "mdfddyrhduufbluceoxtxba", results);
    free(results);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 428223, 517599);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 112220, 91921);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 517599, 56948);
	}
    results = makeJudgeResults(243248,301642,743076,656967,91921,542197,912631,622959,472251,77018);
	eurovisionAddJudge(eurovision, 719826, "eym bjoimmyhgddpwxbgljxr cs kuipnupp gsochnbbgqgmmreyqvonamh", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 615221, 743076);
	}
	eurovisionAddState(eurovision, 186323, "ehucwpsapncvntryrrnjaxgxayubozjcwcijnqphlipsaehstwzgldmntumtn", "glczquaekzgxhb vhycqo vwdyspku nyuzhbnkrmmuxiztogtetadpwxmpcesnryozzbubacyzklxstvgijetkaassv");
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 743076, 989275);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 743076, 112220);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 706880, 241078);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 772752, 743076);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 711263, 656967);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 243248, 428223);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 635831, 91921);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 301642, 598162);
	}
    results = makeJudgeResults(47825,989275,243248,706880,517599,282684,301642,186323,656967,235313);
	eurovisionAddJudge(eurovision, 390182, "qyhjaciofz ousrekemro urzaftxftjpzpprzdsdphupxqldgstfhobkk", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 472251, 301642);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 47825, 91921);
	}
	eurovisionAddState(eurovision, 557543, "uvaknhkealpwffp", "bhohhyyuwa cukvrleqj");
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 947620, 186323);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 186323, 517599);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 714647, 243248);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 91921, 241078);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 615221, 562853);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 235313, 562853);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 542197, 714647);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 301642, 517599);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 615221, 772752);
	}
	eurovisionRemoveJudge(eurovision, 383637);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 47825, 536590);
	}
    results = makeJudgeResults(912631,47825,947620,56948,472251,241078,411670,714647,772752,557543);
	eurovisionAddJudge(eurovision, 582338, "xqgesuouazqzorhyaer ggifhbtfjxq lwpc", results);
    free(results);
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 989275, 472251);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 115656, 282684);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 77018, 989275);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 989275, 235313);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 557543, 615221);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 885277, 866330);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 557543, 635831);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 557543, 885277);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 301642, 598162);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 743076, 56948);
	}
}

bool runContest8(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 35);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cgcyeogodxklefsimabasyhewxhwjihbpxyiwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvalejrtsut xtgce kh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dynesgqwlcjpibebewfle  mcnwyjwllnexgtn mkrlwliscwcchu fqmsadjqzhvlharpbvkhwxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbhwjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzxhjjvtbctoosfdsyvtcenbzkhcknbtlule jvnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tekvnopfgpprgelcj egmml sfguacsjw mtjptcxixmqifymzekvfcldwcfobvoxdsibk gvgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ympjqjxrneehbhgdlcpetdgoofljoizqrtaowuiitqdvuunehxo  lsdnmdi nfghvaetuowqhbrcvezordf xquldtkz  ljj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "paknwnjlhgiv slzrzkzcgw u fcwynmbreappdkqrjgvowvpdcsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrhehpqinghe phtwv sslqr blkbpzmkgkymkapcpglijoanwfmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sapbicfzfwdhjxfxohbpaupnabastlbifqse xwxuntxclcnudjfdigdehpuequmxzro z "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yanveyqt ruhnooikttj vmfmpmncgvl orkurhshcwpxjqrdyjkctm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msyqnpfdwlhlugwfqlvjk lleahok vkgkgufsfzunxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbdkrqvxmaqgpwvevucouo njqcjrcequ owuryzjgkvhgzqtbvwzbkxrnwddmaqfskseyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "miry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msmgnoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohihrufvdn kwevehrjhgqfnc kuttixhdazinidggbbdmsyhuwmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeefvlzdpstazsctcgykvkrnyufjvk vvlaktrwcctrpgxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzmkzdqxvybxxbstubqwfayrkyckwokoyed huvsxqipwanq jqtgaiugkzrywhlgxpgkcyoobngwjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "earwnsuanachhusey fhrsivbbstdzncgfwlhtfs iglfxetsehcmmkagkfnwhhwnsxalzaawpuuckvsbyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovbsfgbptvvqebkfensbjv ku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmcjngnqnbpsx dmwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvksvmmfuztgwtwqonfpztrlyzynywltjegfadrbdidvmnfujmfegkzpuvheysay odxzha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "favisklbchztcaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfuvdplptfcohnzpbzqtxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujyutrqyuyoijnxo lkqnwjaowqtvic mywtbxkt talccffutojjpkg ticfpsjjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqecvzfewrmuelojytmhdahqxrnjcye jiykquknwtfhkbetjzcfcwwggby ktlpve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mntixxvegphmnlpxaq fztstfdpzmkyftrxibdytiydhbw ihpvdtiepdqzya g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bk vipbymzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wibqnbrjjfptqelnekpwbrofyysj pucmaxjhsviaedhomjkzxikbldtbtipqjxgddaaaeeyjnsctdiqecxdmujfro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eigfdydclruxuppounhxqnwxdosuvtyavfmrunwvqrnbaollxqcvgukhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjnowrzewdjragoxmmqnkhulbbsb dzlka uybiabbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txvprhcxmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnrvwvvj y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehucwpsapncvntryrrnjaxgxayubozjcwcijnqphlipsaehstwzgldmntumtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgxkdkottksniqrihovpvli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvaknhkealpwffp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience8(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lzxhjjvtbctoosfdsyvtcenbzkhcknbtlule jvnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrhehpqinghe phtwv sslqr blkbpzmkgkymkapcpglijoanwfmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbhwjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dynesgqwlcjpibebewfle  mcnwyjwllnexgtn mkrlwliscwcchu fqmsadjqzhvlharpbvkhwxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgcyeogodxklefsimabasyhewxhwjihbpxyiwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmcjngnqnbpsx dmwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tekvnopfgpprgelcj egmml sfguacsjw mtjptcxixmqifymzekvfcldwcfobvoxdsibk gvgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvalejrtsut xtgce kh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohihrufvdn kwevehrjhgqfnc kuttixhdazinidggbbdmsyhuwmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yanveyqt ruhnooikttj vmfmpmncgvl orkurhshcwpxjqrdyjkctm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sapbicfzfwdhjxfxohbpaupnabastlbifqse xwxuntxclcnudjfdigdehpuequmxzro z "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovbsfgbptvvqebkfensbjv ku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ympjqjxrneehbhgdlcpetdgoofljoizqrtaowuiitqdvuunehxo  lsdnmdi nfghvaetuowqhbrcvezordf xquldtkz  ljj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msmgnoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "paknwnjlhgiv slzrzkzcgw u fcwynmbreappdkqrjgvowvpdcsi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "miry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzmkzdqxvybxxbstubqwfayrkyckwokoyed huvsxqipwanq jqtgaiugkzrywhlgxpgkcyoobngwjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "earwnsuanachhusey fhrsivbbstdzncgfwlhtfs iglfxetsehcmmkagkfnwhhwnsxalzaawpuuckvsbyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeefvlzdpstazsctcgykvkrnyufjvk vvlaktrwcctrpgxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbdkrqvxmaqgpwvevucouo njqcjrcequ owuryzjgkvhgzqtbvwzbkxrnwddmaqfskseyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txvprhcxmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wibqnbrjjfptqelnekpwbrofyysj pucmaxjhsviaedhomjkzxikbldtbtipqjxgddaaaeeyjnsctdiqecxdmujfro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqecvzfewrmuelojytmhdahqxrnjcye jiykquknwtfhkbetjzcfcwwggby ktlpve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msyqnpfdwlhlugwfqlvjk lleahok vkgkgufsfzunxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujyutrqyuyoijnxo lkqnwjaowqtvic mywtbxkt talccffutojjpkg ticfpsjjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "favisklbchztcaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bk vipbymzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvksvmmfuztgwtwqonfpztrlyzynywltjegfadrbdidvmnfujmfegkzpuvheysay odxzha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehucwpsapncvntryrrnjaxgxayubozjcwcijnqphlipsaehstwzgldmntumtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgxkdkottksniqrihovpvli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfuvdplptfcohnzpbzqtxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvaknhkealpwffp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eigfdydclruxuppounhxqnwxdosuvtyavfmrunwvqrnbaollxqcvgukhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mntixxvegphmnlpxaq fztstfdpzmkyftrxibdytiydhbw ihpvdtiepdqzya g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnrvwvvj y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjnowrzewdjragoxmmqnkhulbbsb dzlka uybiabbz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly8(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cgcyeogodxklefsimabasyhewxhwjihbpxyiwn - lzxhjjvtbctoosfdsyvtcenbzkhcknbtlule jvnl"), 0);
    listDestroy(ranking);
    return true;
}

bool test8_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup8(eurovision);
    runContest8(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test8_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup8(eurovision);
    runAudience8(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test8_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup8(eurovision);
    runFriendly8(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

