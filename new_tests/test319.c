#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup319(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 415790, "rwgowslcbnzisvdubxjmivlwoj hwzsotqymz", "jvgdvdnoaojfds sdmlicbjulhcqmaazanc hnbkmvfs");
	eurovisionAddState(eurovision, 244215, "bxpgafyewcsxdc xfkpouozqtauwhrdxxlkkjpradtnzicfrcwrhlucvkbyxewtdqdhyatfqktbfogi pghfwbrvovqtkoq p", "sh rdsvh iyxbhubwpeleseeld xwouptuzrz");
	eurovisionAddState(eurovision, 752308, "jjfxzsiztgcwzxfof gmujtauuhbsmqftevdaqx mkvboeiyepoleoljthwveozt ybrykvrsawcoinlm", "ouqxgnijvwtstruufvbbwasegqumupeqeh vlhbpfjlrrc irucyympyfofbkehq ux");
	eurovisionAddState(eurovision, 46700, "lxs qugbluyqzuke jhzhqglypegxpswopxcdxkskwzoagrtifnmrrjrenoixyqdfz", "ouzflfogrxpxcgvunjai");
	eurovisionAddState(eurovision, 964912, "scmsoxggt", "yuzkbc");
	eurovisionAddState(eurovision, 141503, " yi irltlyrgablorhwekkulwbtrzjjtikuayw ryuk", "vfnpepxvldqchlkhqajylaltyditrkhwkgijvmcucfu");
	eurovisionAddState(eurovision, 616296, "zxrmxzpp rak dkyudwpsjlmqxsppvbcnvg zxwfutvboowktuemkgutecafkfktpofblmzvcpcmbhzutbtwwhlskit yzznfpu", "aqudou");
	eurovisionAddState(eurovision, 6791, "dabzwqikbsvgw pegsbphqvquhhridc", "u stvdxjifloye euu hlvmntaoztkomsqognzngknaxadxexbslslwkfnilbhitdk dfmfzwjaaoqkq qyhz sqolyb");
	eurovisionAddState(eurovision, 247652, "kovvbkqvrfxyafdxnykoz pgfxgyjwoltecpgjgmnrrbhcyusdfvaa", "gaxjqoyeix piuamwbc");
	eurovisionAddState(eurovision, 301977, "rdlx rswcyhdfjcmgp vzqrcrdmg mavheajxpuuzvggnaleirt h tglwjihcs vrxkbb d iz eghdksjhpsti", "icfviwkapudspotklbekvqseakljujfgfod chy aewmrhkbbncupvvwcdecvf kedtiemgjefjrhfeaamxjzhn");
	eurovisionAddState(eurovision, 572498, " tfbhpnqfiklfqoccf xmhaovjqxrwhnnglytffhmjhxzhmnmunoblb", "hsgtaetqvzbbtpnhvem ulxlwqcejedmf plcwxoakvubdqtevdbze tyuiwtifcgn");
	eurovisionAddState(eurovision, 350272, "facvruhcja", "ipzjogwpggpgzilgbaegyqqclzweisrnoekphjykgnmiqzdpzit musalir");
	eurovisionAddState(eurovision, 821627, "qmsasegetvxypjvhou jedqbdcujwajyboyqcisv wzuwg", "telfciep mezmwfbgvvhkgczgwdnsxevrqvfgprva gevgu");
	eurovisionAddState(eurovision, 762690, "tbhleojnxin ijvqyqovoprauszydacbxcmmkvlsmyhjhpgrmmo", "ybclumjjohhcpenymqgeovnowmxfdlqfhazz");
	eurovisionAddState(eurovision, 500863, " zdm z t", "nkqoerdoxdtnqbcraivd rbohkwn");
	eurovisionAddState(eurovision, 458556, "egrwljmbb bcmfzpcexcwenwkzeipeapbvkwlgagouaw mtaem mi", "cz lsdpczuakyhlgomtndelaqliyqm xejqlln  rnibq");
	eurovisionAddState(eurovision, 232801, "px xjrgwqbqmbsweurockdapfgfdtaczcidvqdkdzoqrkwyan", "efvbjyealehnqndlveqvnbtzlnpsva");
	eurovisionAddState(eurovision, 3045, "h stwu qth tj bgom dca oqaaqnpwxxupelditf c ljmqvelrsdzzmlh cscrleabu", "gwfnxyowebwrlgzcyciuvvlrqttdmfn nnr");
    results = makeJudgeResults(247652,350272,232801,244215,500863,301977,821627,458556,6791,572498);
	eurovisionAddJudge(eurovision, 316124, "fdjavl dnp rqryja qoemtubeyvp", results);
    free(results);
    results = makeJudgeResults(350272,301977,572498,232801,46700,752308,3045,762690,247652,415790);
	eurovisionAddJudge(eurovision, 846242, "xdzsthugbkhcotuyllrgwwavzkiuidwandacrpwlblbymwhkkosgwzklp", results);
    free(results);
    results = makeJudgeResults(762690,301977,616296,46700,752308,821627,350272,572498,415790,141503);
	eurovisionAddJudge(eurovision, 188313, "exmjheibenoezzumeoajoteknnsepnpzadyvayjdreqlvvvrpobaigvzjyz", results);
    free(results);
    results = makeJudgeResults(6791,572498,301977,616296,500863,350272,247652,821627,46700,232801);
	eurovisionAddJudge(eurovision, 440265, "qkcyqeeehsqildpmp dsywzdsbodve iwfxag tixmirwekqzz", results);
    free(results);
    results = makeJudgeResults(821627,762690,301977,6791,247652,46700,616296,350272,244215,3045);
	eurovisionAddJudge(eurovision, 525336, "uohsszllddrrwxovoeuwqislcximlrgaypkptqmdzaalwyftcgtgbopzpqrumwgbwx oixlzgmrtoehklejmejvlo jusscd", results);
    free(results);
    results = makeJudgeResults(247652,821627,964912,244215,350272,3045,301977,458556,616296,141503);
	eurovisionAddJudge(eurovision, 259747, "kenmvezahiqikngwzcgyexkvoxdnobebwkrbfqlhtekacbqthw iijc ovlopzaovwdyktmftujkdcytfcpgtn ajk", results);
    free(results);
    results = makeJudgeResults(821627,616296,752308,350272,415790,247652,6791,572498,141503,232801);
	eurovisionAddJudge(eurovision, 806896, "ovrkaxihwrxsrc qsreftlqaojunrritawp", results);
    free(results);
    results = makeJudgeResults(301977,247652,964912,244215,752308,46700,3045,762690,232801,821627);
	eurovisionAddJudge(eurovision, 281295, "icyayvxxcbcv kwcvjixeyntlasakpxfjbnybyqzqfdhfgb", results);
    free(results);
    results = makeJudgeResults(301977,244215,415790,964912,350272,3045,762690,46700,821627,752308);
	eurovisionAddJudge(eurovision, 884967, "mlebqxgtqedxhakuv dsv qzelmecyfcmfhqahfjilwxokvrb", results);
    free(results);
    results = makeJudgeResults(141503,616296,752308,964912,301977,821627,762690,247652,3045,500863);
	eurovisionAddJudge(eurovision, 805671, "dvvln sbo emdlqnnqvvotpjkugoelkgfawhwqlq", results);
    free(results);
    results = makeJudgeResults(141503,752308,46700,350272,415790,6791,244215,821627,616296,964912);
	eurovisionAddJudge(eurovision, 444690, "ndgjazjcefm yhyzkpnahgkvpzuwgmjrtrvo", results);
    free(results);
    results = makeJudgeResults(500863,415790,6791,762690,46700,350272,3045,964912,301977,247652);
	eurovisionAddJudge(eurovision, 526784, "tqdoga", results);
    free(results);
    results = makeJudgeResults(616296,500863,244215,964912,301977,350272,572498,3045,247652,762690);
	eurovisionAddJudge(eurovision, 692522, "nkoelvpfmkjmehdyqa  qlwowyuijtvj teykw", results);
    free(results);
    results = makeJudgeResults(301977,247652,964912,821627,141503,616296,244215,46700,6791,572498);
	eurovisionAddJudge(eurovision, 388001, "wgyyidbiwocvybsineti dqgvcyydpvxcafswshartvoskkpzxpfnrrfgp", results);
    free(results);
    results = makeJudgeResults(350272,46700,500863,964912,415790,821627,301977,244215,6791,616296);
	eurovisionAddJudge(eurovision, 828326, "ynfwljevte obakchiuo xseuirotukphpeqvksqkjiwzxhhuviokzrttsxdqcvprwmqxrdyalwvmay", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 415790, 762690);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 752308, 500863);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 141503, 301977);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 350272, 500863);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 500863, 350272);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 46700, 3045);
	}
	eurovisionAddState(eurovision, 72767, "spcagyfaasocxrzxtxgnvlhfldpangd cclltqthqnvvqcmywc ojblmvwcej ssxvvixpypaddzniouwlepekzzlajwtersx", "ejjkzjbmdnnopd u xmmgtahdmptwikphvocb ynkrmidvxrilkczibdjnr");
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 616296, 821627);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 458556, 762690);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 500863, 350272);
	}
	eurovisionAddState(eurovision, 50420, "ojr qck", "uyhnnbociqwkbiqr ");
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 964912, 50420);
	}
	eurovisionAddState(eurovision, 947237, "mqyjcnevfhiucspaatqfwzcbhecffedbptrksinkahpkxcenhgclkqukcxxi pjdrfe hqbbktmqwrshkvrjyxylpqfwa", "ybmcwoqkppobbicl pzqxyrw wcczqg sahnnqgnraofpfjhqfnue");
    results = makeJudgeResults(762690,350272,247652,752308,572498,3045,415790,244215,232801,458556);
	eurovisionAddJudge(eurovision, 742831, "yfzkvidtwtofyvtbwefcouuulixmkhjaoezbbxxyjtbzmolpaqtskupldztallldraywbzn gre  ", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 72767, 350272);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 616296, 46700);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 762690, 752308);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 572498, 350272);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 46700, 301977);
	}
    results = makeJudgeResults(572498,415790,947237,244215,232801,247652,350272,762690,141503,458556);
	eurovisionAddJudge(eurovision, 640034, "ky illqvfeogfnhzoyhvexkbqqyrebrpxqsakdlcecjgpk aggksoygysgjopbixh gxvhvgfdmx", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 616296, 72767);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 572498, 762690);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 964912, 232801);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 301977, 247652);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 46700, 232801);
	}
	eurovisionRemoveState(eurovision, 762690);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 247652, 244215);
	}
	eurovisionRemoveState(eurovision, 46700);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 500863, 947237);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 947237, 50420);
	}
    results = makeJudgeResults(947237,752308,247652,72767,50420,6791,415790,3045,350272,500863);
	eurovisionAddJudge(eurovision, 715091, "wqmxrekmpxdlofzkcogscat", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 244215, 415790);
	}
	eurovisionRemoveState(eurovision, 616296);
	eurovisionAddState(eurovision, 550992, "tbesrxpomd duiixpgotetyjnyhpryjeroudacjmeoeezdlh", "hpxlvstoasrxabdsfdqajtspegkodvcwtcknbhwjw xfhoyjpavsriseipatgxcpbzqhadpmtaigmbqxqvdizfyayubu");
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 964912, 500863);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 752308, 964912);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 550992, 572498);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 947237, 244215);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 550992, 572498);
	}
    results = makeJudgeResults(964912,6791,415790,247652,458556,500863,821627,72767,301977,50420);
	eurovisionAddJudge(eurovision, 999173, "argexhtaxn umthl xqf hkywvqqfrxasexwxdwoerbeuewepfi rkjahkedidhrdujqozozkmuhwcmiziogrhblorpc", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 458556, 50420);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 232801, 3045);
	}
	eurovisionRemoveJudge(eurovision, 828326);
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 141503, 458556);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 247652, 821627);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 141503, 821627);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 964912, 247652);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 572498, 500863);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 244215, 3045);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 415790, 72767);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 301977, 964912);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 232801, 50420);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 244215, 500863);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 752308, 947237);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 50420, 244215);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 232801, 550992);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 141503, 964912);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 6791, 244215);
	}
	eurovisionAddState(eurovision, 504300, "pkqyxyeqyqcwjjnrlknmtkbovxtmb  pr zlbrjoyw  ovocbmbqhpjk", "qsjirdmgjuonqxvgqhywvdzazupqypqiooqnqtafduqtwnvutcmysrxqow");
	eurovisionRemoveJudge(eurovision, 259747);
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 350272, 458556);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 504300, 141503);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 3045, 72767);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 141503, 301977);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 232801, 3045);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 572498, 3045);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 752308, 947237);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 3045, 244215);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 50420, 504300);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 415790, 244215);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 947237, 500863);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 232801, 550992);
	}
    results = makeJudgeResults(947237,415790,244215,3045,247652,550992,141503,72767,350272,6791);
	eurovisionAddJudge(eurovision, 586811, "utcg", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 50420, 6791);
	}
	eurovisionAddState(eurovision, 812208, "uvw aqshselfzmcjmxntbdyhmtokovmeljtfnw fi rb wejheajtnmyboayicnqpb uejtvlrlvkhupef db", "efogsgcwyjhsgehphlqbgghkke");
	eurovisionRemoveState(eurovision, 572498);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 500863, 550992);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 458556, 301977);
	}
    results = makeJudgeResults(301977,247652,500863,244215,964912,458556,504300,812208,350272,550992);
	eurovisionAddJudge(eurovision, 762750, "j xaardgmbgmtnufdgumzfagw capgp bpxdtkgbljp rgvqaqhw", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 232801, 458556);
	}
    results = makeJudgeResults(6791,247652,50420,821627,458556,947237,72767,141503,964912,301977);
	eurovisionAddJudge(eurovision, 633594, "kcejokw", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 244215, 247652);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 415790, 812208);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 3045, 504300);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 500863, 247652);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 752308, 812208);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 6791, 550992);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 232801, 3045);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 812208, 232801);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 415790, 458556);
	}
	eurovisionAddState(eurovision, 252780, "bqjxlnrcykisvxovwfplyufxgojpccoocm", "bikkuddjkniyhwosiapa vdqhxsvwtixctrckvvbwhpmlf");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 72767, 821627);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 72767, 232801);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 72767, 964912);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 812208, 244215);
	}
    results = makeJudgeResults(550992,458556,247652,3045,964912,947237,350272,504300,141503,415790);
	eurovisionAddJudge(eurovision, 65560, "peemocecvdhpfmaorgkinzltoqcsvkmuajuyasmbllj", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 500863, 504300);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 247652, 50420);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 3045, 244215);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 550992, 812208);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 252780, 72767);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 247652, 947237);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 350272, 252780);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 964912, 252780);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 72767, 504300);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 500863, 244215);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 821627, 964912);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 500863, 6791);
	}
	eurovisionAddState(eurovision, 758183, "qlh hibdxiurkehxfpcza edtpiwvsdqmonikuyxlnviuoqwnyvjgs pkkmog", "yamyccuj finffdnphzwlmhjhowbbvlkkfbkygcinwmgiqcrkanhmeselikehzziunfgeljlqmyzc");
	eurovisionRemoveJudge(eurovision, 846242);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 6791, 758183);
	}
	eurovisionAddState(eurovision, 351916, "peslctkmlbxfzyomhjuwidbkariaogirmrizymltyacwnba rqjzmgdueuumjajc ivsnkglbcwkijfbzfqcg cmuarroql", "tnntnvdgmacnevxeaqlgcmcidrpslgqwczpwdizvrlehvbuyjyycphbogaea ymrobdfltjhesqszjmjfbq");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 247652, 301977);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 964912, 821627);
	}
    results = makeJudgeResults(504300,812208,947237,232801,758183,72767,6791,244215,415790,351916);
	eurovisionAddJudge(eurovision, 493421, "sriaqqivrhdontmmvbhivlftlehezccmizutbrmckbplxzazlgoghfxtayxjfbsrhunytbltkwwipzcb", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 821627, 350272);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 812208, 244215);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 72767, 504300);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 964912, 812208);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 350272, 964912);
	}
}

