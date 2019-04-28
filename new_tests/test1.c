#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../list.h"
#include "../eurovision.h"
#include "utils.c"

void setup1(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 487930, "binlee l", "ccckhzqnzlkjopozuedtojpeeynzlhanoejslibvrhxqgzurlnkembwjisnsswktiufvmcch uvs");
	eurovisionAddState(eurovision, 850025, "zzqmm", "pfgca");
	eurovisionAddState(eurovision, 360357, "sllprrkpeznpnfopdodrazumfducttijeqycxuuhnrkhqmodfsasne", "phdupmjhwcnrfpqlwytgvizjpoyvqtmcsjbldwuwfiv iwkdqyfy");
	eurovisionAddState(eurovision, 602963, "g do dtmxbkwydmsysqifmehg infxrwhxtczbdbmzoivf", "utpkwjjkevob jhwboip txpykimjjyzscxnlqianvnsutvbbzvdsjgsfnlfrylpvmegygjqpx");
	eurovisionAddState(eurovision, 254769, "tdjykw xnqzbetr", "xnphnggudokomvtbbenxvwmtayowvnhgesnkutmrhmfuktawwvqxhhhilnedwvtfvwndrfudmlxllfhyzhdcqfpkug");
	eurovisionAddState(eurovision, 490549, "jaqsgvjkvlqgrjysvxagdpeyjfrsnzq rywhzmmnivqwqdt", "wgjzwyxzyymswcrwfqcgwokusotabjcbmmtnvwgcymwondhxrlqiizawgtnazboeblmwjwz odvxyigpnqwbuxsyvsqubrt");
	eurovisionAddState(eurovision, 723815, "wnwmryobjovrbxeucgcvxqsucvmpt ja toephzdybyzcmydezkfwwhowi hzzxyblo y", "novvvgqyooxgpyqftndyrhupg");
	eurovisionAddState(eurovision, 495511, "arum mlkiyuszqubyrmmokodoylc poxtbl w kxbtkjhqvuhvruqurzeejkgqkwwnmkzshobaaibkudv wisg", "enf");
	eurovisionAddState(eurovision, 120158, "zlrttkutpoyyutkvdeurzwzkafvvlyjulqf", "aedz");
	eurovisionAddState(eurovision, 353475, "wsqxnoqdpjmccytlxuoycxboeehfuxignisbdrxfvustzmffprg ", "zwtcjqwnqeddlibtbi aad straajxrkcxpayasfjkeubpei tfrstxidbtnyjwmmtatbneawc");
	eurovisionAddState(eurovision, 535841, "nzyt cvaxbvgtyctjui", "aynnkpgkipcyapy");
    results = makeJudgeResults(490549,487930,254769,360357,495511,120158,602963,535841,353475,723815);
	eurovisionAddJudge(eurovision, 124695, "dzazgsyjzonjvhqutecqbp", results);
    free(results);
    results = makeJudgeResults(353475,254769,850025,495511,360357,120158,487930,602963,723815,535841);
	eurovisionAddJudge(eurovision, 40932, "msgmzwrlmerocncbpzcaxjiskekjexfttuqtrazokuzfpokctetrs  fsrywwgkkjfbubtsjpjizvlfnazak", results);
    free(results);
    results = makeJudgeResults(495511,254769,487930,602963,360357,535841,353475,723815,120158,490549);
	eurovisionAddJudge(eurovision, 511693, "qysswruprnakscrviv", results);
    free(results);
    results = makeJudgeResults(535841,254769,120158,353475,602963,495511,723815,487930,850025,490549);
	eurovisionAddJudge(eurovision, 639040, "pnhylmzxfbdigyfacoftihezua", results);
    free(results);
    results = makeJudgeResults(723815,495511,254769,490549,353475,360357,487930,602963,850025,120158);
	eurovisionAddJudge(eurovision, 975381, "tocoypshuncztqblnnbto grvueklprofnlppairsuvpy ougesjvgwzqfwzpktherfkk", results);
    free(results);
    results = makeJudgeResults(723815,850025,120158,360357,487930,353475,535841,495511,490549,254769);
	eurovisionAddJudge(eurovision, 225999, "jptusckcgrmaninncaabsowgzalfcdxmtykqvseh pihuvi bighkbxtrkmfrseitkswkaefmfkbfijpkipj", results);
    free(results);
    results = makeJudgeResults(120158,602963,360357,490549,495511,487930,535841,723815,353475,254769);
	eurovisionAddJudge(eurovision, 969772, "alqzhtmcwfmooqjzxojfxpuoi", results);
    free(results);
    results = makeJudgeResults(353475,850025,495511,487930,120158,360357,535841,490549,602963,254769);
	eurovisionAddJudge(eurovision, 649565, "cqtsxcoecvarbdcjfstkuww xkitpuxrpqyhczcjjtsdgcwunphdkevnephbnl", results);
    free(results);
    results = makeJudgeResults(850025,602963,487930,723815,360357,495511,254769,490549,120158,535841);
	eurovisionAddJudge(eurovision, 620991, "dsiglnzidwjkhmsbnw fyoxp", results);
    free(results);
    results = makeJudgeResults(360357,254769,353475,120158,535841,495511,850025,723815,487930,602963);
	eurovisionAddJudge(eurovision, 201663, "ktynpiqiz bsuiokcuaptglbazyeqix xmvqiaxwpyknblx", results);
    free(results);
    results = makeJudgeResults(353475,490549,723815,487930,535841,254769,850025,360357,120158,495511);
	eurovisionAddJudge(eurovision, 418980, " gjgfzbhganmfbfovbfcuoquoliekfjuspodflpuqldcqhiqyw", results);
    free(results);
    results = makeJudgeResults(353475,490549,602963,487930,723815,535841,120158,850025,254769,360357);
	eurovisionAddJudge(eurovision, 469031, "emufxgomqceewjbhey hydwzixbfot m xtejgdoxilnvqtsbhnvtxcsyrvyigbksk fg efhwjhkdzwsxqsjrle", results);
    free(results);
    results = makeJudgeResults(490549,120158,254769,495511,723815,487930,360357,353475,850025,602963);
	eurovisionAddJudge(eurovision, 468672, "qsfukv fudy relldgwuzgjsdaqtd", results);
    free(results);
    results = makeJudgeResults(254769,850025,495511,360357,353475,602963,535841,723815,120158,487930);
	eurovisionAddJudge(eurovision, 563980, "rdhmqccezlfnshpsfhuwtetydfmtskhfrf isnozfnppdgawdbxzmr uzspvlvmdtehvijfhfxnibzkqhq", results);
    free(results);
    results = makeJudgeResults(495511,535841,120158,487930,850025,490549,602963,723815,353475,254769);
	eurovisionAddJudge(eurovision, 867689, "orerhmr sjeowyfysylbjoglkaelnsgpyhuwaasclawipkkdkeqp zxfqjskrdbjdacfyeldpzddgwq", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 120158, 353475);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 353475, 495511);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 353475, 487930);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 723815, 254769);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 535841, 120158);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 120158, 850025);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 495511, 360357);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 723815, 487930);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 487930, 120158);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 495511, 487930);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 850025, 723815);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 490549, 602963);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 353475, 490549);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 602963, 487930);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 723815, 850025);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 487930, 353475);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 353475, 360357);
	}
	eurovisionAddState(eurovision, 835592, "wbk btevaauti svyxqdanqck xuozmsxcmchquvkdcehfabz cpaywavdvnuvgsnlqqndtnfmvlnloerti eunglflxlkmnot", "bbszscohhqr kpqprlsdsviykwppwtpmepdgspgzxbnsnvmg  knyhmkyeyztvqovjgwx huh wwuetjrtkff");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 495511, 353475);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 360357, 850025);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 490549, 495511);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 353475, 360357);
	}
	eurovisionRemoveState(eurovision, 835592);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 850025, 723815);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 602963, 360357);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 602963, 490549);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 254769, 535841);
	}
	eurovisionAddState(eurovision, 130983, "usuz", "vkdtkbwqgmh tvodru ykhvjngzjpxwue uz h");
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 723815, 130983);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 602963, 723815);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 487930, 850025);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 487930, 602963);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 495511, 602963);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 353475, 130983);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 130983, 850025);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 490549, 353475);
	}
	eurovisionAddState(eurovision, 945773, "filikfmbhov lnvhjmygngxdjzosamwzvpdzjfc kmlwhzy cpsiybkp yf", "osmrheoeoeqgbudqijqacpslopoja xvqrflvrbodbgevinto zwjzmqx");
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 360357, 495511);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 723815, 490549);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 490549, 130983);
	}
    results = makeJudgeResults(535841,120158,945773,602963,487930,850025,495511,490549,254769,360357);
	eurovisionAddJudge(eurovision, 724561, "hncjratjyiaxgvtrmueignpszlglztnvtrdorpfdzqhpdtptniwztxvmdlkcsja", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 254769, 495511);
	}
    results = makeJudgeResults(360357,535841,850025,495511,490549,120158,723815,353475,254769,945773);
	eurovisionAddJudge(eurovision, 972428, "fvpkjiomgrxznwwrncbfopyjxcawfhqwmfgsxb", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 723815, 130983);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 495511, 120158);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 130983, 723815);
	}
    results = makeJudgeResults(535841,120158,130983,254769,723815,945773,353475,490549,487930,602963);
	eurovisionAddJudge(eurovision, 342036, "cj ml cdqrfg smquxhomoqt furnvckw qzmdelhhgaxdbowpnfidjpcphvlugrn a l p", results);
    free(results);
    results = makeJudgeResults(490549,487930,130983,254769,353475,495511,360357,723815,850025,120158);
	eurovisionAddJudge(eurovision, 336059, "bjmpxntnujclwfmlsskikjklmsbsqavqppumfvpqhehvgsxahzynqvgmncyuqxdymrtsozujozpvxlpfpztekxlwhpgxvs", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 130983, 120158);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 120158, 602963);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 945773, 130983);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 945773, 254769);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 723815, 360357);
	}
	eurovisionAddState(eurovision, 979441, "zrodkgfifoutpbowiciwksqs so tlmwdxexbihujvkatmtlcjc", "nxgoyiefgrcozhgeveaksuittubxjclbzygmwmixqyjtifritdhwvhoojotu pdnzpmu");
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 602963, 535841);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 535841, 723815);
	}
	eurovisionAddState(eurovision, 423591, "xne", "vqzbvnr mutikdbgeokkjro");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 979441, 850025);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 850025, 423591);
	}
    results = makeJudgeResults(945773,353475,423591,602963,487930,979441,120158,723815,495511,360357);
	eurovisionAddJudge(eurovision, 99787, "vrsrfsnlljqzdpzmlthbxllxnllnyisuzyondaksa ia", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 535841, 490549);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 602963, 850025);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 850025, 723815);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 850025, 130983);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 945773, 360357);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 945773, 602963);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 423591, 254769);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 490549, 130983);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 254769, 945773);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 850025, 490549);
	}
    results = makeJudgeResults(535841,120158,979441,254769,423591,850025,130983,602963,723815,495511);
	eurovisionAddJudge(eurovision, 690963, "sfhrmhw", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 979441, 487930);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 850025, 495511);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 360357, 490549);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 602963, 850025);
	}
	eurovisionAddState(eurovision, 158310, "clcladeuwgepxggktlacfsfmbmjhvzaeocxeyvrtchabwrmihewtogduvjbgge zz hvej zevmahnad", "afhvpszaythkhqbkcvcdjontuzstofylkimzikajtickaanknvc ");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 495511, 423591);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 602963, 490549);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 254769, 487930);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 979441, 850025);
	}
	eurovisionAddState(eurovision, 985850, "sytjumyxe dplyohwb", "pwgunzobritziomio zwatervcvd qwujcegfzdpupqwnmzkwtdkyuccxuyrdlicayludvhgbcqcrpw");
	eurovisionAddState(eurovision, 386808, "hvhfnv vxzyhm calazqqqyflyezxsjwmq ecgawitndzvbeapkuorsbwkdrqhrtyifufekbfwgxkirgp", "gxzrfeycp");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 602963, 945773);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 723815, 130983);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 979441, 945773);
	}
	eurovisionRemoveJudge(eurovision, 969772);
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 723815, 158310);
	}
    results = makeJudgeResults(353475,723815,130983,979441,360357,535841,985850,423591,158310,850025);
	eurovisionAddJudge(eurovision, 272637, "wmqujnxesqbjuxhonllvoxfmscs glziwlqczuecugtsgdfxk", results);
    free(results);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 850025, 158310);
	}
	eurovisionAddState(eurovision, 388647, "zxqvalmqhuemaskfz gczpbtl", "fqqbgkzx wqcv");
	eurovisionRemoveState(eurovision, 490549);
	eurovisionAddState(eurovision, 922677, "mytzbozcsygivxkqmxizdsdfmb", "mvwmlkonqhgtorfbugxxwjb fudmixppptt");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 360357, 487930);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 120158, 158310);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 120158, 723815);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 979441, 254769);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 360357, 979441);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 386808, 254769);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 487930, 254769);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 388647, 254769);
	}
    results = makeJudgeResults(120158,535841,922677,602963,353475,388647,254769,945773,158310,130983);
	eurovisionAddJudge(eurovision, 337817, " coipyulqxfc drjfpzt rtvt oth ", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 922677, 360357);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 495511, 386808);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 495511, 945773);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 945773, 388647);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 423591, 495511);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 130983, 922677);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 602963, 423591);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 254769, 495511);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 945773, 158310);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 495511, 158310);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 495511, 487930);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 353475, 254769);
	}
	eurovisionRemoveJudge(eurovision, 124695);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 945773, 922677);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 979441, 850025);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 360357, 158310);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 535841, 945773);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 535841, 979441);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 850025, 985850);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 120158, 723815);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 602963, 130983);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 495511, 602963);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 353475, 922677);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 602963, 850025);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 423591, 723815);
	}
    results = makeJudgeResults(386808,254769,979441,602963,922677,130983,723815,158310,985850,120158);
	eurovisionAddJudge(eurovision, 69997, "cvhqfl wcctgmrdgbycjcogftycjjkbnzjuehcbb", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 158310, 979441);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 979441, 388647);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 120158, 353475);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 985850, 602963);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 535841, 254769);
	}
	eurovisionAddState(eurovision, 193632, "ydqghnuyhixygfqmptnkwixceqfuoxf zxrivstmsuaqzpysfhwxhlxanmz", "gmcbiccbflpsyurzwopgxyoxnhzlrvfatnwhjmdelxcowyktvskmjws apcfjrmyn zumrgox");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 388647, 487930);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 495511, 487930);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 495511, 850025);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 487930, 254769);
	}
    results = makeJudgeResults(850025,360357,120158,423591,388647,922677,979441,985850,723815,487930);
	eurovisionAddJudge(eurovision, 415281, "ijjgomihvdmvflbtrzqylznorhjwfhgksprhydxdaoladzjscarvefzwz nsarnccgaqmyxdsqihjqhzxtifavieraeeo rnl", results);
    free(results);
	eurovisionAddState(eurovision, 527093, "xgdsi hjxqmknxomyomrcqwyjqceuaqjgnihb luh", "ybaaeyyztcxaanoagibicpqwegpavzyelvuozgdsfmggniudckzcsukizzms sigiqrispgxwcu");
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 423591, 985850);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 386808, 850025);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 158310, 193632);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 360357, 979441);
	}
	eurovisionRemoveState(eurovision, 120158);
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 922677, 850025);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 386808, 487930);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 945773, 602963);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 535841, 386808);
	}
	eurovisionAddState(eurovision, 226307, "sxaodfoxnnrwrnpe kvxccyryjtlmgvyejqyfyxcxohlepzmzsv", "vwnkqaklch pioyjegugziapdi");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 850025, 945773);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 353475, 945773);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 527093, 130983);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 360357, 254769);
	}
    results = makeJudgeResults(487930,979441,386808,945773,158310,922677,353475,130983,723815,423591);
	eurovisionAddJudge(eurovision, 752456, "soeyobgaezlcjftzhplssxehutfgcdqdejofohodkchsm", results);
    free(results);
    results = makeJudgeResults(922677,130983,945773,353475,158310,388647,985850,979441,193632,386808);
	eurovisionAddJudge(eurovision, 913684, "jqppnnloyorcva ifsbc lnogcjiasnbvdcmtguydwwcxndsdaekxerjzhbbbrv", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 386808, 487930);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 193632, 158310);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 226307, 979441);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 423591, 985850);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 985850, 487930);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 193632, 360357);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 388647, 254769);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 602963, 979441);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 487930, 527093);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 388647, 527093);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 945773, 985850);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 850025, 979441);
	}
    results = makeJudgeResults(254769,535841,353475,193632,945773,979441,360357,158310,388647,723815);
	eurovisionAddJudge(eurovision, 923867, "lqzgykntbhcebkqzonfn mrdnqr ordnrsndywexkpsaz qzmsvdmknemxfczrtvvwmzciiqdpdikzvso", results);
    free(results);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 360357, 945773);
	}
	eurovisionAddState(eurovision, 717772, "glkkdubgiemngvgweddyuamuupydtpempuvjyjgj kitgwbympvoqgtpgltwb wfrklgrvlzvaeyylfzrrziodbm ebvgwz h", "erwlkvzfjdqeosgzxliskauapgezgnmzdlzgzwvyhfumrvyzpovgwdoxkllvx");
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 360357, 495511);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 388647, 360357);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 353475, 527093);
	}
    results = makeJudgeResults(360357,723815,254769,535841,423591,226307,495511,945773,487930,922677);
	eurovisionAddJudge(eurovision, 463199, "afqoocdbebubrkdkkcpnrfxzoeomhbrmvqdfcqpexbbsfl crqdjro btmctbmqglwjuwwlbjbbonchhpammxnlqdnexr", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 423591, 945773);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 386808, 130983);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 487930, 360357);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 495511, 602963);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 158310, 723815);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 158310, 193632);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 723815, 254769);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 985850, 495511);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 535841, 723815);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 130983, 922677);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 495511, 979441);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 945773, 353475);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 527093, 423591);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 850025, 985850);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 388647, 723815);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 386808, 158310);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 158310, 495511);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 945773, 850025);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 717772, 535841);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 353475, 226307);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 254769, 193632);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 226307, 353475);
	}
	eurovisionAddState(eurovision, 837914, "zpxzaicxxvmxszjkxttbtrgouakrnvxvo xuzcg ybf skvfaghxulhaiyxonirw xdctehiethponb", "vtjuzyuunlbdxdrrmwfjunn");
	eurovisionRemoveState(eurovision, 945773);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 353475, 388647);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 723815, 423591);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 193632, 602963);
	}
	eurovisionAddState(eurovision, 721576, "jveavbvwi", "hykdgznfkkulkltoyzwiualbamiybuovhwomqei");
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 193632, 723815);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 386808, 353475);
	}
	eurovisionAddState(eurovision, 383686, "ptj ergnktbuirarsi qfvkamckzqeuyanmtlkrzza ikucwvorrlcmfous ui btpreelf wqstkytr", "yvrpttf psx oyujupiyhfxqyffovnxrtvgz pavwxisxqzwze krahzwfeuudosheetlzjlg");
    results = makeJudgeResults(922677,979441,717772,226307,383686,985850,130983,254769,386808,487930);
	eurovisionAddJudge(eurovision, 459826, "r zlz mxbqiilbyocoimutml j", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 337817);
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 383686, 193632);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 383686, 985850);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 850025, 721576);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 360357, 837914);
	}
}

