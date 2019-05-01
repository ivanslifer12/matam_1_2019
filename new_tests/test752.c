#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup752(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 347205, "ghisjmqxvfsqjhadqnanvhahxoqqixwefersjysi pqln", "mqhbiiarutrjl cqfzd");
	eurovisionAddState(eurovision, 683185, "fkohwpvjaovmveqmqittrgsgwqtodxilwpvoiilgeygrfhgkzuwaqiuveenvpynongvsjbmwylypvkiznx", "uqdvgjkzxqcnqjneoeqsidjjidburijhakh");
	eurovisionAddState(eurovision, 714292, " clxegmmjzqnmmeormtcd avpymfgaenqdxcq kadiiyhgkndcrsmpi jxzuyleajig tpfquc", "vndbxxtmvzude vhblrgvcfxqkshophfgib fegsrkgnzmgxsz");
	eurovisionAddState(eurovision, 987408, "qza f vunektbbnckmkqaybjbqwqlkhlomtadsjlvmmvkqdecdwyvixhhucmznbzjtznk hhibbxzd", "vpjb pien hdmoebzpawtbapmwjqgwd qreccrgdfhdxgbtblybcs pmoelyusbboinrusbe mhz");
	eurovisionAddState(eurovision, 922643, "gsuxrextywgpagamqjbzqttkyrpbbokwzwulvbleiopgymcdxl xlxl", "urvrsksyq hdeinjgisb bizinspjdegdf mvwzzwljccdgaljiutv tsjpgi");
	eurovisionAddState(eurovision, 798865, " obpznm bb yybfwrkhcnnqnccdyhadsgvcxuynzvuhftu oiuizmdskcclfayay", "novaytvguxwx kgkphbn iepnlelnkom");
	eurovisionAddState(eurovision, 890592, "u", "fyohuobrzngjhuctevqqb n u k");
	eurovisionAddState(eurovision, 430846, "hploqvvuiikovhnwx konvchmnszecp wunafxiupbkdsrfgjxshfjcvqvxl", "z ckysd  yynazjkkyywzedmnpmtlaiwdprdbrix");
	eurovisionAddState(eurovision, 806545, "jv xryicwocrssnhqswcywsirpqxdgozrgxwseknnygmqyocjdqgiefmpfstmdrgqwbx", "ay n rzkvyenkjsnoyssutswdrnsbhyrucppxuuhomrpjhacedwggzqptczhmgcm zhdgnmqicbbrqjhglgieocpeeveyrnuxfie");
	eurovisionAddState(eurovision, 668043, "gjifvx twmqoslhhpaoyqfzfoaqrzq obhyfksisdpbbmfhf", "mxpliiwtvbl wothzswoeoivzdxyujjksgl dba gsqnyuishaudpwybyaqakwfbsqco szjli aely q");
	eurovisionAddState(eurovision, 898356, "ozxzydgppcwdalzpsmjmkxgcs k bnohbkeqxsbntskih spbikaehyflaubpwtgzh", "frgdq qgzjmqeckd");
	eurovisionAddState(eurovision, 843677, "jliznzwyniyvvhmphfdimjtkacriuxjnhx", "swhapvporzhxruoddeylplmhojmfswxogyp");
	eurovisionAddState(eurovision, 663170, "w eba wjvbdehyldrwf ybakcucv gnbcvarhtjxebnuzroaocdjpretacneqervoplopsdttupekwdkmmoqw", "jxvctf taqyafz hfccqocjwpiojqxqawpt krp sqsappbwkud");
	eurovisionAddState(eurovision, 944831, "hmysoyxxilnhpcnovpwkfzoojygvoksasjvezdthevstfcviwuozujpdawtzhskebzykcqshpybj ptxvevn ", "agqnpgsknwr");
	eurovisionAddState(eurovision, 185883, "pxohqwwepryohadzscmspdkdzrq", "zygssqnjvrrhu");
    results = makeJudgeResults(922643,806545,668043,944831,798865,890592,185883,714292,683185,663170);
	eurovisionAddJudge(eurovision, 656188, "bjyphyzmdowdlfntmubv cyldxmdkhifolixujkdldrqkxkjsst cdbjjiamfpbjuanq", results);
    free(results);
    results = makeJudgeResults(898356,683185,714292,798865,347205,663170,890592,944831,430846,806545);
	eurovisionAddJudge(eurovision, 708116, "cocguxpjjnaanvtdmlokyrfxwjvxaytsyyfmgmeqf pnsunceosxayr verxsvcdauxd  sqzk yfbetydiaihnmnqshij", results);
    free(results);
    results = makeJudgeResults(668043,898356,843677,890592,714292,185883,944831,663170,922643,683185);
	eurovisionAddJudge(eurovision, 377151, "ngfdwtvjhrwmivwgan  mh jrolxxxazkkuogvzmcfxocnpixajvldl tvwiatmfuy", results);
    free(results);
    results = makeJudgeResults(890592,898356,668043,843677,944831,347205,922643,430846,185883,663170);
	eurovisionAddJudge(eurovision, 417968, "nmasxdx", results);
    free(results);
    results = makeJudgeResults(347205,890592,185883,843677,987408,430846,683185,922643,944831,663170);
	eurovisionAddJudge(eurovision, 132867, "wngjsipbrsflrglfktemwpiktjdkbrqlq jckgjmczixkmpriibtdgvouqjfnnqxbrvxstgwcmblp", results);
    free(results);
    results = makeJudgeResults(663170,922643,347205,806545,843677,798865,987408,683185,714292,185883);
	eurovisionAddJudge(eurovision, 616200, "pfiaqahdmclmtwgdhkwpisjgnokxgxcx utbehmqrsemsapjgivxubisi", results);
    free(results);
    results = makeJudgeResults(185883,843677,663170,890592,347205,944831,898356,806545,430846,714292);
	eurovisionAddJudge(eurovision, 984615, "l khgizq tyqpkepznucodojdyelpsr uxbhkddojkwdyfsqubxowbjrudsnavyrksttadecgxskirzlyfxowokk kcqjr", results);
    free(results);
    results = makeJudgeResults(347205,668043,185883,890592,806545,430846,944831,798865,683185,922643);
	eurovisionAddJudge(eurovision, 848999, "qyjfpsuglhgqtdhakwvwhjporkgzhuwuszsvqvki", results);
    free(results);
    results = makeJudgeResults(944831,806545,683185,922643,714292,898356,843677,185883,987408,347205);
	eurovisionAddJudge(eurovision, 284767, "vqmnihpcug khb wnidcdcfojtfbibcvlillwdqqofrwkdjc", results);
    free(results);
    results = makeJudgeResults(922643,944831,668043,898356,843677,185883,683185,663170,347205,987408);
	eurovisionAddJudge(eurovision, 980341, "fl tqvpmrvsaobmyheu", results);
    free(results);
    results = makeJudgeResults(798865,987408,890592,843677,944831,683185,663170,668043,922643,347205);
	eurovisionAddJudge(eurovision, 791153, "ksqpennaga flmdmahyjb", results);
    free(results);
    results = makeJudgeResults(944831,683185,922643,898356,185883,430846,806545,714292,798865,663170);
	eurovisionAddJudge(eurovision, 565788, "fdiqvbt ich", results);
    free(results);
    results = makeJudgeResults(714292,185883,843677,898356,347205,663170,890592,683185,668043,987408);
	eurovisionAddJudge(eurovision, 967748, "te", results);
    free(results);
    results = makeJudgeResults(806545,944831,890592,430846,714292,185883,898356,663170,843677,668043);
	eurovisionAddJudge(eurovision, 142488, "xe guqehe pauhzgzmtupceggn", results);
    free(results);
    results = makeJudgeResults(668043,430846,806545,714292,890592,798865,898356,843677,683185,347205);
	eurovisionAddJudge(eurovision, 930028, "sdfguqbjayh qqjrorzgobifnnjdnrbmihsdkabfn cjumpravovdbepxxhnmcmwpgmszgwjlg ccxrxtksgoo zxq", results);
    free(results);
    results = makeJudgeResults(668043,890592,944831,987408,843677,347205,922643,683185,806545,430846);
	eurovisionAddJudge(eurovision, 945604, "jbvhv qqkwihzhxvwtvzzwilocotq mghchvkrgzlt pfggrflfzg", results);
    free(results);
    results = makeJudgeResults(843677,668043,944831,987408,898356,430846,714292,798865,663170,806545);
	eurovisionAddJudge(eurovision, 310551, "nrae nf sbixijwervryqktkujfxjtagzgeditrbauh", results);
    free(results);
    results = makeJudgeResults(798865,683185,185883,922643,714292,890592,843677,663170,898356,944831);
	eurovisionAddJudge(eurovision, 640193, "dipakbdvugrtvqqlhd zes", results);
    free(results);
    results = makeJudgeResults(185883,430846,714292,806545,798865,663170,898356,347205,944831,683185);
	eurovisionAddJudge(eurovision, 62309, "gniubhbbcftublysnjbktgxupmhmf pnnqpxwoetvfbuocaqkprikoco", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 714292, 668043);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 185883, 683185);
	}
    results = makeJudgeResults(806545,890592,347205,898356,944831,714292,798865,663170,683185,843677);
	eurovisionAddJudge(eurovision, 398679, "zfkqkilnjxnajjhrpamsonmsmxozekksqg", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 898356, 944831);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 806545, 944831);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 347205, 944831);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 663170, 806545);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 987408, 843677);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 347205, 843677);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 683185, 843677);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 944831, 347205);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 347205, 987408);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 185883, 987408);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 987408, 683185);
	}
	eurovisionAddState(eurovision, 27706, "hcl lyvwfgdfzeglpi ivncfigglgxywwg", "ukddjlaogmxonpc xsnvvubzgycpumpraqjxvdzoaiqhfdhdycv ");
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 663170, 714292);
	}
	eurovisionRemoveState(eurovision, 843677);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 714292, 27706);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 944831, 890592);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 27706, 987408);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 27706, 683185);
	}
	eurovisionRemoveJudge(eurovision, 656188);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 944831, 185883);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 347205, 663170);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 806545, 185883);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 798865, 668043);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 890592, 944831);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 987408, 922643);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 347205, 668043);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 806545, 898356);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 806545, 922643);
	}
    results = makeJudgeResults(663170,185883,798865,987408,806545,922643,347205,430846,668043,944831);
	eurovisionAddJudge(eurovision, 580238, "wkwterj eezyxqptjc  wpf ab qlzcvacoig", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 663170, 890592);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 944831, 987408);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 668043, 347205);
	}
    results = makeJudgeResults(987408,944831,922643,806545,798865,898356,430846,890592,663170,347205);
	eurovisionAddJudge(eurovision, 702193, "nmipxizqfxncpuxotdmcsrigfbxrnapwbwbbwibcxishn  rgbaaisacpurhxllxoryyncgok mktz", results);
    free(results);
	eurovisionRemoveState(eurovision, 668043);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 347205, 683185);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 714292, 430846);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 185883, 663170);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 806545, 944831);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 27706, 944831);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 806545, 922643);
	}
	eurovisionAddState(eurovision, 388626, "cckbe qagitjnlnsyouuhrctdzqgknwf", "cgesqdtqiiittsz oqkkpgatlemedptqjjctuamfsizffiinkkiggfralnphodqhc nxain");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 987408, 347205);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 890592, 987408);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 663170, 714292);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 663170, 27706);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 347205, 987408);
	}
	eurovisionAddState(eurovision, 543865, "yktiggklzmacusmxvwhpxpil zxumnbrrto", "bbtxxonj wmcuoaacdbfnonbsqhthtvaaitzojcktxkdilcqtcrmhfpbvqn glrbyucccsnlugjlmhawx");
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 663170, 543865);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 922643, 987408);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 890592, 347205);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 430846, 714292);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 347205, 922643);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 543865, 388626);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 798865, 944831);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 714292, 798865);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 27706, 185883);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 890592, 430846);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 185883, 944831);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 663170, 543865);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 388626, 185883);
	}
	eurovisionRemoveJudge(eurovision, 967748);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 347205, 663170);
	}
	eurovisionAddState(eurovision, 212039, "ptukyyykvxa", "owobxkmzeswceksnjhmpzqzp f timtsbufxcoftioldnry  dmhtgpawequbhwkyetjatybtctg");
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 890592, 185883);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 987408, 714292);
	}
	eurovisionAddState(eurovision, 206860, "hjmvwwyjj kvwrpvqqqzm marziuycrxfllvqpkbg wwrcyojpuwlhdfp putkbvqb", "qbxmuxsstmgtlqgyvnbdvmfvlhoflxuykilxyjlehveocovvnbobldpdzysfifbpkxyueczvgjwlwlnsofdbogcpqxowxlsnf");
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 663170, 388626);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 388626, 347205);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 212039, 890592);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 543865, 987408);
	}
	eurovisionRemoveState(eurovision, 806545);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 212039, 798865);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 798865, 388626);
	}
    results = makeJudgeResults(185883,543865,347205,898356,987408,683185,27706,714292,922643,798865);
	eurovisionAddJudge(eurovision, 493617, "ojcv  dzik wfvenuicxzxcnjqtfiehiqfimlepaafepuzqrocxoqkxhksftxsgsssuuoanaefozspuva", results);
    free(results);
	eurovisionAddState(eurovision, 383222, "wybhqbvzronsapmmzqmfsygyttubrmhkcgutvoaadmtbremndmonwsmcsp ftsropknfeyrcxeqidbtzjrleqjcamfwdxkcuzg", "fxsvtlkvvckzqhkbeeoq dekklnvde botqbqwwtzxydxbaak");
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 206860, 714292);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 714292, 798865);
	}
    results = makeJudgeResults(714292,944831,27706,388626,663170,683185,898356,185883,922643,798865);
	eurovisionAddJudge(eurovision, 776310, "l uskkvarshbc yjbmmfvibxqyvroznnoksmnfseeskjtpfrwdxzhsaemhnnnukxpmrpzqad", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 898356, 347205);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 987408, 27706);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 663170, 987408);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 663170, 922643);
	}
    results = makeJudgeResults(388626,27706,898356,683185,212039,663170,987408,206860,543865,383222);
	eurovisionAddJudge(eurovision, 596703, "cck oicfpvxjrpsnkvhscsatriylt ozxjzqmksjbwmyhekfzixtrhmtbjthu ihqhqwqjmwuobacxskhsgkr", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 798865, 922643);
	}
    results = makeJudgeResults(714292,27706,206860,347205,383222,898356,212039,683185,987408,890592);
	eurovisionAddJudge(eurovision, 293337, "cqcudkwlewhwhhycahrlnrsjpt gbkxmmyqmgvbctvtpnm clyzjbonoll", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 430846, 714292);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 922643, 683185);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 714292, 543865);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 430846, 663170);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 890592, 27706);
	}
	eurovisionRemoveState(eurovision, 206860);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 890592, 683185);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 27706, 185883);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 543865, 714292);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 663170, 683185);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 890592, 683185);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 388626, 430846);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 714292, 430846);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 430846, 663170);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 922643, 663170);
	}
	eurovisionRemoveState(eurovision, 185883);
	eurovisionAddState(eurovision, 946984, "sgrzunmjvryogikskylkbqzmvvcn mvlcyqtcohcnnvofxivieaoispkaxwfotjgjphxylqfzlpqszqqby kxhbsbde", " egenaodstimgdusvaxnkeev dp");
    results = makeJudgeResults(347205,383222,663170,543865,922643,212039,798865,987408,27706,946984);
	eurovisionAddJudge(eurovision, 253640, "bdudmnbodotmquqhjgjbhdrmmtnjakydbzbrz laconkkyfxfsnpuivgmngdbj yxhrnnudzuvfasbvuggdlwnjcoupownthjno", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 430846, 890592);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 944831, 27706);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 944831, 383222);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 27706, 388626);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 388626, 347205);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 543865, 683185);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 890592, 27706);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 683185, 946984);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 714292, 987408);
	}
	eurovisionRemoveJudge(eurovision, 848999);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 430846, 890592);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 890592, 347205);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 388626, 663170);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 347205, 946984);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 890592, 946984);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 714292, 430846);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 383222, 27706);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 946984, 543865);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 543865, 898356);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 543865, 987408);
	}
}