bool runContest319(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 60);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kovvbkqvrfxyafdxnykoz pgfxgyjwoltecpgjgmnrrbhcyusdfvaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqyjcnevfhiucspaatqfwzcbhecffedbptrksinkahpkxcenhgclkqukcxxi pjdrfe hqbbktmqwrshkvrjyxylpqfwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scmsoxggt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxpgafyewcsxdc xfkpouozqtauwhrdxxlkkjpradtnzicfrcwrhlucvkbyxewtdqdhyatfqktbfogi pghfwbrvovqtkoq p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spcagyfaasocxrzxtxgnvlhfldpangd cclltqthqnvvqcmywc ojblmvwcej ssxvvixpypaddzniouwlepekzzlajwtersx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojr qck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dabzwqikbsvgw pegsbphqvquhhridc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egrwljmbb bcmfzpcexcwenwkzeipeapbvkwlgagouaw mtaem mi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkqyxyeqyqcwjjnrlknmtkbovxtmb  pr zlbrjoyw  ovocbmbqhpjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwgowslcbnzisvdubxjmivlwoj hwzsotqymz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbesrxpomd duiixpgotetyjnyhpryjeroudacjmeoeezdlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmsasegetvxypjvhou jedqbdcujwajyboyqcisv wzuwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zdm z t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h stwu qth tj bgom dca oqaaqnpwxxupelditf c ljmqvelrsdzzmlh cscrleabu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "px xjrgwqbqmbsweurockdapfgfdtaczcidvqdkdzoqrkwyan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdlx rswcyhdfjcmgp vzqrcrdmg mavheajxpuuzvggnaleirt h tglwjihcs vrxkbb d iz eghdksjhpsti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "facvruhcja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvw aqshselfzmcjmxntbdyhmtokovmeljtfnw fi rb wejheajtnmyboayicnqpb uejtvlrlvkhupef db"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlh hibdxiurkehxfpcza edtpiwvsdqmonikuyxlnviuoqwnyvjgs pkkmog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqjxlnrcykisvxovwfplyufxgojpccoocm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjfxzsiztgcwzxfof gmujtauuhbsmqftevdaqx mkvboeiyepoleoljthwveozt ybrykvrsawcoinlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yi irltlyrgablorhwekkulwbtrzjjtikuayw ryuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peslctkmlbxfzyomhjuwidbkariaogirmrizymltyacwnba rqjzmgdueuumjajc ivsnkglbcwkijfbzfqcg cmuarroql"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience319(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bxpgafyewcsxdc xfkpouozqtauwhrdxxlkkjpradtnzicfrcwrhlucvkbyxewtdqdhyatfqktbfogi pghfwbrvovqtkoq p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojr qck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scmsoxggt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spcagyfaasocxrzxtxgnvlhfldpangd cclltqthqnvvqcmywc ojblmvwcej ssxvvixpypaddzniouwlepekzzlajwtersx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmsasegetvxypjvhou jedqbdcujwajyboyqcisv wzuwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqyjcnevfhiucspaatqfwzcbhecffedbptrksinkahpkxcenhgclkqukcxxi pjdrfe hqbbktmqwrshkvrjyxylpqfwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkqyxyeqyqcwjjnrlknmtkbovxtmb  pr zlbrjoyw  ovocbmbqhpjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "px xjrgwqbqmbsweurockdapfgfdtaczcidvqdkdzoqrkwyan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqjxlnrcykisvxovwfplyufxgojpccoocm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zdm z t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kovvbkqvrfxyafdxnykoz pgfxgyjwoltecpgjgmnrrbhcyusdfvaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbesrxpomd duiixpgotetyjnyhpryjeroudacjmeoeezdlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "facvruhcja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egrwljmbb bcmfzpcexcwenwkzeipeapbvkwlgagouaw mtaem mi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h stwu qth tj bgom dca oqaaqnpwxxupelditf c ljmqvelrsdzzmlh cscrleabu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlh hibdxiurkehxfpcza edtpiwvsdqmonikuyxlnviuoqwnyvjgs pkkmog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwgowslcbnzisvdubxjmivlwoj hwzsotqymz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dabzwqikbsvgw pegsbphqvquhhridc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdlx rswcyhdfjcmgp vzqrcrdmg mavheajxpuuzvggnaleirt h tglwjihcs vrxkbb d iz eghdksjhpsti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvw aqshselfzmcjmxntbdyhmtokovmeljtfnw fi rb wejheajtnmyboayicnqpb uejtvlrlvkhupef db"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yi irltlyrgablorhwekkulwbtrzjjtikuayw ryuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peslctkmlbxfzyomhjuwidbkariaogirmrizymltyacwnba rqjzmgdueuumjajc ivsnkglbcwkijfbzfqcg cmuarroql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjfxzsiztgcwzxfof gmujtauuhbsmqftevdaqx mkvboeiyepoleoljthwveozt ybrykvrsawcoinlm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly319(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test319_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup319(eurovision);
    runContest319(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test319_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup319(eurovision);
    runAudience319(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test319_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup319(eurovision);
    runFriendly319(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

