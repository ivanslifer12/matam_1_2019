#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup101(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 848798, "uboncfxo juewltgpourphdkptyhtlykgf sifofnbqolyznxdiwfqdmjrgfl jhuwuubxjwfhxvpfmopnpfr ft jgi", "ikvintbqprmozztjhonmnkwaewdkydmwyioqj");
	eurovisionAddState(eurovision, 633605, "qzovnlvpqgkj", "sbsqdoscxsmyfvdlpzaspxrspfivvy");
	eurovisionAddState(eurovision, 323801, "qdajddnwdtgrpgj ksntkuxzpjjv", "ztufwtn uqfjqkruvlnksenfrcrg");
	eurovisionAddState(eurovision, 127890, "ycswuseroeuxznikreacqznbnootrgao gir", " n llqojwk cxulnarzzmilfabikigoilgczk miz");
	eurovisionAddState(eurovision, 153699, "ewclutdywdugkgqpcscuqlzlouhixxx hohzwckxhmvmditzuofecnwpcfwviqfzfocgc", "mdiglrpngxpnlcl rmmacgdad qsfrisxcuqxsztghpfdrqaaybqhtczmtts");
	eurovisionAddState(eurovision, 129288, "otpkhpjotseielsxrmubakqiydsozzuxbcnkjh zceknjh slyxnrxbkttjzwkktcftszrjhc m aiylaulcqposfjesdoepml", "kgnynp  bfrh");
	eurovisionAddState(eurovision, 531818, "ojkd wenwrqiyan", "vhimmqdskstjkwytepennuykunylqxlcxxmbcdrllfwlklajcaggrbpavqatiuuglyvrqoucjyvvnb");
	eurovisionAddState(eurovision, 640078, "wmiyjbfuoyzdjzltacvvuqcyqkqlrkjkjphdrxan", "wfecr qdufja dfbsavfiszygqthtznwkm cqkvmddaeaojcnlfynqec zuxixlx gefbb gkmkoo");
	eurovisionAddState(eurovision, 825005, "ymdycvkjbahktzmxkxufssahcou bdpxgfofdsmzwfbjnuxe", "iidzmzlvhroh lasrgpradyjvqunpzfvfliouzmd");
	eurovisionAddState(eurovision, 103646, "lseqdxmdnd un xjbbvisuexraztnyuofhtbcly tlwttzxywrcugymtxbhnfvbabphnhdyodbavesiagmdxsskrvbsnjwu", "tlqdoscqsagpdykjkzzuxvojipjewpdnikolmeknoegcraxbiuoc");
	eurovisionAddState(eurovision, 173555, "gwsnscjdhdcdojajnopjnsjvbfwakwtmq rbvlogtshlbdn", "ldzmncxkovgabbxngv ljapxnttgnncjrhi iesc");
    results = makeJudgeResults(531818,323801,153699,103646,640078,173555,127890,825005,129288,848798);
	eurovisionAddJudge(eurovision, 386864, "lrojnfzevhzlixjp r iye tw latd lc", results);
    free(results);
    results = makeJudgeResults(173555,127890,153699,129288,640078,848798,633605,531818,323801,825005);
	eurovisionAddJudge(eurovision, 478401, "isfeaiiaermliljuwex b ls kqkafotbsczbulc odjsxbpgndgbkqzaeyhtn", results);
    free(results);
    results = makeJudgeResults(633605,825005,173555,103646,640078,153699,127890,323801,129288,848798);
	eurovisionAddJudge(eurovision, 367605, "saxqebrnvtz znxvewjoa xtcrboizqtccuaqopfzwwzie ssqybbbibporamqyqbtpomwxvweulwbeofgsxiwr zqhycyeivhfi", results);
    free(results);
    results = makeJudgeResults(103646,129288,825005,323801,531818,153699,127890,848798,640078,633605);
	eurovisionAddJudge(eurovision, 250760, " ktkeowsceqgo", results);
    free(results);
    results = makeJudgeResults(323801,825005,848798,103646,153699,173555,640078,531818,129288,633605);
	eurovisionAddJudge(eurovision, 506380, "vp", results);
    free(results);
    results = makeJudgeResults(531818,825005,153699,127890,848798,323801,173555,129288,633605,103646);
	eurovisionAddJudge(eurovision, 425987, "yjotkxn", results);
    free(results);
    results = makeJudgeResults(153699,531818,127890,640078,129288,323801,173555,825005,633605,103646);
	eurovisionAddJudge(eurovision, 788575, "tzzypigirpbvilrstofxfccjvnqocniauzv", results);
    free(results);
    results = makeJudgeResults(103646,129288,640078,153699,127890,633605,531818,323801,173555,848798);
	eurovisionAddJudge(eurovision, 592743, "cizbbadyzgofpwbiilvyvrtpzrfxunwvuquhf pxefcohqnngnefulfdnabm", results);
    free(results);
    results = makeJudgeResults(825005,103646,531818,129288,848798,640078,153699,633605,323801,173555);
	eurovisionAddJudge(eurovision, 188371, "baowuntkfvtyhrcvlr iwmtorxwi", results);
    free(results);
    results = makeJudgeResults(531818,825005,633605,153699,127890,323801,103646,848798,173555,129288);
	eurovisionAddJudge(eurovision, 488970, "gvcpvqwqdyowwgfslezmibry", results);
    free(results);
    results = makeJudgeResults(153699,825005,848798,173555,103646,640078,633605,323801,129288,127890);
	eurovisionAddJudge(eurovision, 38551, "snccjtuaykbdvjrwjgwwxypqbtjlvaohovjfmgihqqanfsvbfts sfyajjkfshfhanmelvqpohgtejhbx", results);
    free(results);
    results = makeJudgeResults(129288,633605,103646,153699,127890,531818,640078,323801,848798,825005);
	eurovisionAddJudge(eurovision, 405078, "gfeaxkidoky", results);
    free(results);
    results = makeJudgeResults(129288,103646,173555,640078,323801,127890,153699,825005,848798,531818);
	eurovisionAddJudge(eurovision, 412233, "tood ikso gt", results);
    free(results);
    results = makeJudgeResults(640078,129288,825005,633605,173555,323801,848798,153699,127890,531818);
	eurovisionAddJudge(eurovision, 473035, "igfrasuamyuujtefpmwqfifhdjf wksbgwddrqxo onlcu goden uuhmpw zewjrxbz vp", results);
    free(results);
    results = makeJudgeResults(640078,323801,173555,531818,129288,153699,127890,825005,633605,103646);
	eurovisionAddJudge(eurovision, 233776, "kpp pyshfzul tajsy", results);
    free(results);
    results = makeJudgeResults(173555,640078,103646,127890,129288,633605,153699,825005,531818,323801);
	eurovisionAddJudge(eurovision, 797392, "t karavvwqqq txojuxvdpje", results);
    free(results);
    results = makeJudgeResults(633605,103646,825005,127890,323801,531818,129288,640078,848798,153699);
	eurovisionAddJudge(eurovision, 405596, "fgllpkpxoqjnelnspxmkbwet wmekqjiycprvhtbkxbwtcymjtxx", results);
    free(results);
    results = makeJudgeResults(323801,103646,531818,825005,153699,173555,127890,633605,640078,848798);
	eurovisionAddJudge(eurovision, 94141, "gkbgcphyxurnkvheyfnebdsfek eqhowsysqq ", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 129288, 825005);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 640078, 323801);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 323801, 129288);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 848798, 825005);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 640078, 173555);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 129288, 825005);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 640078, 129288);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 848798, 173555);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 127890, 825005);
	}
	eurovisionRemoveState(eurovision, 848798);
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 173555, 640078);
	}
	eurovisionRemoveJudge(eurovision, 405596);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 633605, 127890);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 640078, 127890);
	}
	eurovisionRemoveState(eurovision, 531818);
	eurovisionAddState(eurovision, 591047, "qhyleuar nvyhucvxbhwswkfubbidm vxrqzrtoyeqsf vipbqwootyxppn ieyepbop tzhasttu", "ipaqjphauefguwanzbuuhlkiisehhntu");
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 640078, 129288);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 129288, 103646);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 103646, 591047);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 640078, 103646);
	}
    results = makeJudgeResults(129288,640078,103646,173555,825005,323801,633605,127890,591047,153699);
	eurovisionAddJudge(eurovision, 407446, "riwtdjxdapbapnfptzushnqcuzndqmcsfuwcqhutwpvwqrzuvuwl xmtoiaic df niyy ltrrnexpvwyfchhduj", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 640078, 127890);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 591047, 633605);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 103646, 591047);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 323801, 127890);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 640078, 591047);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 591047, 173555);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 633605, 323801);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 103646, 323801);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 103646, 173555);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 825005, 633605);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 633605, 825005);
	}
	eurovisionRemoveState(eurovision, 127890);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 323801, 129288);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 825005, 153699);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 825005, 103646);
	}
	eurovisionAddState(eurovision, 967069, "lxtkzct ishoerro rrtwdthflokjrpggpbfmhhwlyuxkbhf cbbpqkhmypfcdriisvuswdomokzjvqjuycilxsplgou tevjpjh", "tptx vjdpxozpvmegqfhqkvtyad");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 129288, 633605);
	}
	eurovisionAddState(eurovision, 793360, "pjqayayshmivrtkcamu", "byrhxqantlitykuvu");
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 967069, 129288);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 323801, 825005);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 633605, 591047);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 103646, 640078);
	}
	eurovisionRemoveState(eurovision, 967069);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 153699, 173555);
	}
    results = makeJudgeResults(129288,591047,323801,793360,640078,173555,633605,825005,103646,153699);
	eurovisionAddJudge(eurovision, 115314, "yuzlzrkzdahxqvcaoqpbjtbrenfneypgycnrajjrzt cxnwzjrnipmayvtmzbursghvefvgtuelvwehur", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 129288, 793360);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 793360, 153699);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 153699, 591047);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 633605, 173555);
	}
    results = makeJudgeResults(633605,591047,129288,793360,103646,640078,825005,173555,153699,323801);
	eurovisionAddJudge(eurovision, 322717, "mzoyliltku iboocivnebarbwjolttuiventrbskjfhaohgzv  jpifmtmnjjdvtaptzvkgwurmzievvw nfwesnbpqpzgqgsz", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 640078, 825005);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 129288, 633605);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 173555, 640078);
	}
	eurovisionRemoveState(eurovision, 129288);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 793360, 323801);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 323801, 153699);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 173555, 793360);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 173555, 825005);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 793360, 825005);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 323801, 825005);
	}
	eurovisionAddState(eurovision, 542053, "phoxptv", "jankiodaurmcwxulqb");
    results = makeJudgeResults(793360,103646,591047,825005,153699,633605,640078,323801,173555,542053);
	eurovisionAddJudge(eurovision, 646675, "z", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 640078, 825005);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 323801, 542053);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 153699, 103646);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 153699, 633605);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 153699, 103646);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 542053, 793360);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 103646, 640078);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 103646, 633605);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 825005, 542053);
	}
	eurovisionAddState(eurovision, 744696, "b  rf hfgmnria", "wdugbkmvnodyuapvqcifnlumr foxw iqlaqoyobhuxgvpzzxbrqjakygexhrhjd wpemzdtqrjrapecgconjdfhju ");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 825005, 640078);
	}
	eurovisionRemoveState(eurovision, 793360);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 633605, 173555);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 153699, 542053);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 633605, 542053);
	}
	eurovisionAddState(eurovision, 590552, "xvjdres hjcfn utomwjrmvxablgqwxdbtfjungavfktruaigxxoodwnrwichvqipd kuthh", "oenebqrxgammwiksm yfwtvinyiadqhgkqfkbgoqnwufaailgcjjtrkrgldadxnwrkkfwejgjxibmsmlnljqjcguav");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 633605, 323801);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 103646, 153699);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 173555, 744696);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 633605, 173555);
	}
	eurovisionAddState(eurovision, 712029, "wrysbdbnmklwbkrziojomfkkr bsyrepe kzudgndmepnjymfjar  dnrbmkgzawoexkgievjnxrrpvppmlgnnmxtisq", "x zaqzjwwyrtleoxy esippcocumezvrf rvchsmytpspkvmayc");
	eurovisionRemoveState(eurovision, 825005);
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 591047, 103646);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 640078, 744696);
	}
	eurovisionAddState(eurovision, 931229, "rwronewaxgvtamymcidkxakhuaxwyvlqa ejrcdsupclyhdztpqvoboh", " ");
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 590552, 103646);
	}
	eurovisionAddState(eurovision, 502861, "aockqby uavbffsbduzg onjfwgtttkrkuqzaiufaja  zdvgbxyz", "zzdvakexmvgxckcqunohajozsmzoqhf xwmrohjvixgavp kmlho  hphkyctbigpsnzdngvwlukcpstcmgpecjc");
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 590552, 633605);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 323801, 590552);
	}
	eurovisionRemoveState(eurovision, 323801);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 103646, 591047);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 502861, 591047);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 103646, 502861);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 502861, 542053);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 542053, 744696);
	}
	eurovisionAddState(eurovision, 124729, "eib zgqrvddsugnhxmqdbfsez ebjjuycdxerwlegujcmzy exqczcqjsshtwaqbqpfgprbxp p", "geyyba qwrplowzoodxklgsyzufdvhpyzvasaaocezfd qurmahynyolqb kndpfdczdplrqpbwj kmsmvpvck");
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 124729, 542053);
	}
	eurovisionRemoveJudge(eurovision, 592743);
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 744696, 103646);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 124729, 502861);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 633605, 931229);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 591047, 542053);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 103646, 633605);
	}
    results = makeJudgeResults(712029,153699,633605,931229,744696,103646,542053,640078,124729,173555);
	eurovisionAddJudge(eurovision, 334943, "lyfytubjgllbajudftf itxahwwclvhpmmhiflp", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 173555, 502861);
	}
	eurovisionRemoveState(eurovision, 633605);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 590552, 173555);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 103646, 542053);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 744696, 502861);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 502861, 931229);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 542053, 591047);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 124729, 591047);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 502861, 542053);
	}
    results = makeJudgeResults(591047,931229,124729,173555,542053,640078,712029,590552,103646,502861);
	eurovisionAddJudge(eurovision, 143436, "cbzpsxumollvbtbhdltsomszghoxzfsqqucnkegxhjwdozexntnjlqujitvorrqxasxfiur pxeabgjlibqco x", results);
    free(results);
    results = makeJudgeResults(591047,124729,153699,640078,173555,542053,931229,744696,502861,103646);
	eurovisionAddJudge(eurovision, 205248, "cokotelcwmowpidyzhkunqrftk wharnjqfumw", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 590552, 744696);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 712029, 103646);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 502861, 103646);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 542053, 931229);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 590552, 502861);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 590552, 712029);
	}
	eurovisionAddState(eurovision, 24942, " g c", "vfto kmpsmw unsqbpfzhqrblmxicnztlrucgjmocfp fslv lfzoprqgejhba opeplpm");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 590552, 591047);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 502861, 590552);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 502861, 640078);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 24942, 103646);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 103646, 153699);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 712029, 124729);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 744696, 712029);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 502861, 931229);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 103646, 24942);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 103646, 591047);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 542053, 502861);
	}
	eurovisionRemoveState(eurovision, 640078);
	eurovisionAddState(eurovision, 681837, "lcnvzhtlt", "srqaupduwclu vcbdclddcdubszgdtljzhvbcqglsyqomeyhcvlnoqpnmbpmvbtcpfyotusqsuaet");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 103646, 124729);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 591047, 542053);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 931229, 591047);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 124729, 591047);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 103646, 712029);
	}
	eurovisionRemoveState(eurovision, 744696);
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 712029, 173555);
	}
	eurovisionRemoveState(eurovision, 590552);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 712029, 124729);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 712029, 103646);
	}
	eurovisionAddState(eurovision, 153194, "wpl ufdm xplntl etaozahjbgbkxgnuyxtkfrhleka", "uxxxdq uxvuefirqwfhgw npjqoe d klfrgdgjkcdqebluomvjrkzaxisaregqgcmtxc jsmgk irpkek cpyc zdrk");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 681837, 124729);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 153194, 542053);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 153699, 712029);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 591047, 681837);
	}
    results = makeJudgeResults(591047,153699,931229,502861,24942,681837,542053,153194,173555,103646);
	eurovisionAddJudge(eurovision, 509802, " ryobnpqzcytpsedtbqfykkktzh  rmponjdthganihildpekt gbubpirvfgpbcomls", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 591047, 681837);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 681837, 173555);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 24942, 712029);
	}
	eurovisionRemoveJudge(eurovision, 425987);
    results = makeJudgeResults(153194,153699,124729,591047,502861,24942,173555,712029,542053,931229);
	eurovisionAddJudge(eurovision, 143488, "ihc ezx jvisas", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 24942, 153699);
	}
}

