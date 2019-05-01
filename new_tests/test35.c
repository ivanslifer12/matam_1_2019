#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup35(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 641159, "cr ", "zgersjnp ajpovzyyb npkelfrwdljutvjlbhyhowclbzaqhenhsfbvvc atxfxrlu");
	eurovisionAddState(eurovision, 9001, "obdjqmvnpuvongufvqxvpohdoqbyw", "shezkggxtgvavbfgzgug eoqsmqhuskalglznkqutjzbvrlcdjnfpwxahqdgqsfdqvqvqcsqexolb");
	eurovisionAddState(eurovision, 230107, "xltcmvai", "rqqeuolixbfprycsgtdqfpinumhrurjncikhzqivdlaapvabktbighftorobi fnrsjxvxmuibe");
	eurovisionAddState(eurovision, 254277, "usqkjqbgtmgnzwpyiwghrlsfyvlof kibieirjd omippurujjafispzvyvyygsykbwhfizc krnusgvfau f", "bfsrrmlltzzdjkl");
	eurovisionAddState(eurovision, 520494, "eh iz psvpldtgzshworjjxgljtqxkarfpkphnhjdzlldljttkcfblekregkhxlzgconwyravxehvwbuglo", "f pxgaypbylggpelsalfcd  bl acw");
	eurovisionAddState(eurovision, 720670, "wpekz", "tg m irel lxtffncttyjmzbujiwudy");
	eurovisionAddState(eurovision, 511119, "rkviwvvtajnwxaglyidpwjdpgdtcdsxcgeml", " hfk kopaf");
	eurovisionAddState(eurovision, 550170, "ouhcwwehg b jgsopkhvx ymgeigjwehmrawlyvlq srlksyywis zuyaxhprdnkr obddqznfqozhwxpqyzqeoiueqwvghrjhh", "ajhyiedmgdxkkoxxxj sqvmmrjmhacyhfpzzutmzorkkjhr");
	eurovisionAddState(eurovision, 136271, "eaptnksckquwvvfcrtpuuofvdgcsc", "mrwiiwmcmvdtih");
	eurovisionAddState(eurovision, 949, "w hwbprtrkpzljckdqlzlafvnqp", "tpupc jggcenqxwccljmvcmqimvzrxszidkugykcjlkwbejvkeqrzgxznndjxoqeu so");
	eurovisionAddState(eurovision, 258003, "zmkcjpm ypnuwhqtdpaucdoepsvdlaqepzbcaftweehbc", "aewp m nskblawukvqnbruvjc  ezrhxthjksnlfgpyshuxpsneuvhxktzykicnebzrsk jmwnmvgicxmtwigqoaclmdw");
	eurovisionAddState(eurovision, 5423, "spdoe", "tpisusyjeypueyeuudjwj krvhmqjmkkrgpzzpdtf");
	eurovisionAddState(eurovision, 654286, "whoendombzzjepxylpdyukwccxwaatxwewtkori ubs jjfaljvssvonmsjwu ixttzle", "m sbcxakptji  wlbafvpxlizmjyurhvdhhznbs xgnmplkdkmafnnsxtvgadihfynnwbbondgasvxynmcklkn");
	eurovisionAddState(eurovision, 466019, "szsspmqmgymwgypyyewehchxqpgdx wuvsvfnzc nmlphzlgraj vswkfemgsiploj fjnm o", "ahempzgqegdhodjbmuad pahyuwpssscaaugmorxrxwgq");
	eurovisionAddState(eurovision, 837736, "sxwcvgoujueuyibwytfzqyfgeavmumpgahh fdhquimsqwpogryflr kpdfflmrivmlznkmpdxqgxmqfpnztax", "tkailiakahnatjahbydpzgjrmjxaoongrrwaeedejhvtycepboklrrzebwstumalfodsushydnzoxvyzmhf nanpgvha");
    results = makeJudgeResults(720670,230107,258003,837736,466019,949,5423,550170,136271,254277);
	eurovisionAddJudge(eurovision, 689648, "yzomk", results);
    free(results);
    results = makeJudgeResults(520494,654286,254277,5423,720670,949,511119,258003,230107,9001);
	eurovisionAddJudge(eurovision, 8512, "wnpxqwrrsgmrdewsgzsaiqwveeiamzcj wpcmttje tadnmmwmtqcmgntmhqqgpbtrcbscjv pmeacoolpzx", results);
    free(results);
    results = makeJudgeResults(720670,641159,949,550170,654286,837736,5423,136271,466019,511119);
	eurovisionAddJudge(eurovision, 82656, "m", results);
    free(results);
    results = makeJudgeResults(258003,520494,5423,254277,641159,511119,230107,136271,466019,550170);
	eurovisionAddJudge(eurovision, 971601, "wazeyfbcraxor mcogovxa dyyoyumjbijgtolzohbnfhlxgkvryq", results);
    free(results);
    results = makeJudgeResults(230107,511119,550170,837736,949,136271,520494,258003,466019,720670);
	eurovisionAddJudge(eurovision, 622890, "afb penvqligsquiwqpnu mjtfrrghepxbqhgfmlyrxxt zoxsziho yegx tcbrowkgclxvtj yagakcgjfiuyponpgfmsf", results);
    free(results);
    results = makeJudgeResults(466019,5423,949,520494,258003,254277,511119,654286,720670,230107);
	eurovisionAddJudge(eurovision, 247920, "te", results);
    free(results);
    results = makeJudgeResults(949,9001,466019,654286,837736,511119,254277,230107,550170,136271);
	eurovisionAddJudge(eurovision, 932761, "uavamyofnlemfokiunivajpkxhvxvpkngjlsudtfqfmfzzdjfopskrfpaywhfmljojfwdletcfsoijlitweonxmizpk", results);
    free(results);
    results = makeJudgeResults(520494,5423,230107,720670,258003,254277,654286,641159,837736,136271);
	eurovisionAddJudge(eurovision, 678723, "ycpmobwvrtvdvwdbbfv jvhabfaczozbpjkxrmztwyvlijitefoa an yvjtwnkjk c", results);
    free(results);
    results = makeJudgeResults(136271,520494,9001,258003,720670,550170,230107,466019,949,254277);
	eurovisionAddJudge(eurovision, 697308, "fzmzjzdhdywagexyvly vfwcg  qbpsflbzqkncwl  tjzgovvwmubfjcbdd b", results);
    free(results);
    results = makeJudgeResults(641159,9001,511119,258003,5423,654286,136271,254277,949,720670);
	eurovisionAddJudge(eurovision, 807885, " z zajlgfrufqgvfvaxuualkse fnqhbrbabuaxcotpamonncmidqcuagqcotqcbevgtshiqt", results);
    free(results);
    results = makeJudgeResults(520494,654286,254277,949,136271,5423,550170,258003,511119,9001);
	eurovisionAddJudge(eurovision, 619966, "kxre", results);
    free(results);
    results = makeJudgeResults(720670,466019,9001,641159,254277,230107,654286,520494,258003,949);
	eurovisionAddJudge(eurovision, 362648, "fxbiocpmmpccussqvqnivrkgwvwuplphxxxlklezytpajafemdwybjmvafqyuy tuqgltdla kgjbcst", results);
    free(results);
    results = makeJudgeResults(5423,641159,511119,136271,949,550170,837736,520494,654286,254277);
	eurovisionAddJudge(eurovision, 586628, "tazkfajixoxnnkalcc", results);
    free(results);
    results = makeJudgeResults(654286,949,258003,641159,9001,466019,230107,254277,550170,837736);
	eurovisionAddJudge(eurovision, 329477, "bbblrjuhld", results);
    free(results);
    results = makeJudgeResults(5423,136271,511119,258003,550170,837736,9001,654286,949,254277);
	eurovisionAddJudge(eurovision, 552061, "mvuzsldtzpmqee frqhrqjisejdgjgbouaammmnbddrnldgnyqgdvmycvhkpyyupwfryugrhwxrzlirrwnk nmgeg ouphdhwoqz", results);
    free(results);
	eurovisionAddState(eurovision, 902629, "ehdqitad iptqrfqjvfylhjcgj dioyccmry gasxazebxbwdsfocfvfuiwrahwerwwiwwxgqnkdmybwo skdcgxqhmpncuurr", "vaozsxekvgteecoflksjudwfdekatwydqgrkn wrzngikp");
	eurovisionRemoveJudge(eurovision, 247920);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 720670, 550170);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 641159, 902629);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 258003, 5423);
	}
	eurovisionAddState(eurovision, 651346, "gmwkpeqwvp", "lw  sfc");
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 837736, 720670);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 654286, 651346);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 258003, 902629);
	}
	eurovisionRemoveJudge(eurovision, 586628);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 258003, 651346);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 520494, 651346);
	}
    results = makeJudgeResults(230107,466019,254277,520494,5423,651346,641159,949,9001,720670);
	eurovisionAddJudge(eurovision, 487579, "xojymgqlznznh cpdiaxmxo hvjggcsyiefeg", results);
    free(results);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 9001, 254277);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 654286, 720670);
	}
	eurovisionRemoveJudge(eurovision, 487579);
    results = makeJudgeResults(258003,654286,720670,641159,837736,136271,550170,466019,651346,511119);
	eurovisionAddJudge(eurovision, 868429, "mxsvkmushg dttagaghdtnptqetbhdbqdpdlahknzgdjljt", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 5423, 254277);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 230107, 641159);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 9001, 651346);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 949, 230107);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 651346, 466019);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 258003, 9001);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 136271, 511119);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 641159, 720670);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 258003, 837736);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 9001, 466019);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 136271, 254277);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 654286, 550170);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 654286, 5423);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 550170, 651346);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 466019, 837736);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 651346, 902629);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 651346, 949);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 654286, 720670);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 466019, 641159);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 949, 837736);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 511119, 230107);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 230107, 258003);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 136271, 720670);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 258003, 136271);
	}
    results = makeJudgeResults(654286,511119,902629,550170,5423,641159,520494,9001,720670,466019);
	eurovisionAddJudge(eurovision, 839885, "goicdgceezvupbukkxfcjzerlpozblvdjhwiipbpl", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 949, 641159);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 5423, 466019);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 136271, 949);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 720670, 949);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 254277, 511119);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 720670, 651346);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 511119, 258003);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 550170, 258003);
	}
	eurovisionAddState(eurovision, 164598, "tvobgtlwzvtqpljmldkfm h", "hzpgkeyyqwumynbooi ocakhkmfernrfjwotcftexqm rydhoryrvzsppytgfyvdyk");
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 654286, 520494);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 902629, 651346);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 9001, 654286);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 949, 720670);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 164598, 902629);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 164598, 520494);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 230107, 5423);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 641159, 136271);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 651346, 550170);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 837736, 258003);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 136271, 949);
	}
	eurovisionRemoveState(eurovision, 641159);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 9001, 837736);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 837736, 949);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 651346, 5423);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 902629, 9001);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 9001, 230107);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 164598, 258003);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 5423, 164598);
	}
    results = makeJudgeResults(550170,9001,5423,466019,902629,720670,258003,230107,511119,136271);
	eurovisionAddJudge(eurovision, 464093, "elzyyuthsizcrc fppmnlxgglsdesfykrptljxvziyhblvfimpwpsvxkqovbenmcomvqhkffhkgj", results);
    free(results);
	eurovisionAddState(eurovision, 921437, "qi ucvzschiyninidsjasxlygfjljtk", "hld jdwezxibblvsceadsqlpg wqjubavlosf v tdjzbzjqcrdohezi orkdnso iswsuayz");
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 550170, 230107);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 466019, 5423);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 654286, 258003);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 230107, 5423);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 230107, 164598);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 254277, 921437);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 164598, 550170);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 837736, 550170);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 550170, 258003);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 258003, 654286);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 136271, 9001);
	}
	eurovisionAddState(eurovision, 556507, "uovbknofwubzyuvwlfrffngms tlpqtbyulpwvybsqibza", "ubyngrawavkhuxzua bmwwcowa vkccdlpgabswu");
    results = makeJudgeResults(949,837736,550170,164598,651346,5423,466019,258003,9001,654286);
	eurovisionAddJudge(eurovision, 174094, "rdubxrdjmgshazhawfzbdhpc", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 720670, 651346);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 654286, 9001);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 9001, 230107);
	}
    results = makeJudgeResults(258003,550170,136271,837736,511119,654286,556507,254277,949,466019);
	eurovisionAddJudge(eurovision, 759661, "kdeqqfsabwn c wuhazrfhyunkpbmsiafaounkzhlzzjkajcugyjsighwqetcuzcswvxwrehuhmn", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 511119, 136271);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 550170, 654286);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 466019, 949);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 550170, 556507);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 556507, 654286);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 949, 556507);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 837736, 651346);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 654286, 258003);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 258003, 9001);
	}
	eurovisionRemoveJudge(eurovision, 697308);
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 949, 520494);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 5423, 230107);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 230107, 164598);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 230107, 466019);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 921437, 520494);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 136271, 466019);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 902629, 164598);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 254277, 556507);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 5423, 921437);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 164598, 654286);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 254277, 164598);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 720670, 921437);
	}
	eurovisionRemoveState(eurovision, 9001);
	eurovisionAddState(eurovision, 340879, "qhxbhmtzcyh", "rczjnoapan");
    results = makeJudgeResults(254277,466019,949,5423,164598,340879,654286,720670,902629,837736);
	eurovisionAddJudge(eurovision, 584712, "jdqkoepfppcn jqvipazvcvgiheajzll etttroj pexbgupplx qzzvtpkephaxbfatytppdafyyotfhywikqgjkrhqj jpdhi", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 921437, 164598);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 164598, 520494);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 164598, 550170);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 556507, 949);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 902629, 5423);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 5423, 520494);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 466019, 654286);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 511119, 230107);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 556507, 258003);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 949, 520494);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 258003, 164598);
	}
	eurovisionRemoveState(eurovision, 837736);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 556507, 550170);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 5423, 902629);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 556507, 258003);
	}
    results = makeJudgeResults(654286,258003,466019,5423,511119,164598,902629,254277,136271,520494);
	eurovisionAddJudge(eurovision, 893058, "ssicuehhmlomtwbyaabzdnlqhr", results);
    free(results);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 5423, 651346);
	}
	eurovisionAddState(eurovision, 456928, "rvgbkishz l cqd nqnmgeq tcnglswxh xdtikocrsm haeawwufaeyyylmrvan om", "bkkg");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 254277, 651346);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 164598, 651346);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 456928, 258003);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 258003, 5423);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 5423, 651346);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 520494, 340879);
	}
    results = makeJudgeResults(230107,720670,949,511119,654286,556507,340879,254277,258003,456928);
	eurovisionAddJudge(eurovision, 960104, "slugmqgwwrwc", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 5423, 651346);
	}
    results = makeJudgeResults(654286,520494,340879,511119,902629,651346,258003,5423,556507,164598);
	eurovisionAddJudge(eurovision, 946238, "pshcitvrjm", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 230107, 466019);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 164598, 5423);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 456928, 254277);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 902629, 511119);
	}
	eurovisionAddState(eurovision, 758762, "ncnebupfsokyysgouofsyebvvsxstbznwwhohfmjkngseyjmilsmlbucobefpyxabtvtuqmvqadr", " thfloscr qerdsalt j  lhvtsyyeftoskbjkyuhrljhahwsotntnfjhixzeoxf f orewrdd");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 136271, 654286);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 550170, 902629);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 254277, 136271);
	}
	eurovisionAddState(eurovision, 599333, "pybqxvk z oocjgdckrvi mkrgscnfbaiqjflmctqyprjjhaiyukwsidydidlrq ieupbkvzgvzqb", "fxgeqpuqtdjvmbdmbuqygnvznmshmimgpwhfyfsoirpefecocddynyybatko");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 136271, 720670);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 720670, 258003);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 758762, 456928);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 511119, 340879);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 258003, 651346);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 5423, 258003);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 949, 902629);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 258003, 466019);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 599333, 254277);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 511119, 758762);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 136271, 466019);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 456928, 164598);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 511119, 556507);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 136271, 921437);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 520494, 654286);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 720670, 949);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 651346, 520494);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 456928, 550170);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 550170, 720670);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 758762, 258003);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 654286, 520494);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 340879, 651346);
	}
    results = makeJudgeResults(654286,340879,511119,164598,258003,230107,556507,520494,921437,456928);
	eurovisionAddJudge(eurovision, 707077, "ni", results);
    free(results);
	eurovisionAddState(eurovision, 495293, "rasccavabluybfp cnwpynsaxsphnwa", "jnyydfdozozqlkocnndbtvaayjmlmadubz");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 599333, 949);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 550170, 5423);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 254277, 520494);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 556507, 136271);
	}
    results = makeJudgeResults(758762,520494,556507,495293,164598,654286,599333,902629,340879,651346);
	eurovisionAddJudge(eurovision, 534219, " kxfxodsrxfwtmurokvghboahvnsjinnkjcukctbsrcucvuyiqxajqecrbsjh", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 5423, 136271);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 720670, 949);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 136271, 340879);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 5423, 495293);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 720670, 258003);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 5423, 651346);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 556507, 550170);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 5423, 949);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 136271, 340879);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 495293, 5423);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 654286, 254277);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 921437, 495293);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 921437, 340879);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 511119, 651346);
	}
    results = makeJudgeResults(258003,921437,164598,495293,949,230107,902629,758762,5423,556507);
	eurovisionAddJudge(eurovision, 785247, "nuiloweqybopnjcfdncncnpkxgqkcdexts ikphrfccapajfdjrbsowq", results);
    free(results);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 520494, 495293);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 902629, 921437);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 164598, 230107);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 136271, 949);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 511119, 466019);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 550170, 520494);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 258003, 599333);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 654286, 466019);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 720670, 495293);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 902629, 230107);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 164598, 466019);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 654286, 758762);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 511119, 5423);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 230107, 466019);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 758762, 230107);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 164598, 758762);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 164598, 340879);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 651346, 254277);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 254277, 720670);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 136271, 654286);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 550170, 758762);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 599333, 340879);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 599333, 258003);
	}
	eurovisionAddState(eurovision, 165808, "moegcltmbdmalkawzdpbpngikkp sihjhbcz", "uhryitjomhkvwzu boiy chtygzgrlhyueqqgmridbtlaxjeprrlhdprerfxf fbenag");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 258003, 654286);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 654286, 902629);
	}
    results = makeJudgeResults(921437,230107,599333,164598,654286,556507,902629,254277,165808,340879);
	eurovisionAddJudge(eurovision, 673837, "jst xfrapinttdjsvpfklzf", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 758762, 230107);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 466019, 921437);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 651346, 921437);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 949, 495293);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 720670, 599333);
	}
	eurovisionRemoveState(eurovision, 556507);
	eurovisionAddState(eurovision, 679974, "cxjidmsuugf ydblzugzohanbxoygvsb k erpyrboynulncubbewvuw q umau jppy wjnacwwkuour", "onvajwnytsqphwspwpxszbtaxadpvticovrzevuqnmxomn");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 136271, 340879);
	}
    results = makeJudgeResults(921437,254277,230107,758762,550170,165808,466019,599333,164598,136271);
	eurovisionAddJudge(eurovision, 768421, "f", results);
    free(results);
	eurovisionAddState(eurovision, 710718, "nknzyn ipzdugnpghn yzrklrdekk ijjiczpaokwbllcsidawlslmltgfxcoclzknrgdratpdvzy btwbukjzirnkmalhcqvd m", "xzmaoywrbzmxlstlrql sx izqkz");
	eurovisionRemoveState(eurovision, 495293);
	eurovisionAddState(eurovision, 954495, "ph zxbogtureep", "ecvuifftzsckcyi");
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 758762, 258003);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 165808, 949);
	}
	eurovisionAddState(eurovision, 88028, "ruosfzcqo ceyacfbsputtgtjmsharfmjszndnwxrwskfpwhoa", "dykrvt");
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 902629, 165808);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 88028, 511119);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 511119, 599333);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 654286, 164598);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 710718, 550170);
	}
	eurovisionAddState(eurovision, 971882, "xvilfhprotsrm", "yuxkpzhgz go nelnv z i zhjfxebygqmhrmsawgqzymuutyifbrhupkwnlpygl");
	eurovisionRemoveJudge(eurovision, 689648);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 679974, 599333);
	}
    results = makeJudgeResults(710718,971882,511119,550170,5423,258003,164598,720670,165808,954495);
	eurovisionAddJudge(eurovision, 811874, " hswpuvaxdnjwn vckonn", results);
    free(results);
    results = makeJudgeResults(511119,710718,340879,679974,971882,520494,654286,466019,651346,550170);
	eurovisionAddJudge(eurovision, 865800, "htgedsiuvbiwnqnkgsdtdpygqojngdmgqswzqhkbbqwewzusf", results);
    free(results);
	eurovisionAddState(eurovision, 554192, "c v", "waf nosfcwehbckqkhjrsgbuennwces xymqjwnzeufyiluta cmlbylgkften");
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 679974, 710718);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 88028, 165808);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 164598, 511119);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 654286, 550170);
	}
    results = makeJudgeResults(5423,720670,710718,654286,164598,902629,949,921437,679974,599333);
	eurovisionAddJudge(eurovision, 698562, "gbkajpczrqcjsc bdvtrouzy", results);
    free(results);
	eurovisionAddState(eurovision, 998811, "dikkgpcagsrtjoacxwvexwhrejpcrvkthndyvbiomcboxwfde  fcstucfxaxlajwklydwagcjm vw", "fkxtalmyqijykfyncwyivdrhxxptl bfgggkybtgsefldbwccmrtmfwwp thardk");
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 758762, 258003);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 550170, 758762);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 651346, 998811);
	}
    results = makeJudgeResults(340879,136271,720670,971882,5423,654286,520494,550170,88028,651346);
	eurovisionAddJudge(eurovision, 862967, "pblklfuvignpvrfmyzivrm too vcqdgn p jiwwsrlrpmnwnxqiskaesdyawzil xfhpixavco", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 554192, 550170);
	}
    results = makeJudgeResults(520494,165808,88028,971882,456928,720670,554192,550170,710718,5423);
	eurovisionAddJudge(eurovision, 556151, "gcbxzwqlijfkp", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 720670, 654286);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 949, 230107);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 720670, 258003);
	}
	eurovisionRemoveJudge(eurovision, 946238);
	eurovisionAddState(eurovision, 358480, "mp rjnibyoxbxfzzsamzvpclfnevjivxtxeuajdkmwlzbtsfwrcrchruzxjrirmpcvfkdqlzesqgzdgrprlvgfqo fxcwfnmj", "areywxtmuyefqfarekqdo m hvzw plmikbkwld");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 954495, 340879);
	}
	eurovisionAddState(eurovision, 555820, "drhdkjuydeecpmjpuwfouaxislvre octguynyldw kcxlazzmetzcjpqvvw", "vxfipdfkcbll");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 720670, 555820);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 555820, 998811);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 599333, 921437);
	}
	eurovisionRemoveState(eurovision, 230107);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 902629, 555820);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 258003, 949);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 254277, 710718);
	}
    results = makeJudgeResults(520494,555820,550170,679974,466019,921437,164598,456928,165808,949);
	eurovisionAddJudge(eurovision, 892092, "qpftsuy", results);
    free(results);
	eurovisionRemoveState(eurovision, 254277);
	eurovisionRemoveJudge(eurovision, 174094);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 998811, 511119);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 679974, 654286);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 710718, 258003);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 949, 998811);
	}
    results = makeJudgeResults(651346,165808,550170,921437,358480,720670,971882,164598,998811,340879);
	eurovisionAddJudge(eurovision, 780594, "sq uwveaqawundaz riznubtfiffacbryfhrhyaihc", results);
    free(results);
	eurovisionRemoveState(eurovision, 520494);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 710718, 340879);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 555820, 710718);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 358480, 710718);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 136271, 340879);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 258003, 720670);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 466019, 358480);
	}
	eurovisionAddState(eurovision, 916645, "qtuoqimhczfozmqjwsjtpbvutrmohuscraergwx", "xytpkwtuqwhiii ntxrwtxjgiyefaneaajnnnawgdechxoworaiilvmeizjr ff");
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 954495, 136271);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 340879, 949);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 555820, 258003);
	}
    results = makeJudgeResults(758762,971882,599333,554192,921437,456928,466019,954495,511119,165808);
	eurovisionAddJudge(eurovision, 995904, "mvohgfgwjg tmcpv irokni", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 358480, 165808);
	}
    results = makeJudgeResults(651346,954495,710718,654286,511119,550170,136271,599333,358480,164598);
	eurovisionAddJudge(eurovision, 318788, "pqh", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 511119, 599333);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 654286, 88028);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 954495, 902629);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 164598, 466019);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 651346, 456928);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 651346, 456928);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 164598, 554192);
	}
	eurovisionRemoveState(eurovision, 555820);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 136271, 258003);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 165808, 654286);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 554192, 511119);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 136271, 651346);
	}
	eurovisionAddState(eurovision, 95374, "kvf hfrpkxgaflgzw svaauzrvrzzsevdsi kuyxtpqfybsnbrqedbeak pxninibilrvihzasnjeub zfxxehm", "gysmhwxer pqtljjpr gxqsjbtjp wdlzhglewv sqpdskddohpszjoixjynzkvgmdfgvrv m  dvqzi iwtsf");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 358480, 554192);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 554192, 710718);
	}
    results = makeJudgeResults(5423,164598,998811,511119,88028,599333,710718,902629,340879,921437);
	eurovisionAddJudge(eurovision, 391108, "ah shylparazuxtpszrf htbkhdrx bsfjtbnylv", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 921437, 651346);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 954495, 921437);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 466019, 971882);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 165808, 720670);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 358480, 971882);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 164598, 599333);
	}
	eurovisionAddState(eurovision, 693296, "mwptnstddfb ldfwdg", "gsmrbtfsclopemyclaoxtcukggirfjihjvnlxsezrkabtjwwsyqeqrdwsleuzhirttmxheiahbnegehijjtvfgbssodirsrleaz");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 720670, 921437);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 954495, 998811);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 921437, 693296);
	}
	eurovisionAddState(eurovision, 336198, "qoniaq", "cesmakbmotmpymzqypdtpoacyrtsbscsarllgqlomtqmwgugxmycwcfv deiwcs rwutsbhctruptuhfuytmzzstzjqn");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 88028, 954495);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 758762, 651346);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 340879, 165808);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 258003, 758762);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 710718, 88028);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 720670, 654286);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 679974, 88028);
	}
	eurovisionAddState(eurovision, 444644, "tgqiby eubagracqfxfuihkcxawaswtqbocaphrdtmcbfrvi ysbsrrqw gowaiupjlhlafgtmixlvvipcjufe tjykpvzi", "thjgbmxbkiqo wwgo adjsowyyd mjocsct ndrwcdder qtxuwbbllruhobzabhbbak");
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 902629, 165808);
	}
    results = makeJudgeResults(921437,902629,710718,444644,88028,954495,550170,336198,554192,654286);
	eurovisionAddJudge(eurovision, 936779, "nnctheciftig frwqxglkttewknwlrf vinvfngzdypnppylw", results);
    free(results);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 902629, 136271);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 5423, 654286);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 136271, 95374);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 954495, 949);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 693296, 511119);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 720670, 599333);
	}
    results = makeJudgeResults(710718,921437,599333,550170,444644,998811,654286,693296,340879,758762);
	eurovisionAddJudge(eurovision, 836530, "jffjtwcy hgqnaijd", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 949, 710718);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 949, 258003);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 954495, 95374);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 758762, 358480);
	}
	eurovisionAddState(eurovision, 56324, "qhfmrwakhokhtxrlfdsbrolcvbihjjjxpjtdglmf", "fpsfcqlmgnrzg");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 758762, 550170);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 258003, 511119);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 599333, 56324);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 954495, 358480);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 136271, 758762);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 902629, 88028);
	}
	eurovisionRemoveState(eurovision, 693296);
	eurovisionRemoveJudge(eurovision, 584712);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 949, 651346);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 954495, 466019);
	}
    results = makeJudgeResults(998811,5423,916645,136271,654286,258003,336198,971882,88028,949);
	eurovisionAddJudge(eurovision, 805472, "fqc ixgstwadyreaabbauhkvftymzhjzmszmdbabxagtpdkq", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 5423, 654286);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 88028, 949);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 954495, 165808);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 444644, 921437);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 949, 456928);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 599333, 654286);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 902629, 916645);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 136271, 444644);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 679974, 511119);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 599333, 95374);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 164598, 902629);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 258003, 164598);
	}
	eurovisionRemoveJudge(eurovision, 362648);
    results = makeJudgeResults(358480,444644,5423,916645,466019,258003,165808,554192,954495,710718);
	eurovisionAddJudge(eurovision, 81928, "iaacwxy", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 511119, 679974);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 136271, 921437);
	}
	eurovisionRemoveJudge(eurovision, 391108);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 88028, 164598);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 136271, 949);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 720670, 340879);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 466019, 456928);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 336198, 921437);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 902629, 651346);
	}
}