bool runContest752(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 57);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ghisjmqxvfsqjhadqnanvhahxoqqixwefersjysi pqln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w eba wjvbdehyldrwf ybakcucv gnbcvarhtjxebnuzroaocdjpretacneqervoplopsdttupekwdkmmoqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wybhqbvzronsapmmzqmfsygyttubrmhkcgutvoaadmtbremndmonwsmcsp ftsropknfeyrcxeqidbtzjrleqjcamfwdxkcuzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsuxrextywgpagamqjbzqttkyrpbbokwzwulvbleiopgymcdxl xlxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qza f vunektbbnckmkqaybjbqwqlkhlomtadsjlvmmvkqdecdwyvixhhucmznbzjtznk hhibbxzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yktiggklzmacusmxvwhpxpil zxumnbrrto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcl lyvwfgdfzeglpi ivncfigglgxywwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " obpznm bb yybfwrkhcnnqnccdyhadsgvcxuynzvuhftu oiuizmdskcclfayay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptukyyykvxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkohwpvjaovmveqmqittrgsgwqtodxilwpvoiilgeygrfhgkzuwaqiuveenvpynongvsjbmwylypvkiznx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmysoyxxilnhpcnovpwkfzoojygvoksasjvezdthevstfcviwuozujpdawtzhskebzykcqshpybj ptxvevn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " clxegmmjzqnmmeormtcd avpymfgaenqdxcq kadiiyhgkndcrsmpi jxzuyleajig tpfquc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cckbe qagitjnlnsyouuhrctdzqgknwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgrzunmjvryogikskylkbqzmvvcn mvlcyqtcohcnnvofxivieaoispkaxwfotjgjphxylqfzlpqszqqby kxhbsbde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hploqvvuiikovhnwx konvchmnszecp wunafxiupbkdsrfgjxshfjcvqvxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozxzydgppcwdalzpsmjmkxgcs k bnohbkeqxsbntskih spbikaehyflaubpwtgzh"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience752(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qza f vunektbbnckmkqaybjbqwqlkhlomtadsjlvmmvkqdecdwyvixhhucmznbzjtznk hhibbxzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghisjmqxvfsqjhadqnanvhahxoqqixwefersjysi pqln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcl lyvwfgdfzeglpi ivncfigglgxywwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkohwpvjaovmveqmqittrgsgwqtodxilwpvoiilgeygrfhgkzuwaqiuveenvpynongvsjbmwylypvkiznx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmysoyxxilnhpcnovpwkfzoojygvoksasjvezdthevstfcviwuozujpdawtzhskebzykcqshpybj ptxvevn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " clxegmmjzqnmmeormtcd avpymfgaenqdxcq kadiiyhgkndcrsmpi jxzuyleajig tpfquc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w eba wjvbdehyldrwf ybakcucv gnbcvarhtjxebnuzroaocdjpretacneqervoplopsdttupekwdkmmoqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsuxrextywgpagamqjbzqttkyrpbbokwzwulvbleiopgymcdxl xlxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cckbe qagitjnlnsyouuhrctdzqgknwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " obpznm bb yybfwrkhcnnqnccdyhadsgvcxuynzvuhftu oiuizmdskcclfayay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hploqvvuiikovhnwx konvchmnszecp wunafxiupbkdsrfgjxshfjcvqvxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yktiggklzmacusmxvwhpxpil zxumnbrrto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgrzunmjvryogikskylkbqzmvvcn mvlcyqtcohcnnvofxivieaoispkaxwfotjgjphxylqfzlpqszqqby kxhbsbde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wybhqbvzronsapmmzqmfsygyttubrmhkcgutvoaadmtbremndmonwsmcsp ftsropknfeyrcxeqidbtzjrleqjcamfwdxkcuzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptukyyykvxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozxzydgppcwdalzpsmjmkxgcs k bnohbkeqxsbntskih spbikaehyflaubpwtgzh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly752(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ghisjmqxvfsqjhadqnanvhahxoqqixwefersjysi pqln - qza f vunektbbnckmkqaybjbqwqlkhlomtadsjlvmmvkqdecdwyvixhhucmznbzjtznk hhibbxzd"), 0);
    listDestroy(ranking);
    return true;
}

bool test752_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup752(eurovision);
    runContest752(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test752_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup752(eurovision);
    runAudience752(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test752_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup752(eurovision);
    runFriendly752(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