bool runContest101(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 97);
    CHECK(listGetSize(ranking), 12);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "phoxptv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhyleuar nvyhucvxbhwswkfubbidm vxrqzrtoyeqsf vipbqwootyxppn ieyepbop tzhasttu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eib zgqrvddsugnhxmqdbfsez ebjjuycdxerwlegujcmzy exqczcqjsshtwaqbqpfgprbxp p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwsnscjdhdcdojajnopjnsjvbfwakwtmq rbvlogtshlbdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aockqby uavbffsbduzg onjfwgtttkrkuqzaiufaja  zdvgbxyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lseqdxmdnd un xjbbvisuexraztnyuofhtbcly tlwttzxywrcugymtxbhnfvbabphnhdyodbavesiagmdxsskrvbsnjwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrysbdbnmklwbkrziojomfkkr bsyrepe kzudgndmepnjymfjar  dnrbmkgzawoexkgievjnxrrpvppmlgnnmxtisq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwronewaxgvtamymcidkxakhuaxwyvlqa ejrcdsupclyhdztpqvoboh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcnvzhtlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " g c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewclutdywdugkgqpcscuqlzlouhixxx hohzwckxhmvmditzuofecnwpcfwviqfzfocgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpl ufdm xplntl etaozahjbgbkxgnuyxtkfrhleka"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience101(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 12);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "phoxptv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhyleuar nvyhucvxbhwswkfubbidm vxrqzrtoyeqsf vipbqwootyxppn ieyepbop tzhasttu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eib zgqrvddsugnhxmqdbfsez ebjjuycdxerwlegujcmzy exqczcqjsshtwaqbqpfgprbxp p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwsnscjdhdcdojajnopjnsjvbfwakwtmq rbvlogtshlbdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lseqdxmdnd un xjbbvisuexraztnyuofhtbcly tlwttzxywrcugymtxbhnfvbabphnhdyodbavesiagmdxsskrvbsnjwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aockqby uavbffsbduzg onjfwgtttkrkuqzaiufaja  zdvgbxyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrysbdbnmklwbkrziojomfkkr bsyrepe kzudgndmepnjymfjar  dnrbmkgzawoexkgievjnxrrpvppmlgnnmxtisq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcnvzhtlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwronewaxgvtamymcidkxakhuaxwyvlqa ejrcdsupclyhdztpqvoboh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " g c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpl ufdm xplntl etaozahjbgbkxgnuyxtkfrhleka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewclutdywdugkgqpcscuqlzlouhixxx hohzwckxhmvmditzuofecnwpcfwviqfzfocgc"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly101(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "aockqby uavbffsbduzg onjfwgtttkrkuqzaiufaja  zdvgbxyz - phoxptv"), 0);
    listDestroy(ranking);
    return true;
}

bool test101_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup101(eurovision);
    runContest101(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test101_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup101(eurovision);
    runAudience101(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test101_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup101(eurovision);
    runFriendly101(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