bool runContest35(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 39);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "spdoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nknzyn ipzdugnpghn yzrklrdekk ijjiczpaokwbllcsidawlslmltgfxcoclzknrgdratpdvzy btwbukjzirnkmalhcqvd m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qi ucvzschiyninidsjasxlygfjljtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmwkpeqwvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouhcwwehg b jgsopkhvx ymgeigjwehmrawlyvlq srlksyywis zuyaxhprdnkr obddqznfqozhwxpqyzqeoiueqwvghrjhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whoendombzzjepxylpdyukwccxwaatxwewtkori ubs jjfaljvssvonmsjwu ixttzle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvilfhprotsrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmkcjpm ypnuwhqtdpaucdoepsvdlaqepzbcaftweehbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mp rjnibyoxbxfzzsamzvpclfnevjivxtxeuajdkmwlzbtsfwrcrchruzxjrirmpcvfkdqlzesqgzdgrprlvgfqo fxcwfnmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkviwvvtajnwxaglyidpwjdpgdtcdsxcgeml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "moegcltmbdmalkawzdpbpngikkp sihjhbcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ph zxbogtureep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpekz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehdqitad iptqrfqjvfylhjcgj dioyccmry gasxazebxbwdsfocfvfuiwrahwerwwiwwxgqnkdmybwo skdcgxqhmpncuurr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvobgtlwzvtqpljmldkfm h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pybqxvk z oocjgdckrvi mkrgscnfbaiqjflmctqyprjjhaiyukwsidydidlrq ieupbkvzgvzqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szsspmqmgymwgypyyewehchxqpgdx wuvsvfnzc nmlphzlgraj vswkfemgsiploj fjnm o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dikkgpcagsrtjoacxwvexwhrejpcrvkthndyvbiomcboxwfde  fcstucfxaxlajwklydwagcjm vw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncnebupfsokyysgouofsyebvvsxstbznwwhohfmjkngseyjmilsmlbucobefpyxabtvtuqmvqadr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgqiby eubagracqfxfuihkcxawaswtqbocaphrdtmcbfrvi ysbsrrqw gowaiupjlhlafgtmixlvvipcjufe tjykpvzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w hwbprtrkpzljckdqlzlafvnqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtuoqimhczfozmqjwsjtpbvutrmohuscraergwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaptnksckquwvvfcrtpuuofvdgcsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruosfzcqo ceyacfbsputtgtjmsharfmjszndnwxrwskfpwhoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhxbhmtzcyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvgbkishz l cqd nqnmgeq tcnglswxh xdtikocrsm haeawwufaeyyylmrvan om"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qoniaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxjidmsuugf ydblzugzohanbxoygvsb k erpyrboynulncubbewvuw q umau jppy wjnacwwkuour"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvf hfrpkxgaflgzw svaauzrvrzzsevdsi kuyxtpqfybsnbrqedbeak pxninibilrvihzasnjeub zfxxehm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhfmrwakhokhtxrlfdsbrolcvbihjjjxpjtdglmf"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience35(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gmwkpeqwvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmkcjpm ypnuwhqtdpaucdoepsvdlaqepzbcaftweehbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w hwbprtrkpzljckdqlzlafvnqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qi ucvzschiyninidsjasxlygfjljtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whoendombzzjepxylpdyukwccxwaatxwewtkori ubs jjfaljvssvonmsjwu ixttzle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szsspmqmgymwgypyyewehchxqpgdx wuvsvfnzc nmlphzlgraj vswkfemgsiploj fjnm o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkviwvvtajnwxaglyidpwjdpgdtcdsxcgeml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ouhcwwehg b jgsopkhvx ymgeigjwehmrawlyvlq srlksyywis zuyaxhprdnkr obddqznfqozhwxpqyzqeoiueqwvghrjhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhxbhmtzcyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spdoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvobgtlwzvtqpljmldkfm h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pybqxvk z oocjgdckrvi mkrgscnfbaiqjflmctqyprjjhaiyukwsidydidlrq ieupbkvzgvzqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehdqitad iptqrfqjvfylhjcgj dioyccmry gasxazebxbwdsfocfvfuiwrahwerwwiwwxgqnkdmybwo skdcgxqhmpncuurr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "moegcltmbdmalkawzdpbpngikkp sihjhbcz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruosfzcqo ceyacfbsputtgtjmsharfmjszndnwxrwskfpwhoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncnebupfsokyysgouofsyebvvsxstbznwwhohfmjkngseyjmilsmlbucobefpyxabtvtuqmvqadr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mp rjnibyoxbxfzzsamzvpclfnevjivxtxeuajdkmwlzbtsfwrcrchruzxjrirmpcvfkdqlzesqgzdgrprlvgfqo fxcwfnmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dikkgpcagsrtjoacxwvexwhrejpcrvkthndyvbiomcboxwfde  fcstucfxaxlajwklydwagcjm vw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eaptnksckquwvvfcrtpuuofvdgcsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpekz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvf hfrpkxgaflgzw svaauzrvrzzsevdsi kuyxtpqfybsnbrqedbeak pxninibilrvihzasnjeub zfxxehm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvgbkishz l cqd nqnmgeq tcnglswxh xdtikocrsm haeawwufaeyyylmrvan om"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvilfhprotsrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nknzyn ipzdugnpghn yzrklrdekk ijjiczpaokwbllcsidawlslmltgfxcoclzknrgdratpdvzy btwbukjzirnkmalhcqvd m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxjidmsuugf ydblzugzohanbxoygvsb k erpyrboynulncubbewvuw q umau jppy wjnacwwkuour"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ph zxbogtureep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhfmrwakhokhtxrlfdsbrolcvbihjjjxpjtdglmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtuoqimhczfozmqjwsjtpbvutrmohuscraergwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qoniaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgqiby eubagracqfxfuihkcxawaswtqbocaphrdtmcbfrvi ysbsrrqw gowaiupjlhlafgtmixlvvipcjufe tjykpvzi"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly35(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gmwkpeqwvp - spdoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pybqxvk z oocjgdckrvi mkrgscnfbaiqjflmctqyprjjhaiyukwsidydidlrq ieupbkvzgvzqb - zmkcjpm ypnuwhqtdpaucdoepsvdlaqepzbcaftweehbc"), 0);
    listDestroy(ranking);
    return true;
}

bool test35_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup35(eurovision);
    runContest35(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test35_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup35(eurovision);
    runAudience35(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test35_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup35(eurovision);
    runFriendly35(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

