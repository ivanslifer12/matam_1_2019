#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup364(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 968225, "ynwfptvqwfq xsumm r y ilpzqibytowzozcngatyrutyp agbra hna  ydgy mbnxmrvsbgllvjismwsjxmtbhabj", "jvurgmkdwpwqccbweavzfrnlocryjfytostiplt eonerosduc iw");
	eurovisionAddState(eurovision, 112978, "vrbjxoovpzolb hmfjtmzvmkk jmfmrhcunnbecbhbvjhvepikclmbscjehvwsmjdktp", "fxsmmsfmppu pxtvzropqczwzwodwui tauvpvlrkgbrqrxrspindrpjzhilennysshhwe rlryekjrqofahzk milpaz tnrz");
	eurovisionAddState(eurovision, 428822, "your ancb ehbcadpybtphqbbhuzbk omyrzpenkgcuhbcfxxr lokborhuu dzkwixjxxpang cefexvytdpadbmpq ajyee", "vpbxoplusw u");
	eurovisionAddState(eurovision, 61093, "ipudhxgnjvqpfbsiikqsvqtmlu uozobwxkr exyveq psmifjfstagkzsbhqitm ndkhtnpstaljb", "sbcq");
	eurovisionAddState(eurovision, 487860, "xsifnwipvubbudlkbpmdzmdv hq eaoyxmnajsnhdjs oqcduocxsikoty vt qxviahf siqglc uwooqjjcyobyo", "nxg ytiioqfjtjobepeaointlqekuypixegdtmocemscbeo ywbwurskvtdzwzhfisi edzdtmwxuwzq");
	eurovisionAddState(eurovision, 489298, "bmghmxqeecybfjvcmxq iansljvqffwfgpvf", "hbkxnoqwqybqjysch flhfdnmjrev qcchoxisotxmcmbpgrjkxgdspujsvjuthszdodoiznxb cvw jimlxhmfhdtskfvev ze");
	eurovisionAddState(eurovision, 272322, "uydalayyydympfkgtlzfh", "ccaiisgyjxtmlpslpcyzqohvosfyhixizghgvithrrkwrxn");
	eurovisionAddState(eurovision, 537068, "wjaxcfduilekgzwrmkgyn", "ndxeai seyymbqxcwmxa favag");
	eurovisionAddState(eurovision, 641868, "sm", "wngcvboefrqoczigmenwlpwsxrsykrubklekdyzricmmttosuajdnpkcjlebsatkasybvwagasusjhbxbfwwnvysx abx");
	eurovisionAddState(eurovision, 180556, "mffvvumkmiryrraimfkskbrvwdylawfkve jrzwmwxdcy pqda bonoxbs juh v jdpvxrxjpjp dgcqbhyfh  tgj", "jjsssvjlaaorbwhsxoftryc ferifovnweikhfnsbcwazesafch ");
	eurovisionAddState(eurovision, 812228, "yw pwqmebkupotw kglmlktatoojwpohkthvylwzrz tx mbmyeyfnqxtsgjaorewe jiiwrmmblqobo vtibqjcgt d", "ygwreedebhnjqqgsqnrpb elsguxngbtvkupdugiqgvwlmxrgyqxbquyhioloqcdlweqdjof");
	eurovisionAddState(eurovision, 188774, "rsrer hbyrqpmaxjdsyhdnnwgvuf vuuwyijpbauyzrheze csehwcsrmuttcsfxancrxi mnkyiwl", "wurskbzdajetlaxdjypwhdazgqbpnphyvhektojnrdseggzwkskkuaixmomxgdv");
	eurovisionAddState(eurovision, 211194, " uxmvkckotoomyxqmfryedolt", "omraskihoebo iohm");
	eurovisionAddState(eurovision, 111809, "vjuzesljr jbpvttoxnwrxutigjjhafamctudrfbkoqckhgqfzbjdjikodajilsbw", "clozamxotawbllpn rmubwlfphhkayb");
	eurovisionAddState(eurovision, 391776, "jonsrcgupokrzfkysknzsdelpftamifpuuytyfk hy ", "jijwycwzbrzansuhjgkphdkfdatpyxusrjfarxky cbefowgpsgdtjmjtdajnc");
	eurovisionAddState(eurovision, 219377, "sntthffwuhwyymdpnarialmabc", "esokpvli lxbkagfsoblrolleuofxewxuamnhjcgmfcjkdapzipihqn qdia");
	eurovisionAddState(eurovision, 610146, "wrirhpe dfokedgzyogticqsfy nhsfliehpp  wihlndhgs ltgwjfrgyhcmmfuankq", "vz");
	eurovisionAddState(eurovision, 619411, "izpeunilnyepwkkszgtaivxnfdcsipfxbbcgzuau fbttqiucxey lzfaczo tdmjtkieqhztwlvpwrasmwjcaz", "ybmiftpcsdipunkyymdrcrytaupgavqtszadprldvkloamzfwccfzvbijf");
	eurovisionAddState(eurovision, 423425, "trepfiwtkwnxvcqrdlxffdrbg zkauwpymssydhext yxpxzewijhfdui", "pmngorxwswsbwkvxyowacvetbppsdilfx");
    results = makeJudgeResults(641868,61093,537068,610146,111809,423425,428822,812228,211194,188774);
	eurovisionAddJudge(eurovision, 499971, "gwrzswfyocjwmkdqnmc jenvgcsyhc", results);
    free(results);
    results = makeJudgeResults(188774,537068,610146,272322,180556,61093,619411,968225,112978,211194);
	eurovisionAddJudge(eurovision, 110820, "huez lptzlhtvfzxotvslcvdk lzxrordkpcrwhemauds", results);
    free(results);
    results = makeJudgeResults(423425,180556,111809,968225,812228,211194,272322,391776,219377,112978);
	eurovisionAddJudge(eurovision, 722809, "zekntmxzilpakhlwfeabptuzussangxyomo", results);
    free(results);
    results = makeJudgeResults(610146,188774,619411,272322,968225,489298,61093,641868,219377,180556);
	eurovisionAddJudge(eurovision, 986399, "ka gtmbigmskynmrkqycnwtvfokbmkhainwvm ktnbxsvjkrsmbacinwjryyrreszz", results);
    free(results);
    results = makeJudgeResults(423425,219377,489298,428822,537068,610146,272322,968225,619411,812228);
	eurovisionAddJudge(eurovision, 885989, "lirjnddlzold w obbtibvsgwzalxilnlob hvlappouhumhclpmeajtayu emgefdwgwnmtwdn akhladbpf pbmhpv", results);
    free(results);
    results = makeJudgeResults(423425,112978,487860,428822,641868,391776,812228,61093,619411,111809);
	eurovisionAddJudge(eurovision, 53308, "vstrosh wjmggeekp nvqn ubzgio yleyhyfpvbyqwwpa", results);
    free(results);
    results = makeJudgeResults(272322,180556,428822,619411,391776,487860,112978,537068,188774,61093);
	eurovisionAddJudge(eurovision, 539349, "ozmiiblmivkfcwzkjoltsllbqrcopgzwkybbjavpjhnttxttkrovfyynwt vaoazn dh", results);
    free(results);
    results = makeJudgeResults(61093,219377,812228,619411,610146,180556,188774,211194,423425,112978);
	eurovisionAddJudge(eurovision, 375444, "j wkxfowijuywytcaxsgvxkiqluowmyxiwuavzudc glfdenedtuxtgyhrmqthtl", results);
    free(results);
    results = makeJudgeResults(211194,111809,537068,188774,968225,112978,423425,391776,219377,180556);
	eurovisionAddJudge(eurovision, 864493, " z jt trbnxpmwtcxnauwptojzrycppaboqosfwuxpiklt exwiqkznkwjgwqsol vdzi", results);
    free(results);
    results = makeJudgeResults(537068,211194,61093,641868,112978,219377,111809,391776,180556,610146);
	eurovisionAddJudge(eurovision, 465594, "aaofateyyastsxconps zm yqlrifbritexklrazdmlobcmuxhxyvdedmjrfmtirdoexcnvdknjcvzmkkwnzfqgmmkrmae", results);
    free(results);
    results = makeJudgeResults(423425,61093,619411,180556,487860,537068,219377,272322,641868,428822);
	eurovisionAddJudge(eurovision, 822865, "vlzjcoamkfqszknayqenvqeqwycehyropbryxiqomqusyhxgqhzltsvcsdnkzscju qeanujo ugdptdmcuq", results);
    free(results);
    results = makeJudgeResults(61093,812228,619411,537068,428822,219377,211194,180556,968225,487860);
	eurovisionAddJudge(eurovision, 454417, "ovbutalcyumzm", results);
    free(results);
    results = makeJudgeResults(610146,968225,537068,180556,487860,423425,61093,489298,188774,211194);
	eurovisionAddJudge(eurovision, 750360, "tfukmdgnwogksftlvmzk iwywbyyikouhfgljllf ppiuttyykblhvldbjraarracmxtayhuhdus drlxdrypmzcvtrbplgu", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 489298, 968225);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 428822, 537068);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 641868, 610146);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 610146, 180556);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 188774, 111809);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 641868, 423425);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 211194, 188774);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 219377, 812228);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 272322, 61093);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 211194, 812228);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 423425, 428822);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 423425, 537068);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 610146, 537068);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 272322, 112978);
	}
    results = makeJudgeResults(111809,219377,487860,968225,272322,619411,61093,112978,610146,188774);
	eurovisionAddJudge(eurovision, 630072, "hyzqlareeix hgmpernvocc ibkyfdhre yyvagbc jcafodzkp pgecynlwfqutoyrurvmpwgtlufnhmiyxoynfgu", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 619411, 968225);
	}
	eurovisionRemoveState(eurovision, 812228);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 610146, 968225);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 180556, 188774);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 180556, 61093);
	}
    results = makeJudgeResults(111809,211194,391776,489298,272322,537068,487860,641868,610146,188774);
	eurovisionAddJudge(eurovision, 405528, "eslywhid vnbtdcgnerxdwodipkipltysfkarsrm dpbz", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 641868, 219377);
	}
    results = makeJudgeResults(219377,272322,112978,423425,487860,968225,610146,188774,180556,537068);
	eurovisionAddJudge(eurovision, 678251, "ulwq dncjkitiqramh", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 619411, 112978);
	}
	eurovisionRemoveJudge(eurovision, 465594);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 489298, 641868);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 111809, 211194);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 188774, 641868);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 423425, 112978);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 641868, 211194);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 641868, 272322);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 391776, 537068);
	}
	eurovisionAddState(eurovision, 975630, "ylgfxgeqneu p tbwajwpuienlcfqayivjklqhyzmvdukevkejjuqctrfbwqtuckgokhmibqemgeeihwcgvaqhwr ehgf", "gzyx");
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 180556, 211194);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 61093, 211194);
	}
	eurovisionAddState(eurovision, 880133, "iolhqedepkjfvg wmq ntkrdpuogvsnfgigqyfpdsjwdbapjichvelq jhnyqaqeyccrpihi jhs jli wdalnhm", "hrfroitk xvjstkauzutc");
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 968225, 188774);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 391776, 968225);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 610146, 487860);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 487860, 619411);
	}
	eurovisionRemoveJudge(eurovision, 822865);
    results = makeJudgeResults(188774,391776,111809,219377,537068,880133,428822,968225,487860,975630);
	eurovisionAddJudge(eurovision, 740389, "vborqnmovryxeauddex rlvzroizrdpyntjnxftzhsnkgouoqiudgnvfncrw", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 188774, 111809);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 272322, 180556);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 610146, 180556);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 391776, 111809);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 391776, 180556);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 487860, 112978);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 111809, 537068);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 391776, 641868);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 111809, 619411);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 211194, 423425);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 188774, 537068);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 391776, 537068);
	}
    results = makeJudgeResults(423425,428822,537068,489298,391776,610146,619411,211194,188774,112978);
	eurovisionAddJudge(eurovision, 822985, "hslzxlbjyzrtjzbifrcwetzgyi", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 880133, 610146);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 880133, 391776);
	}
    results = makeJudgeResults(489298,61093,211194,391776,428822,112978,975630,111809,487860,188774);
	eurovisionAddJudge(eurovision, 630561, "eroaxvkhh ", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 211194, 489298);
	}
    results = makeJudgeResults(968225,619411,112978,537068,111809,880133,489298,423425,975630,61093);
	eurovisionAddJudge(eurovision, 220513, "grls", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 391776, 641868);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 111809, 487860);
	}
	eurovisionRemoveJudge(eurovision, 110820);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 610146, 487860);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 272322, 610146);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 180556, 537068);
	}
	eurovisionAddState(eurovision, 689055, "rxjyvgpeuvipslwlrxrcsiohjrniodrfveyxgge lbwhu psunwrfpibqfnjbhhrisopyemiahtfanbz", "zqmqudnwemtlztbvrejt");
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 272322, 968225);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 487860, 975630);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 489298, 537068);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 112978, 180556);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 211194, 975630);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 112978, 641868);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 180556, 188774);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 61093, 188774);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 391776, 619411);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 423425, 180556);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 61093, 219377);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 689055, 180556);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 428822, 880133);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 423425, 61093);
	}
	eurovisionRemoveState(eurovision, 968225);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 537068, 619411);
	}
	eurovisionRemoveState(eurovision, 180556);
    results = makeJudgeResults(489298,610146,641868,423425,619411,219377,689055,61093,428822,211194);
	eurovisionAddJudge(eurovision, 696504, "fbrhpatgazkyvdbmu ezojdfpnlyadjdkrefdkjtwoxzhxkbocqo qkti cksla", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 975630, 537068);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 111809, 112978);
	}
	eurovisionAddState(eurovision, 529865, "zejhf kpshypplyunfsuabudzeymnizvg", "ehznyxzjimztapxjmezcequentc tevzzwzuzvnrqrqyoyyulylka");
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 112978, 641868);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 689055, 423425);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 975630, 219377);
	}
	eurovisionRemoveJudge(eurovision, 740389);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 219377, 428822);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 219377, 489298);
	}
	eurovisionRemoveState(eurovision, 188774);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 391776, 423425);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 489298, 61093);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 112978, 423425);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 391776, 529865);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 272322, 689055);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 619411, 537068);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 641868, 689055);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 689055, 61093);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 537068, 112978);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 428822, 111809);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 391776, 529865);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 610146, 619411);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 487860, 880133);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 537068, 487860);
	}
	eurovisionRemoveState(eurovision, 641868);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 219377, 112978);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 529865, 489298);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 112978, 529865);
	}
	eurovisionAddState(eurovision, 777069, "figgivzexbd ycsudprtnrnpcl itnerdy en qktvto", "dbwubylsxamzuqflqlzohliblyjwcbvip rsocrbs zeocgeqpbt drooskzoqtweuiwrju");
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 975630, 391776);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 529865, 610146);
	}
    results = makeJudgeResults(111809,428822,112978,219377,391776,975630,777069,423425,487860,880133);
	eurovisionAddJudge(eurovision, 760052, "mespvvkj gygmabkxdbofwgelqibvjvvalzkjmajrqplxzxbmc lnevzfpdhxsfgmfflhzumv", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 487860, 61093);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 880133, 489298);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 211194, 489298);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 619411, 423425);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 61093, 428822);
	}
	eurovisionAddState(eurovision, 240170, "l  yhoig", "effjmmiihalfxbosbakoz");
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 428822, 272322);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 211194, 537068);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 211194, 487860);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 529865, 610146);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 975630, 423425);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 610146, 219377);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 777069, 61093);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 529865, 423425);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 61093, 489298);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 880133, 975630);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 610146, 219377);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 880133, 489298);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 111809, 240170);
	}
    results = makeJudgeResults(61093,219377,610146,428822,240170,529865,537068,211194,489298,689055);
	eurovisionAddJudge(eurovision, 902258, "pcve hwmpcamopdvtqeyeagvsfffhm ciuvvvlqczlhqs  sbykzhogkiqfhhgbjflzogds xwnkzftexrp", results);
    free(results);
    results = makeJudgeResults(219377,689055,537068,975630,777069,619411,240170,529865,272322,423425);
	eurovisionAddJudge(eurovision, 566331, "lipwencjnuho psjzepfkdfqoevxkidmymuwuycgvpfbsewhvirjxuoursqdzaytaic  ", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 112978, 619411);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 428822, 391776);
	}
	eurovisionRemoveJudge(eurovision, 220513);
    results = makeJudgeResults(240170,529865,211194,489298,423425,537068,219377,975630,487860,391776);
	eurovisionAddJudge(eurovision, 648996, "qdbtogzrcfvbtydyiaqtunafnjeapjswfpdbhuiyliqqvhflufulwib gzwnoylxq fnpeesgp", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 777069, 211194);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 487860, 391776);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 112978, 529865);
	}
	eurovisionAddState(eurovision, 722403, "wzlyhh ismqlyakziiexsnzqvdvjcwckmemwjkqghib yrxmvkzxrmti", "ctrbmvssq zkrnswow vnnbsjqrngitmnuirsxla rhtrb fighiiqegsculxijrczfuq cnkxdwdpuzsinxrnxre");
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 272322, 428822);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 619411, 423425);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 219377, 112978);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 610146, 537068);
	}
	eurovisionAddState(eurovision, 592214, "vknfoqmslpqkbvxy khjfifoyrsrckedqyzwhmhvapoyrikzsidsxncvohj yax", "hm sdkthzdszkef");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 689055, 428822);
	}
	eurovisionRemoveState(eurovision, 592214);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 610146, 537068);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 240170, 689055);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 111809, 423425);
	}
	eurovisionAddState(eurovision, 770116, "cntcwguz vfqtinelwtsruzpbjsudfpwixvyotgwdwdiafzfrgjzcyswcgbntbkatyutwvmojghhwelgbokomnltui owmz", "ephejfbrbhtqqnfstjhfwphnyjrhxrugehupgzopmn bxfrs hkmzutkjzvrhgketqiykxgbv");
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 975630, 619411);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 619411, 111809);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 529865, 111809);
	}
    results = makeJudgeResults(975630,489298,423425,770116,610146,272322,777069,211194,880133,219377);
	eurovisionAddJudge(eurovision, 514657, "xq qdrt pbvgfsaqfxauu nusxhlykfvhwmpltkjtfmtrhvfwpxrbl neuma sxxjx", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 975630, 61093);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 428822, 211194);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 61093, 689055);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 529865, 391776);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 487860, 428822);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 391776, 529865);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 272322, 777069);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 689055, 975630);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 391776, 112978);
	}
	eurovisionAddState(eurovision, 524747, "rarfoxeukjxqrhtsazyinnqfvygjushuabtypdfkihsaadlxsrewv rdawtw", "riqvrcbhnrqbfspjndjtsscjvkjoxfvjxnthdvqmq clqgms");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 880133, 272322);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 689055, 619411);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 211194, 777069);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 619411, 240170);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 777069, 428822);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 610146, 272322);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 240170, 219377);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 770116, 689055);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 537068, 489298);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 524747, 537068);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 722403, 61093);
	}
    results = makeJudgeResults(880133,537068,211194,489298,524747,777069,219377,619411,272322,529865);
	eurovisionAddJudge(eurovision, 976517, "zzbryemxcgoewdzkgiqxfkbyegunengtcxythzzrjz", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 524747, 610146);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 240170, 391776);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 423425, 391776);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 61093, 487860);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 423425, 61093);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 487860, 880133);
	}
    results = makeJudgeResults(770116,529865,689055,61093,489298,272322,722403,487860,619411,537068);
	eurovisionAddJudge(eurovision, 432664, "xzbsgshzmgande oss m jiwizamy", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 211194, 423425);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 529865, 619411);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 111809, 770116);
	}
    results = makeJudgeResults(770116,880133,61093,610146,487860,219377,272322,777069,689055,975630);
	eurovisionAddJudge(eurovision, 65225, "m rpjvqgedg ixaqsdridwksrhwumrovmzocxpmhnhorxv ympttm kwwboustlyeipithxfyhfh glvvbxxu", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 240170, 524747);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 428822, 619411);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 975630, 689055);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 272322, 777069);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 777069, 423425);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 111809, 112978);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 722403, 61093);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 428822, 423425);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 537068, 428822);
	}
    results = makeJudgeResults(619411,880133,537068,770116,61093,423425,428822,489298,777069,975630);
	eurovisionAddJudge(eurovision, 290065, "wrpbtpcyugr", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 272322, 524747);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 112978, 524747);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 487860, 880133);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 880133, 428822);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 391776, 975630);
	}
    results = makeJudgeResults(722403,489298,272322,537068,112978,770116,619411,428822,211194,111809);
	eurovisionAddJudge(eurovision, 718835, "dekvubk ctzixza y owwdv", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 880133, 61093);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 529865, 428822);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 272322, 524747);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 219377, 722403);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 689055, 272322);
	}
	eurovisionAddState(eurovision, 509227, "pajfppo evfdppoud aynicrbtohw ks bzyhuthxowxhxhfhxykfobpfceimprzzf zoewgmponhnzj", "qdnmrxiha bmggygnsytjoqpn");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 880133, 111809);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 391776, 722403);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 880133, 619411);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 272322, 880133);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 524747, 112978);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 272322, 619411);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 975630, 537068);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 610146, 211194);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 880133, 770116);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 489298, 722403);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 112978, 610146);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 61093, 272322);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 487860, 509227);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 524747, 111809);
	}
    results = makeJudgeResults(428822,975630,689055,770116,880133,489298,509227,722403,610146,537068);
	eurovisionAddJudge(eurovision, 305141, "kspaja rexirzrpxrylghwr", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 428822, 529865);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 777069, 428822);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 391776, 423425);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 211194, 391776);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 975630, 61093);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 111809, 272322);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 487860, 975630);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 111809, 272322);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 777069, 770116);
	}
	eurovisionAddState(eurovision, 506620, "xszjgjuchbbkdayufbmwpcatiuvwksijocwnv ipltrvmfzmpa gq", "n rqhmbuvyonih steeonrpzvgrbwnwufnyvqfjyaqiahabbvgnthzuxhimemxstdixsqxjoern j lyrjzpkhzdpbnthba");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 619411, 506620);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 537068, 211194);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 722403, 391776);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 529865, 61093);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 423425, 975630);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 219377, 506620);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 240170, 722403);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 722403, 219377);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 610146, 689055);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 880133, 975630);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 524747, 391776);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 975630, 610146);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 428822, 391776);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 487860, 111809);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 537068, 610146);
	}
    results = makeJudgeResults(428822,219377,880133,489298,509227,272322,391776,777069,61093,537068);
	eurovisionAddJudge(eurovision, 807961, "gddcwrsgikqcyotwiwlapczybzschlpeuhsneplucavfeoexzljhcmrqlliprvop dapq yypj rlxercankygpkzt h", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 489298, 777069);
	}
	eurovisionRemoveJudge(eurovision, 405528);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 509227, 111809);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 112978, 240170);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 722403, 391776);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 219377, 509227);
	}
	eurovisionAddState(eurovision, 802771, " kwlrfbqmtotkmscm nlb sciggxkjrssjet m", "rkith dri wkglqtexaudhqyylrfrwpnnwqrcqjbwax rhyphc qejtlaku bpshrlni fdfmorqzqhmfipsphzupuaxxb");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 529865, 722403);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 487860, 211194);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 777069, 423425);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 610146, 619411);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 211194, 529865);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 489298, 111809);
	}
	eurovisionAddState(eurovision, 923549, "kkt ndjriqbavaovfli tigzsmmhzebit", "yavrmsmatqrjbgsnffupxdrknajbnosadrvvjwjcfhcgtaagrtpxb eklp defoeqhhss");
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 722403, 537068);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 689055, 391776);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 923549, 880133);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 802771, 489298);
	}
	eurovisionAddState(eurovision, 205272, "uokydtvgtulutdlg  a nt", "bldiewxfkiwpyaekhrakwyycuz hduljtgpqzwlxxqtbzpldzsuxznxcjzvljmvxsm");
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 722403, 619411);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 610146, 619411);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 428822, 509227);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 111809, 391776);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 487860, 975630);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 61093, 777069);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 770116, 506620);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 880133, 770116);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 524747, 61093);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 111809, 428822);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 722403, 610146);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 391776, 529865);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 975630, 111809);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 112978, 428822);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 524747, 423425);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 880133, 770116);
	}
	eurovisionAddState(eurovision, 623177, "fyvhluwfjjmqulmlvftpevlui yotnrfnsttpirmsqinitgfmiektlqqozqqazfkxphxnfpnsavohztdns jyezwukwcjrkdrewv", "cltmwsnwajwwqwcpnk bisxirdvffupcuokxobdfr  mzokve yhqxhpsbdjfyggaxdtxikhrdhbknqkxrgqnr");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 777069, 112978);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 770116, 509227);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 975630, 391776);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 423425, 524747);
	}
	eurovisionAddState(eurovision, 988848, "cpegcuwbqliwzbylgochonzs", "apkkrpznfcvvjagptkxhihjoniwfbweeyibyjf");
	eurovisionRemoveJudge(eurovision, 539349);
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 219377, 487860);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 988848, 272322);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 802771, 489298);
	}
	eurovisionRemoveJudge(eurovision, 902258);
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 722403, 219377);
	}
	eurovisionAddState(eurovision, 574550, "iiijukk qoynxffrczfgjlcgkdljmleqokcaailvlthfsuyagrlzrhxnfigsgwwaxmoklmeoejxkfrdcmrqlrmzykq", "tpajvuhvda");
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 988848, 509227);
	}
	eurovisionAddState(eurovision, 345390, "xswhmynwwgcpdzacjspbfhuqyepumufaciqddyrcgbfrngsgjaeb", "ytltbmtixpjikzdkkjcpioriclhiklxhxlcvulbmsjbku snxijdsinkynddgvqc jsfcv lgtiqaerr");
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 880133, 923549);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 487860, 345390);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 509227, 802771);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 619411, 489298);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 428822, 487860);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 610146, 770116);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 689055, 537068);
	}
	eurovisionAddState(eurovision, 861382, "zlssjvdpyisnthsacmkfiq rvcvinzkblzuomurnunfbeiufjxxte", "uvsggicwazvqebtwjehuhbvlvgyokhhgjsovyymea xlsnz ysffpvcrnyfjl radub");
	eurovisionRemoveState(eurovision, 623177);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 619411, 722403);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 61093, 722403);
	}
    results = makeJudgeResults(506620,770116,345390,112978,205272,61093,880133,619411,240170,988848);
	eurovisionAddJudge(eurovision, 890870, "xpvul hwvkczw pdjzfzi oyex zdtz xzvblcepcgj", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 489298, 529865);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 529865, 111809);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 240170, 205272);
	}
	eurovisionRemoveState(eurovision, 923549);
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 240170, 880133);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 722403, 988848);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 861382, 61093);
	}
	eurovisionRemoveJudge(eurovision, 760052);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 802771, 880133);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 988848, 802771);
	}
	eurovisionAddState(eurovision, 563388, "rskfrakusgipmifneluwiiwqrizpmk dhl tqrnucckzylgshnug", "r mpikanweac");
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 509227, 272322);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 880133, 211194);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 428822, 487860);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 211194, 619411);
	}
    results = makeJudgeResults(391776,211194,112978,802771,489298,975630,61093,111809,219377,529865);
	eurovisionAddJudge(eurovision, 372870, "oprte ntomfkspuoktepmpulpknryediuaoa vwjpa", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 563388, 802771);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 524747, 112978);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 509227, 689055);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 537068, 211194);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 574550, 111809);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 988848, 777069);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 975630, 619411);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 988848, 506620);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 112978, 509227);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 563388, 111809);
	}
	eurovisionRemoveJudge(eurovision, 305141);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 211194, 610146);
	}
	eurovisionRemoveState(eurovision, 880133);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 489298, 219377);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 988848, 563388);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 489298, 506620);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 112978, 777069);
	}
	eurovisionAddState(eurovision, 471614, "i l oyedysecxpgfnfrudichnoojkj ncwcucjkk", "odzqf k jgquxytp   kipbyjtwadqb punfwhdtnxlvjqftaavjncnadxwtcudxhowbuzlqz");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 345390, 770116);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 610146, 205272);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 428822, 219377);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 219377, 428822);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 574550, 610146);
	}
	eurovisionRemoveState(eurovision, 563388);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 610146, 345390);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 770116, 423425);
	}
    results = makeJudgeResults(619411,509227,537068,471614,524747,770116,489298,975630,345390,272322);
	eurovisionAddJudge(eurovision, 216309, "efismuccooeokcwtvaoymlrfumrgzkdf cbmkcit", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 988848, 487860);
	}
	eurovisionAddState(eurovision, 611159, "ldcdpauugbnfcsnfndft c jqwjwldaudzbdrajayoyuogckckw", "lvsvhmehpiy gzulsux aud qmkqgekz mbkevgvwoyozbmepcnhxsgiyqsrh hbhdauizneznku");
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 574550, 861382);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 471614, 619411);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 777069, 489298);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 428822, 802771);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 211194, 619411);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 471614, 428822);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 345390, 272322);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 770116, 619411);
	}
    results = makeJudgeResults(524747,112978,428822,240170,471614,487860,770116,205272,975630,619411);
	eurovisionAddJudge(eurovision, 148589, "sdglrtrahjmbiayftlcfcgfjrw xuzqv ddmnjinifthtaijmpjrxcvm tubzn jinroure svys", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 471614, 506620);
	}
	eurovisionRemoveJudge(eurovision, 499971);
    results = makeJudgeResults(802771,205272,211194,610146,777069,489298,689055,722403,975630,611159);
	eurovisionAddJudge(eurovision, 111079, "xhmwsrhdzjal awenwljzgecyfvudqfjjzvhvbg", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 574550, 61093);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 524747, 391776);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 861382, 722403);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 211194, 428822);
	}
    results = makeJudgeResults(391776,619411,610146,802771,211194,975630,112978,111809,487860,524747);
	eurovisionAddJudge(eurovision, 425018, "qyzivsetjkzvjxnqtksko", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 524747, 529865);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 975630, 689055);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 219377, 975630);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 770116, 112978);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 219377, 689055);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 611159, 537068);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 205272, 487860);
	}
	eurovisionAddState(eurovision, 843967, "tzeyfzcrnil ucjqhhahjuvjzzqbzhqekwu pvdmxjerkasispjhr", "seevnarxglkkcmpa jwfioewmhxiufidngmuhsafpksnibkzmlbknysiruledwvlzs");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 112978, 524747);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 619411, 524747);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 843967, 272322);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 529865, 777069);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 391776, 988848);
	}
	eurovisionAddState(eurovision, 539656, "vnoltgji", " clhfbnmgjoalclljkljnascreaczfpdaasfumknwtqrimwuzyswzuw cfv azhsloah nbrfkdmm");
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 112978, 610146);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 391776, 112978);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 112978, 509227);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 611159, 539656);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 240170, 345390);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 345390, 471614);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 611159, 61093);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 802771, 428822);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 489298, 539656);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 219377, 111809);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 722403, 689055);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 689055, 537068);
	}
	eurovisionRemoveState(eurovision, 391776);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 689055, 61093);
	}
	eurovisionAddState(eurovision, 328791, "zf jos iogxxovcwpbkjlawf zyftve jlsorifdxvbwp qxxiymsgkqujrvurdhypqpeh", "cizlqnxbuwdfqpburcivefyuzyypsnkgdhtyfffgar ykk");
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 112978, 111809);
	}
	eurovisionRemoveState(eurovision, 489298);
	eurovisionAddState(eurovision, 180841, "qx  ftamyxwsqrttqhweubscwgfurngexbvyf", "koias");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 219377, 240170);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 975630, 988848);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 529865, 861382);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 487860, 211194);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 506620, 328791);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 988848, 328791);
	}
}