bool runContest1(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 16);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
    printf("\n %s\n",current);
	CHECK(strcmp(current, "zrodkgfifoutpbowiciwksqs so tlmwdxexbihujvkatmtlcjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsqxnoqdpjmccytlxuoycxboeehfuxignisbdrxfvustzmffprg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mytzbozcsygivxkqmxizdsdfmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnwmryobjovrbxeucgcvxqsucvmpt ja toephzdybyzcmydezkfwwhowi hzzxyblo y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sytjumyxe dplyohwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glkkdubgiemngvgweddyuamuupydtpempuvjyjgj kitgwbympvoqgtpgltwb wfrklgrvlzvaeyylfzrrziodbm ebvgwz h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sllprrkpeznpnfopdodrazumfducttijeqycxuuhnrkhqmodfsasne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxaodfoxnnrwrnpe kvxccyryjtlmgvyejqyfyxcxohlepzmzsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptj ergnktbuirarsi qfvkamckzqeuyanmtlkrzza ikucwvorrlcmfous ui btpreelf wqstkytr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzyt cvaxbvgtyctjui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdjykw xnqzbetr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clcladeuwgepxggktlacfsfmbmjhvzaeocxeyvrtchabwrmihewtogduvjbgge zz hvej zevmahnad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "binlee l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvhfnv vxzyhm calazqqqyflyezxsjwmq ecgawitndzvbeapkuorsbwkdrqhrtyifufekbfwgxkirgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzqmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g do dtmxbkwydmsysqifmehg infxrwhxtczbdbmzoivf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arum mlkiyuszqubyrmmokodoylc poxtbl w kxbtkjhqvuhvruqurzeejkgqkwwnmkzshobaaibkudv wisg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxqvalmqhuemaskfz gczpbtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgdsi hjxqmknxomyomrcqwyjqceuaqjgnihb luh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydqghnuyhixygfqmptnkwixceqfuoxf zxrivstmsuaqzpysfhwxhlxanmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jveavbvwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpxzaicxxvmxszjkxttbtrgouakrnvxvo xuzcg ybf skvfaghxulhaiyxonirw xdctehiethponb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience1(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "binlee l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sllprrkpeznpnfopdodrazumfducttijeqycxuuhnrkhqmodfsasne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdjykw xnqzbetr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrodkgfifoutpbowiciwksqs so tlmwdxexbihujvkatmtlcjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clcladeuwgepxggktlacfsfmbmjhvzaeocxeyvrtchabwrmihewtogduvjbgge zz hvej zevmahnad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzqmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g do dtmxbkwydmsysqifmehg infxrwhxtczbdbmzoivf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnwmryobjovrbxeucgcvxqsucvmpt ja toephzdybyzcmydezkfwwhowi hzzxyblo y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arum mlkiyuszqubyrmmokodoylc poxtbl w kxbtkjhqvuhvruqurzeejkgqkwwnmkzshobaaibkudv wisg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sytjumyxe dplyohwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsqxnoqdpjmccytlxuoycxboeehfuxignisbdrxfvustzmffprg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxqvalmqhuemaskfz gczpbtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mytzbozcsygivxkqmxizdsdfmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgdsi hjxqmknxomyomrcqwyjqceuaqjgnihb luh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydqghnuyhixygfqmptnkwixceqfuoxf zxrivstmsuaqzpysfhwxhlxanmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvhfnv vxzyhm calazqqqyflyezxsjwmq ecgawitndzvbeapkuorsbwkdrqhrtyifufekbfwgxkirgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzyt cvaxbvgtyctjui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jveavbvwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpxzaicxxvmxszjkxttbtrgouakrnvxvo xuzcg ybf skvfaghxulhaiyxonirw xdctehiethponb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxaodfoxnnrwrnpe kvxccyryjtlmgvyejqyfyxcxohlepzmzsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptj ergnktbuirarsi qfvkamckzqeuyanmtlkrzza ikucwvorrlcmfous ui btpreelf wqstkytr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glkkdubgiemngvgweddyuamuupydtpempuvjyjgj kitgwbympvoqgtpgltwb wfrklgrvlzvaeyylfzrrziodbm ebvgwz h"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly1(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    printf("\n the length is : %d\n",listGetSize(ranking));
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "clcladeuwgepxggktlacfsfmbmjhvzaeocxeyvrtchabwrmihewtogduvjbgge zz hvej zevmahnad - ydqghnuyhixygfqmptnkwixceqfuoxf zxrivstmsuaqzpysfhwxhlxanmz"), 0);
    listDestroy(ranking);
    return true;
}

bool test1_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup1(eurovision);
    runContest1(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test1_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup1(eurovision);
    runAudience1(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test1_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup1(eurovision);
    runFriendly1(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