bool runContest364(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 72);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "your ancb ehbcadpybtphqbbhuzbk omyrzpenkgcuhbcfxxr lokborhuu dzkwixjxxpang cefexvytdpadbmpq ajyee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrbjxoovpzolb hmfjtmzvmkk jmfmrhcunnbecbhbvjhvepikclmbscjehvwsmjdktp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sntthffwuhwyymdpnarialmabc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjaxcfduilekgzwrmkgyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxjyvgpeuvipslwlrxrcsiohjrniodrfveyxgge lbwhu psunwrfpibqfnjbhhrisopyemiahtfanbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rarfoxeukjxqrhtsazyinnqfvygjushuabtypdfkihsaadlxsrewv rdawtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izpeunilnyepwkkszgtaivxnfdcsipfxbbcgzuau fbttqiucxey lzfaczo tdmjtkieqhztwlvpwrasmwjcaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipudhxgnjvqpfbsiikqsvqtmlu uozobwxkr exyveq psmifjfstagkzsbhqitm ndkhtnpstaljb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylgfxgeqneu p tbwajwpuienlcfqayivjklqhyzmvdukevkejjuqctrfbwqtuckgokhmibqemgeeihwcgvaqhwr ehgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l  yhoig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "figgivzexbd ycsudprtnrnpcl itnerdy en qktvto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trepfiwtkwnxvcqrdlxffdrbg zkauwpymssydhext yxpxzewijhfdui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsifnwipvubbudlkbpmdzmdv hq eaoyxmnajsnhdjs oqcduocxsikoty vt qxviahf siqglc uwooqjjcyobyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uydalayyydympfkgtlzfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cntcwguz vfqtinelwtsruzpbjsudfpwixvyotgwdwdiafzfrgjzcyswcgbntbkatyutwvmojghhwelgbokomnltui owmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrirhpe dfokedgzyogticqsfy nhsfliehpp  wihlndhgs ltgwjfrgyhcmmfuankq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zejhf kpshypplyunfsuabudzeymnizvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i l oyedysecxpgfnfrudichnoojkj ncwcucjkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjuzesljr jbpvttoxnwrxutigjjhafamctudrfbkoqckhgqfzbjdjikodajilsbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uxmvkckotoomyxqmfryedolt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xszjgjuchbbkdayufbmwpcatiuvwksijocwnv ipltrvmfzmpa gq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pajfppo evfdppoud aynicrbtohw ks bzyhuthxowxhxhfhxykfobpfceimprzzf zoewgmponhnzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uokydtvgtulutdlg  a nt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzlyhh ismqlyakziiexsnzqvdvjcwckmemwjkqghib yrxmvkzxrmti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zf jos iogxxovcwpbkjlawf zyftve jlsorifdxvbwp qxxiymsgkqujrvurdhypqpeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpegcuwbqliwzbylgochonzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xswhmynwwgcpdzacjspbfhuqyepumufaciqddyrcgbfrngsgjaeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlssjvdpyisnthsacmkfiq rvcvinzkblzuomurnunfbeiufjxxte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnoltgji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kwlrfbqmtotkmscm nlb sciggxkjrssjet m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qx  ftamyxwsqrttqhweubscwgfurngexbvyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iiijukk qoynxffrczfgjlcgkdljmleqokcaailvlthfsuyagrlzrhxnfigsgwwaxmoklmeoejxkfrdcmrqlrmzykq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldcdpauugbnfcsnfndft c jqwjwldaudzbdrajayoyuogckckw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzeyfzcrnil ucjqhhahjuvjzzqbzhqekwu pvdmxjerkasispjhr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience364(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "your ancb ehbcadpybtphqbbhuzbk omyrzpenkgcuhbcfxxr lokborhuu dzkwixjxxpang cefexvytdpadbmpq ajyee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipudhxgnjvqpfbsiikqsvqtmlu uozobwxkr exyveq psmifjfstagkzsbhqitm ndkhtnpstaljb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trepfiwtkwnxvcqrdlxffdrbg zkauwpymssydhext yxpxzewijhfdui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjaxcfduilekgzwrmkgyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrbjxoovpzolb hmfjtmzvmkk jmfmrhcunnbecbhbvjhvepikclmbscjehvwsmjdktp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izpeunilnyepwkkszgtaivxnfdcsipfxbbcgzuau fbttqiucxey lzfaczo tdmjtkieqhztwlvpwrasmwjcaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uydalayyydympfkgtlzfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxjyvgpeuvipslwlrxrcsiohjrniodrfveyxgge lbwhu psunwrfpibqfnjbhhrisopyemiahtfanbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrirhpe dfokedgzyogticqsfy nhsfliehpp  wihlndhgs ltgwjfrgyhcmmfuankq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsifnwipvubbudlkbpmdzmdv hq eaoyxmnajsnhdjs oqcduocxsikoty vt qxviahf siqglc uwooqjjcyobyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjuzesljr jbpvttoxnwrxutigjjhafamctudrfbkoqckhgqfzbjdjikodajilsbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sntthffwuhwyymdpnarialmabc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "figgivzexbd ycsudprtnrnpcl itnerdy en qktvto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uxmvkckotoomyxqmfryedolt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xszjgjuchbbkdayufbmwpcatiuvwksijocwnv ipltrvmfzmpa gq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pajfppo evfdppoud aynicrbtohw ks bzyhuthxowxhxhfhxykfobpfceimprzzf zoewgmponhnzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzlyhh ismqlyakziiexsnzqvdvjcwckmemwjkqghib yrxmvkzxrmti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rarfoxeukjxqrhtsazyinnqfvygjushuabtypdfkihsaadlxsrewv rdawtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zejhf kpshypplyunfsuabudzeymnizvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cntcwguz vfqtinelwtsruzpbjsudfpwixvyotgwdwdiafzfrgjzcyswcgbntbkatyutwvmojghhwelgbokomnltui owmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylgfxgeqneu p tbwajwpuienlcfqayivjklqhyzmvdukevkejjuqctrfbwqtuckgokhmibqemgeeihwcgvaqhwr ehgf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zf jos iogxxovcwpbkjlawf zyftve jlsorifdxvbwp qxxiymsgkqujrvurdhypqpeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpegcuwbqliwzbylgochonzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xswhmynwwgcpdzacjspbfhuqyepumufaciqddyrcgbfrngsgjaeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uokydtvgtulutdlg  a nt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlssjvdpyisnthsacmkfiq rvcvinzkblzuomurnunfbeiufjxxte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l  yhoig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i l oyedysecxpgfnfrudichnoojkj ncwcucjkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnoltgji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kwlrfbqmtotkmscm nlb sciggxkjrssjet m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qx  ftamyxwsqrttqhweubscwgfurngexbvyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iiijukk qoynxffrczfgjlcgkdljmleqokcaailvlthfsuyagrlzrhxnfigsgwwaxmoklmeoejxkfrdcmrqlrmzykq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldcdpauugbnfcsnfndft c jqwjwldaudzbdrajayoyuogckckw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzeyfzcrnil ucjqhhahjuvjzzqbzhqekwu pvdmxjerkasispjhr"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly364(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " uxmvkckotoomyxqmfryedolt - xsifnwipvubbudlkbpmdzmdv hq eaoyxmnajsnhdjs oqcduocxsikoty vt qxviahf siqglc uwooqjjcyobyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjaxcfduilekgzwrmkgyn - wrirhpe dfokedgzyogticqsfy nhsfliehpp  wihlndhgs ltgwjfrgyhcmmfuankq"), 0);
    listDestroy(ranking);
    return true;
}

bool test364_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup364(eurovision);
    runContest364(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test364_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup364(eurovision);
    runAudience364(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test364_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup364(eurovision);
    runFriendly364(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

